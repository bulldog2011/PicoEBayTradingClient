//
//  DetailsViewController.m
//  eBayDemoApp
//
//  Created by bulldog on 13-3-24.
//  Copyright (c) 2013 Leansoft. All rights reserved.
//

#import "DetailsViewController.h"
#import "EBayShoppingServiceClient.h"
#import "Finding_CommonTypes.h"
#import "Shopping_CommonTypes.h"
#import "PriceUtil.h"
#import "Duration.h"
#import "UIImageView+AFNetworking.h"
#import "Toast+UIView.h"

#import "EBayTradingServiceClient.h"
#import "Trading_CommonTypes.h"
#import "SOAP11Fault.h"

#import "WatchListViewController.h"

@interface DetailsViewController ()

- (void)getSingleItem:(NSString *)itemID;

-(void)viewWatchList;

@end

@implementation DetailsViewController

static UIImageView *afImageView;

+(void) initialize {
    afImageView = [[UIImageView alloc] init];
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil;
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self != nil)
    {
        [self setTitle:@"Details"];
    }
    return self;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void) viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    // set the fields got from finding api
    self.titleLabel.text = self.selectedItem.title;
    Finding_Amount *currentPrice = self.selectedItem.sellingStatus.currentPrice;
    self.priceLabel.text = [PriceUtil stringFromValue:currentPrice.value currency:currentPrice.currencyId];
    self.itemIDLabel.text = self.selectedItem.itemId;
    self.conditionLabel.text = self.selectedItem.condition.conditionDisplayName;
    self.listingTypeLabel.text = self.selectedItem.listingInfo.listingType;
    Finding_Amount *shippingCost = self.selectedItem.shippingInfo.shippingServiceCost;
    self.shippingCostLabel.text = [PriceUtil stringFromValue:shippingCost.value currency:shippingCost.currencyId];
    self.paymentMethodLabel.text = [self.selectedItem.paymentMethod componentsJoinedByString:@", "];
    
    if (self.isFixedPrice) {
        self.priceTypeLabel.text = @"Buy It Now: ";
    }
    else {
        self.priceTypeLabel.text = @"Current Bid:";
    }
    
    UIBarButtonItem *rightbarButton = [[UIBarButtonItem alloc] initWithTitle:@"View Watch List" style:UIBarButtonItemStyleBordered target:self action:@selector(viewWatchList)];
	[self navigationItem].rightBarButtonItem = rightbarButton;

    // fill remaining fileds
    [self getSingleItem:self.selectedItem.itemId];
}

-(void)viewWatchList {
    if (!self.watchListViewController) {
        self.watchListViewController = [[WatchListViewController alloc] initWithNibName:@"WatchListViewController" bundle:nil];
    }
    [self.navigationController pushViewController:self.watchListViewController animated:YES];
    
}

-(void) viewWillDisappear:(BOOL)animated {
    [afImageView cancelImageRequestOperation];
    
    self.imageView.image = nil;
    
    [super viewWillDisappear:animated];
}

- (void)getSingleItem:(NSString *)itemID {
    // start progress activity
    [self.view makeToastActivity];
    
    // get shopping client
    EBayShoppingServiceClient *shoppingClient = [EBayShoppingServiceClient sharedClient];
    shoppingClient.debug = YES;
    
    // build request
    Shopping_GetSingleItemRequestType *request = [[[Shopping_GetSingleItemRequestType alloc] init] autorelease];
    request.itemID = itemID;
    request.includeSelector = @"Details,ShippingCosts";
    
    // make api call
    [shoppingClient getSingleItem:request success:^(Shopping_GetSingleItemResponseType *responseObject) {
        
        if ([Shopping_AckCodeType_SUCCESS isEqualToString:responseObject.ack] || [Shopping_AckCodeType_WARNING isEqualToString:responseObject.ack]) {
        
            // success handling logic
            if (responseObject.item) {
                Shopping_SimpleItemType *item = responseObject.item;
                
                // update remaining fields
                self.priceLabel.text = [PriceUtil stringFromValue:item.currentPrice.value currency: item.currentPrice.currencyID];
                
                static NSDateFormatter* dateFormatter = nil;
                if (!dateFormatter)
                {
                    dateFormatter = [[NSDateFormatter alloc] init];
                    [dateFormatter setDateStyle:kCFDateFormatterShortStyle];
                    [dateFormatter setTimeStyle:kCFDateFormatterMediumStyle];
                }
                self.startTimeLabel.text = [dateFormatter stringFromDate:item.startTime];
                self.endTimeLabel.text = [dateFormatter stringFromDate:item.endTime];
                
                ISODuration *timeLeft = [[ISODuration alloc] initWithISODurationString:item.timeLeft];
                self.timeLeftLabel.text = [timeLeft shortString];
                self.timeLeftLabel.textColor = [timeLeft textColor];
                [timeLeft release];
                
                self.locationLabel.text = item.location;
                
                if ([Shopping_AckCodeType_WARNING isEqualToString:responseObject.ack]) {
                    Shopping_ErrorType *error = [responseObject.errors objectAtIndex:0];
                    [self.view makeToast:error.shortMessage duration:3.0 position:@"center" title:@"Shopping API Warning"];
                }
                
                // async image loading
                NSURLRequest *request = [NSURLRequest requestWithURL:[NSURL URLWithString:[item.pictureURL objectAtIndex:0]]];
                [afImageView setImageWithURLRequest: request placeholderImage:nil success:^(NSURLRequest *request, NSHTTPURLResponse *response, UIImage *image) {
                    
                    // stop progress activity
                    [self.view hideToastActivity];
                    if (image) {
                        self.imageView.image = image;
                    }
                } failure:^(NSURLRequest *request, NSHTTPURLResponse *response, NSError *error) {
                    // do nothing
                    // stop progress activity
                    [self.view hideToastActivity];
                }];
                
            } else {
                // stop progress activity
                [self.view hideToastActivity];
                [self.view makeToast:@"Fail to get shopping item" duration:3.0 position:@"center" title:@"Error"];
            }
        } else {
            // stop progress activity
            [self.view hideToastActivity];
            Shopping_ErrorType *error = [responseObject.errors objectAtIndex:0];
            [self.view makeToast:error.shortMessage duration:3.0 position:@"center" title:@"Shopping API Error"];
        }
        
    } failure:^(NSError *error) {
        // stop progress activity
        [self.view hideToastActivity];
        
        // failure handling logic
        [self.view makeToast:[error localizedDescription] duration:3.0 position:@"center" title:@"Shopping API Error"];
    }];
}

-(IBAction)viewOneBayMobileWeb:(id)sender {
    
    NSURL *url=[NSURL URLWithString:self.selectedItem.viewItemURL];
	[[UIApplication sharedApplication]openURL:url];
}

-(IBAction)addToWatch:(id)sender {
    // start progress activity
    [self.view makeToastActivity];
    
    EBayTradingServiceClient *tradingClient = [EBayTradingServiceClient sharedClient];
    tradingClient.debug = YES;
    
    Trading_AddToWatchListRequestType *request = [[[Trading_AddToWatchListRequestType alloc] init] autorelease];
    request.itemID = [NSMutableArray arrayWithObject:self.selectedItem.itemId];
    
    [tradingClient addToWatchList:request success:^(Trading_AddToWatchListResponseType *responseObject) {
        // stop progress activity
        [self.view hideToastActivity];
        
        if ([Trading_AckCodeType_SUCCESS isEqualToString:responseObject.ack]) {
            [self.view makeToast:@"Item was added to your watch list successfully" duration:3.0 position:@"center" title:@"Success"];
        } else { // response resident error
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

- (void)dealloc
{
    [_selectedItem release];
    [_titleLabel release];
    [_priceTypeLabel release];
    [_priceLabel release];
    [_itemIDLabel release];
    [_startTimeLabel release];
    [_endTimeLabel release];
    [_timeLeftLabel release];
    [_conditionLabel release];
    [_listingTypeLabel release];
    [_shippingCostLabel release];
    [_locationLabel release];
    [_paymentMethodLabel release];
    [_imageView release];
    [_currentGetSingleItemRequest release];
    
    [super dealloc];
}

@end
