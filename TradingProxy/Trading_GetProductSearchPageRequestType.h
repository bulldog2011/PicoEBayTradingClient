// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 This type is deprecated as the call is no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetProductSearchPageRequestType : Trading_AbstractRequestType {

@private
    NSString *_attributeSystemVersion;
    NSMutableArray *_attributeSetID;

}


/**
 
 
 A version of the search page definitions for the site. Typically, an
 application passes the version value that was returned the last time the
 application executed this call. Filter that causes the call to return only
 the search pages for which the attribute meta-data has changed since the
 specified version. The latest version value is not necessarily greater
 than the previous value that was returned. Therefore, when comparing
 versions, only compare whether the value has changed.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeSystemVersion;

/**
 
 
 A characteristic set ID that is associated with a
 catalog-enabled category that supports product search pages.
 You can pass an array of these IDs in the request.
 Each characteristic set corresponds to a level in the
 eBay category hierarchy at which all items share common characteristics.
 Multiple categories can be mapped to the same characteristic set.
 Each ID is used as a filter to limit the response content to fewer
 characteristic sets. When IDs are specified, the call only returns
 search page data for the corresponding characteristic sets.
 When no IDs are specified, the call returns all the current
 search page data in the system.
 
 
 entry type : NSNumber, wrapper for primitive int
*/

@property (nonatomic, retain) NSMutableArray *attributeSetID;


@end
