// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_NameValueListArrayType;

/**
 
 Defines details about recommended names and values for custom Item Specifics.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CategoryItemSpecificsType : NSObject <PicoBindable> {

@private
    NSString *_categoryID;
    Trading_NameValueListArrayType *_itemSpecifics;
    NSMutableArray *_any;

}


/**
 
 A leaf-level eBay category ID. This call retrieves recommended
 Item Specifics (if any) for each leaf category you specify.
 (The call returns no results for a parent category.)
 To determine which leaf categories support listing with custom Item Specifics, use GetCategoryFeatures. <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 This call may return recommendations for categories that don't
 support listing with custom Item Specifics. That is, the
 presence of recommendations for a category does not necessarily
 mean that AddItem supports custom Item Specifics for that
 category and site.</span><br>
 <br>
 The request requires either CategoryID,
 CategorySpecfics.CategoryID, or CategorySpecificsFileInfo
 (or the call returns an error).
 CategoryID and CategorySpecific.CategoryID can both be used
 in the same request. (CategorySpecific offers more options
 to control the response.)
 Some input fields, such as IncludeConfidence, only work when
 CategoryID or CategorySpecfics.CategoryID is specified.<br>
 <br>
 You can specify multiple leaf categories, but more categories
 can result in longer response times.
 If your request times out, specify fewer IDs.
 If you specify the same ID twice, we use the first instance.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 In the request, use this to retrieve recommended values for a
 particular name (in the specified category). This could be
 an arbitrary name that the seller wants to check, or it could
 be a name that was returned in a prior response.
 At the time of this writing, this value is case-sensitive.
 (Wildcards are not supported.)<br>
 <br>
 In the response, contains a list of Item Specifics (if any)
 that eBay  recommends as most popular within the specified
 category.
 
 
 type : class Trading_NameValueListArrayType
*/
@property (nonatomic, retain) Trading_NameValueListArrayType *itemSpecifics;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
