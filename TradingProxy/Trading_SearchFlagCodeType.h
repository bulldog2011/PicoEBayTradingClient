// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 SearchFlagCodeType - Search flags for FindItemsAdvanced.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 Return only charity item listings.
 
*/
extern NSString *const Trading_SearchFlagCodeType_CHARITY;

/**
 
 Return only gift items.
 
*/
extern NSString *const Trading_SearchFlagCodeType_GIFT;

extern NSString *const Trading_SearchFlagCodeType_NOW_AND_NEW;

/**
 
 Perform a local search.
 
*/
extern NSString *const Trading_SearchFlagCodeType_LOCAL_SEARCH;

/**
 
 If specified, only items with free shipping for the user's location are
 returned. The user's location is determined from the site ID specified
 in the request. If false, no filtering is done via this attribute. A
 listing is not considered a free shipping listing if it requires
 insurance or requires pick up or requires a shipping surcharge.
 
*/
extern NSString *const Trading_SearchFlagCodeType_FREE_SHIPPING;

/**
 
 Return Gallery items only.
 
*/
extern NSString *const Trading_SearchFlagCodeType_GALLERY;

/**
 
 Picture.
 
*/
extern NSString *const Trading_SearchFlagCodeType_PICTURE;

/**
 
 Limits the results to Get It Fast listings.
 
*/
extern NSString *const Trading_SearchFlagCodeType_GET_IT_FAST;

/**
 
 Limits the results to only those listings for which lot size is 2 or greater.
 
*/
extern NSString *const Trading_SearchFlagCodeType_LOT;

/**
 
 Limits the results based on each item's eligibility to appear on the
 mobile.de site. If
 specified, queries for eligible items only. If not specified, the search
 results are not affected. Only applicable for items listed on the eBay
 Germany site (site ID 77) in subcategories of mobile.de search-enabled
 categories.
 
*/
extern NSString *const Trading_SearchFlagCodeType_GERMAN_MOTORS_SEARCHABLE;

/**
 
 Returns items that are also listed on the WorldOfGood.com website. (The Item IDs
 are the same on both websites.)
 
*/
extern NSString *const Trading_SearchFlagCodeType_WORLD_OF_GOOD;

extern NSString *const Trading_SearchFlagCodeType_DIGITAL_DELIVERY;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Trading_SearchFlagCodeType_CUSTOM_CODE;
