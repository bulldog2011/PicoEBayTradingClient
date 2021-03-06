// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Defines the feature of adding Skype buttons to listings for nontransactional formats (e.g., the advertisement format). If the field is present, the corresponding feature applies to the category. The field is returned as an empty element (i.e., a boolean value is not returned).
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SkypeMeNonTransactionalEnabledDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
