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
@interface Trading_GetProductFinderRequestType : Trading_AbstractRequestType {

@private
    NSString *_attributeSystemVersion;
    NSMutableArray *_productFinderID;

}


/**
 
 
 A version of the product finder attribute definitions for the site.
 Typically, an application passes the version value that was returned the last
 time the application executed this call.
 Filter that causes the call to return only the Product Finders
 for which the attribute meta-data has changed since the specified version.
 The latest version value is not necessarily greater than the previous
 value that was returned. Therefore, when comparing versions, only
 compare whether the value has changed.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *attributeSystemVersion;

/**
 
 
 A number that uniquely identifies a product finder. <br>
 <br>
 For sell-side searches, you can determine the
 product finder IDs for a category by calling GetCategory2CS.<br>
 <br>
 For buy-side searches, you can't use GetCategory2CS to reliably determine
 the product finder IDs for an eBay category.
 GetProductFinder may work for some attributes. Alternatively, you can
 use the pfid parameter from the URL of the Product Finder search page
 on the site you're interested in.
 See the Knowledge Base article referenced below for more details.<br>
 <br>
 Multiple categories can be mapped to the same product finder ID.
 You can pass zero or multiple IDs in the request. When IDs are specified, the call
 only returns product finder meta-data for the specified product finders.
 When no IDs are specified, the call returns all the current product finder
 meta-data available on the site.
 
 
 entry type : NSNumber, wrapper for primitive int
*/

@property (nonatomic, retain) NSMutableArray *productFinderID;


@end