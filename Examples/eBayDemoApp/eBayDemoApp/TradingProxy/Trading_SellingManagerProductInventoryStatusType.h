// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_AmountType;

/**
 Describes the inventory status of a specific Selling Manager Product
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellingManagerProductInventoryStatusType : NSObject <PicoBindable> {

@private
    NSNumber *_quantityScheduled;
    NSNumber *_quantityActive;
    NSNumber *_quantitySold;
    NSNumber *_quantityUnsold;
    NSNumber *_successPercent;
    Trading_AmountType *_averageSellingPrice;
    NSMutableArray *_any;

}


/**
 
 Quantity of products scheduled to be listed.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityScheduled;

/**
 
 Quantity of products actively listed.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityActive;

/**
 
 Quantity of products sold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantitySold;

/**
 
 Quantity of product unsold.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantityUnsold;

/**
 
 Percentage of ended listings that sold.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *successPercent;

/**
 
 Average selling price for the product.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *averageSellingPrice;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
