// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AddressType;

/**
 
 Contains information about a user as a buyer.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BuyerType : NSObject <PicoBindable> {

@private
    Trading_AddressType *_shippingAddress;
    NSMutableArray *_any;

}


/**
 
 Contains the shipping address of the buyer. See AddressType for its child elements. GetAllBidders
 is returning only Country and PostalCode currently.
 Output only.
 
 
 type : class Trading_AddressType
*/
@property (nonatomic, retain) Trading_AddressType *shippingAddress;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end