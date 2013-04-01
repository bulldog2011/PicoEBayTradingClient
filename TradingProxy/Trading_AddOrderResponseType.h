// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 Returns a unique identifier for the order. A buyer may make a single
 payment to purchase all of the order line items included
 in the order.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AddOrderResponseType : Trading_AbstractResponseType {

@private
    NSString *_orderID;
    NSDate *_createdTime;

}


/**
 
 The unique identifier for the Combined Payment order. This OrderID can be used as an input filter in GetOrders.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderID;

/**
 
 The date and time the Combined Payment order was created.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *createdTime;


@end
