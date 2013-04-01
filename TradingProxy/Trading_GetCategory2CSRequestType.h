// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 No longer recommended in general, although this call may still be used to
 determine whether a category is catalog-enabled. All other features of this call
 are no longer functional.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetCategory2CSRequestType : Trading_AbstractRequestType {

@private
    NSString *_categoryID;
    NSString *_attributeSystemVersion;

}


/**
 
 ID of a category for which to retrieve mappings.
 If not specified, the call
 retrieves a map for all categories.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 A version of the mappings for the site.
 Typically, an application passes the version value that was returned the last
 time the application executed this call.
 Filter that causes the call to return only the categories
 for which the mappings have changed since the specified version.
 If not specified, all category-to-characteristics set mappings are returned.
 This value changes each time changes are made to the mappings.
 The current version value is not necessarily greater than the previous
 value. Therefore, when comparing versions, only compare whether the
 value has changed.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeSystemVersion;


@end
