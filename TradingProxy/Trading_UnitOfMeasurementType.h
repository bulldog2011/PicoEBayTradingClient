// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Provides a mapping between suggested unit of measure strings and
 other, less popular strings.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_UnitOfMeasurementType : NSObject <PicoBindable> {

@private
    NSMutableArray *_alternateText;
    NSString *_suggestedText;
    NSMutableArray *_any;

}


/**
 
 A synonym for the unit of measure (such as a fully spelled out name
 like "inches" instead of the standard abbreviation).
 This can be used to help a seller map unit names they use in their
 own catalog to unit names that are more popular on eBay.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *alternateText;

/**
 
 The preferred way to specify a given unit of measure name, such as
 "in." (instead of "inches" or the " (double quote) symbol).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *suggestedText;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end