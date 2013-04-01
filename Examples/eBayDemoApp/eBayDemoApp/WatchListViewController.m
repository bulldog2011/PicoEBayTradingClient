//
//  WatchListViewController.m
//  eBayDemoApp
//
//  Created by bulldog on 13-4-1.
//  Copyright (c) 2013 Leansoft. All rights reserved.
//

#import "WatchListViewController.h"
#import "ItemTableViewCell.h"
#import "EBayTradingServiceClient.h"
#import "Trading_CommonTypes.h"
#import "SOAP11Fault.h"
#import "PriceUtil.h"
#import "Duration.h"

#import "Toast+UIView.h"

static BOOL isFixedPrice(Trading_ItemType *item)
{
    return [item.listingType isEqualToString:Trading_ListingTypeCodeType_FIXED_PRICE_ITEM ] ||
	[item.listingType isEqualToString:Trading_ListingTypeCodeType_STORES_FIXED_PRICE];
}

@interface WatchListViewController ()

-(void) getWatchList;

@end

@implementation WatchListViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    if (_tableData) {
        [_tableData removeAllObjects];
    } else {
        _tableData = [[NSMutableArray alloc] init];
    }
    
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void) viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    [self getWatchList];
}

-(void) getWatchList {
    // start progress activity
    [self.view makeToastActivity];
    
    // Get shared service client
    EBayTradingServiceClient  *tradingClient = [EBayTradingServiceClient sharedClient];
    tradingClient.debug = YES; // enable request/response message logging
    
    // Build request object
    Trading_GetMyeBayBuyingRequestType *request = [[[Trading_GetMyeBayBuyingRequestType alloc] init] autorelease];
    request.watchList = [[[Trading_ItemListCustomizationType alloc] init] autorelease];
    request.watchList.include = [NSNumber numberWithBool:YES];
    
    [tradingClient getMyeBayBuying:request success:^(Trading_GetMyeBayBuyingResponseType *responseObject) {
        // stop progress activity
        [self.view hideToastActivity];
        
        if ([Trading_AckCodeType_SUCCESS isEqualToString:responseObject.ack]) { // success
            if ([responseObject.watchList.itemArray.item count] > 0) {
                [_tableData removeAllObjects];
                [_tableData addObjectsFromArray:responseObject.watchList.itemArray.item];
                [self.tableView reloadData]; // update table view
            }
        } else { // response residenet error
            Trading_ErrorType *error = [responseObject.errors objectAtIndex:0];
            [self.view makeToast:error.shortMessage duration:3.0 position:@"center" title:@"Error"];
        }
    } failure:^(NSError *error, id<PicoBindable> soapFault) {
        // stop progress activity
        [self.view hideToastActivity];
        
        if (error) { // http or response parsing error
            [self.view makeToast:[error localizedDescription] duration:3.0 position:@"center" title:@"Error"];
        } else if (soapFault) {
            SOAP11Fault *soap11Fault = (SOAP11Fault *)soapFault;
            [self.view makeToast:soap11Fault.faultstring duration:3.0 position:@"center" title:@"SOAP Fault"];
        }
    }];
}

#pragma mark -
#pragma mark UITableViewDelegate

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return [_tableData count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView
         cellForRowAtIndexPath:(NSIndexPath *)indexPath {
	
	// Initialize & Populate table cell
	NSString *cellID = [ItemTableViewCell reuseIdentifier];
    ItemTableViewCell *cell = (ItemTableViewCell *)[tableView dequeueReusableCellWithIdentifier:cellID];
    if (!cell)
    {
        cell = [ItemTableViewCell itemTableViewCellFromNib];
        cell.accessoryType = UITableViewCellAccessoryNone;
    }
    [self setCell:cell fromWatchListItem:[_tableData objectAtIndex:[indexPath row]]];
    return cell;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 80;
}


/// Sets attributes of a table view cell using the given item
- (void)setCell:(ItemTableViewCell *)cell fromWatchListItem:(Trading_ItemType *)item
{
    [[cell titleLabel] setText:item.title];
    
    Trading_AmountType *currentPrice = item.sellingStatus.currentPrice;
    [[cell priceLabel] setText:[PriceUtil stringFromConvertedCurrentPrice:currentPrice.value
                                                                 currency:currentPrice.currencyID]];
    
    if (isFixedPrice(item))
    {
        [[cell bidsLabel] setText:nil];
    }
    else
    {
        NSNumber *bidCount = item.sellingStatus.bidCount;
        NSString *formatString = nil;
        if ([bidCount unsignedIntegerValue] == 1)
        {
            formatString = @"%@ bid";
        }
        else
        {
            formatString = @"%@ bids";
        }
        NSString *bidsText = [[NSString alloc] initWithFormat:formatString, bidCount];
        [[cell bidsLabel] setText:bidsText];
        [bidsText release];
    }
    
    ISODuration *timeLeft = [[ISODuration alloc] initWithISODurationString:item.timeLeft];
    UILabel *timeLeftLabel = [cell timeLeftLabel];
    [timeLeftLabel setText:[timeLeft shortString]];
    [timeLeftLabel setTextColor:[timeLeft textColor]];
    [timeLeft release];
    
    [cell setImageURL:item.pictureDetails.galleryURL];
}

-(void)dealloc {
    self.tableView = nil;
    [_tableData release];
    [super dealloc];
}

@end
