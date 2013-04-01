// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Defines the Motors Local Market feature. If the Motors Local Market field is present, the corresponding feature applies to the Motors Local Market category. The field is returned as an empty element (e.g., a boolean value is not returned).
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MotorsLocalMarketEnabledDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end