// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ItemType;

/**
 
  A list of possible My eBay Second Chance Offers.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MyeBaySecondChanceOfferListType : NSObject <PicoBindable> {

@private
    NSNumber *_totalAvailable;
    NSMutableArray *_secondChanceOffer;
    NSMutableArray *_any;

}


/**
 
 The total number of My eBay Second Chance Offers available.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalAvailable;

/**
 
 A Second Chance Offer item.
 
 
 entry type : class Trading_ItemType
*/

@property (nonatomic, retain) NSMutableArray *secondChanceOffer;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
