// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 (public class)
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ShippingCostPaidByDetailsType : NSObject <PicoBindable> {

@private
    NSString *_shippingCostPaidByOption;
    NSString *_description;
    NSMutableArray *_any;

}


/**
 
 The party who pays the shipping cost for a returned item.
 This value can be passed in the AddItem family of calls.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shippingCostPaidByOption;

/**
 
 Display string that applications can use to present ShippingCostPaidByOption in
 a more user-friendly format (such as in a drop-down list).
 Not applicable as input to the AddItem family of calls. (Use ShippingCostPaidByOption instead.)
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
