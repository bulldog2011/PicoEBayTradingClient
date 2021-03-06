// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_PaginationType;

/**
 
 Defines how a list of items should be returned.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ItemListCustomizationType : NSObject <PicoBindable> {

@private
    NSNumber *_include;
    NSString *_listingType;
    NSString *_sort;
    NSNumber *_durationInDays;
    NSNumber *_includeNotes;
    Trading_PaginationType *_pagination;
    NSString *_orderStatusFilter;
    NSMutableArray *_any;

}


/**
 
 Specifies whether or not to include the container in the response.
 Set the value to true to return the default set of fields for the
 container. Not needed if you set a value for at least one other field
 in the container.
 <br><br>
 If you set DetailLevel to ReturnAll, set Include to false to exclude
 the container from the response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *include;

/**
 
 Specifies the listing type of items in the returned list.
 
 
 type: string constant in Trading_ListingTypeCodeType.h
*/
@property (nonatomic, retain) NSString *listingType;

/**
 
 Specifies the sort order of the result. Default is Ascending.
 
 
 type: string constant in Trading_ItemSortTypeCodeType.h
*/
@property (nonatomic, retain) NSString *sort;

/**
 
 Specifies the time period during which an item was won or lost. Similar to the
 period drop-down menu in the My eBay user interface. For example, to return
 the items won or lost in the last week, specify a DurationInDays of 7.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *durationInDays;

/**
 
 Specifies whether or not to include Item.PrivateNotes and Item.eBayNotes
 in the response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeNotes;

/**
 
 Specifies how to create virtual pages in the returned list.
 <br>
 Default for EntriesPerPage with GetMyeBayBuying is 200.
 
 
 type : class Trading_PaginationType
*/
@property (nonatomic, retain) Trading_PaginationType *pagination;

/**
 
 Filter to reduce the SoldList response based on whether the seller (or eBay) marked the applicable order as Paid and/or Shipped
 in My eBay.<br>
 <br>
 (Sellers can use CompleteSale or the eBay Web site UI to mark an
 order as Paid or Shipped in My eBay. Sellers can also specify
 PaymentStatus in ReviseCheckoutStatus to mark an order as
 Paid or awaiting payment in My eBay.)
 
 
 type: string constant in Trading_OrderStatusFilterCodeType.h
*/
@property (nonatomic, retain) NSString *orderStatusFilter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
