// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 
 Contains summary information about the items the seller is selling.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MyeBaySellingSummaryType : NSObject <PicoBindable> {

@private
    NSNumber *_activeAuctionCount;
    NSNumber *_auctionSellingCount;
    NSNumber *_auctionBidCount;
    Trading_AmountType *_totalAuctionSellingValue;
    NSNumber *_totalSoldCount;
    Trading_AmountType *_totalSoldValue;
    NSNumber *_soldDurationInDays;
    NSNumber *_classifiedAdCount;
    NSNumber *_totalLeadCount;
    NSNumber *_classifiedAdOfferCount;
    NSNumber *_totalListingsWithLeads;
    NSNumber *_quantityLimitRemaining;
    Trading_AmountType *_amountLimitRemaining;
    NSMutableArray *_any;

}


/**
 
 The number of currently active auctions that will sell. That
 is, there is at least one bidder, and any reserve price has
 been met. Equivalent to the "Will Sell" value in My eBay.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *activeAuctionCount;

/**
 
 The total number of currently active auctions for a given
 seller. Note that this does not include listings that are
 FixedPriceItem or StoresFixedPrice. Equivalent to the
 "Auction Quantity" value in My eBay.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *auctionSellingCount;

/**
 
 The total number of bids made on the seller's active listings.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *auctionBidCount;

/**
 
 For all items that the seller has for sale, the total
 selling values of those items having bids and where the
 Reserve price is met (if a Reserve price is specified).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalAuctionSellingValue;

/**
 
 The total number of items that the seller has sold in the
 past 31 days.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalSoldCount;

/**
 
 The total monetary value of the items the seller has sold.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *totalSoldValue;

/**
 
 The average duration, in days, of all items sold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *soldDurationInDays;

/**
 
 The total number of Classified Ad listings listed by the
 seller.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *classifiedAdCount;

/**
 
 The total number of leads from the seller's classified
 ad listings. Number indicates the total number of emails
 received for the listings
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalLeadCount;

/**
 
 The total number of offers received on active Classified
 Ad listings.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *classifiedAdOfferCount;

/**
 
 The total number of Classified Ad listings that have an
 associated lead.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalListingsWithLeads;

/**
 
 The quantity of items that this seller can list. This number refers to the total quantity of items in all listings.
 For example, if the seller's limit was a quantity of 100, this could be 100 listings of one item each, or one listing with a quantity of 100 items.
 The seller will be unable to list additional items or quantities of items for sale in excess of this number for the
 current month unless the seller requests an increase from eBay using the "Request higher selling limits" link in the All Selling section
 of My eBay. (Under "Selling Limits".) Notice that the amount limit (see AmountLimitRemaining) may be reached
 before the quantity limit is reached.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *quantityLimitRemaining;

/**
 
 The total value of the items listed price that this seller can list. This amount is the total of the prices
 specified upon listing. For example, for fixed price listings, this is the total of the fixed price amounts.
 For auction listings, this is the total of the starting prices.
 The seller will be unable to list an item if the amount of the item's fixed price or starting price (for auctions)
 exceeds the amount limit.
 This is part of the seller limit, which can be increased by requesting an increase from eBay using the
 "Request higher selling limits" link in the All Selling section
 of My eBay. (Under "Selling Limits".) Notice that the quantity limit (see QuantityLimitRemaining) may be reached
 before the amount limit is reached.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *amountLimitRemaining;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
