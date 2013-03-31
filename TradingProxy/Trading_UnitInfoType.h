// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type provides information about the weight, volume or other quantity measurement of a listed item. The European Union requires listings for certain types of products to include the price per unit so buyers can accurately compare prices. eBay uses the <strong>UnitType</strong> and <strong>UnitQuantity</strong> values and the item's listed price to calculate and display the per-unit price on eBay EU sites. 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_UnitInfoType : NSObject <PicoBindable> {

@private
    NSString *_unitType;
    NSNumber *_unitQuantity;
    NSMutableArray *_any;

}


/**
 
 Designation of size, weight, volume or count to be used to specify the unit quantity of the item. This value can be one of the following:
 <br/>
 <pre> Kg  100g  10g  L  100ml  10ml  M  M2  M3  Unit </pre>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *unitType;

/**
 
 Number of units of size, weight, volume or count of the specified unit type for the item. eBay divides the item price by this number to get the price per unit to be displayed in the item listing for comparison purposes.
 
 
 type : NSNumber, wrapper for primitive double
*/
@property (nonatomic, retain) NSNumber *unitQuantity;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
