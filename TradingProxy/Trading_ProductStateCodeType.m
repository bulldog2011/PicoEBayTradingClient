// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ProductStateCodeType.h"

/**
 @file
 
 No longer applicable to any categories.
 
*/

/**
 
 This product's details have been updated.
 If your application currently uses the product for listing or searching,
 we recommend that you check to make sure the product data still meets your needs.
 
*/
NSString *const Trading_ProductStateCodeType_UPDATE = @"Update";

/**
 
 This product has changed. This product has been mapped to a newer
 product in the catalog that eBay (or Half.com) is currently using,
 and its details have been updated based on the new catalog data.
 The product reference ID remains the same
 (but the longer product ID string may have changed).
 If your application currently uses the product for listing or searching,
 we recommend that you check to make sure the product data still meets your needs.
 
*/
NSString *const Trading_ProductStateCodeType_UPDATE_MAJOR = @"UpdateMajor";

/**
 
 This product was previously available in an earlier catalog,
 but it has not been mapped to a product in the catalog that eBay
 is currently using. It can still be used to pre-fill listings, but
 it may contain fewer details than other products.
 If your application currently uses the product for listing or searching,
 we recommend that you check to make sure the product data still meets your needs.
 Not applicable to Half.com.
 
*/
NSString *const Trading_ProductStateCodeType_UPDATE_NO_DETAILS = @"UpdateNoDetails";

/**
 
 Some information in this product is scheduled to be merged into another product
 in the catalog that eBay (or Half.com) is currently using. This product may
 be removed from the system at any time.
 If your application currently uses the product for listing or searching,
 we recommend that you update your application to use a product that is not
 scheduled to be merged or deleted.
 
*/
NSString *const Trading_ProductStateCodeType_MERGE = @"Merge";

/**
 
 This product is marked for deletion, and it will not be mapped to another product.
 You cannot add or relist items that use products marked for deletion.
 If your application currently uses the product for listing or searching,
 we recommend that you update your application to use a product that is not
 scheduled to be merged or deleted.
 
*/
NSString *const Trading_ProductStateCodeType_DELETE = @"Delete";

/**
 
 Reserved for internal or future use.
 
*/
NSString *const Trading_ProductStateCodeType_CUSTOM_CODE = @"CustomCode";