// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ProductCreationEnabledCodeType.h"

/**
 @file
 
 Values indicate whether product creation is enabled, disabled or required for a category.
 
*/

/**
 
 Product creation is not supported for the category.
 AddItem family calls can still list with product.
 
*/
NSString *const Trading_ProductCreationEnabledCodeType_DISABLED = @"Disabled";

/**
 
 Product creation is supported for the category. AddItem and related listing
 calls can list with a product from the eBay catalog, but it is not mandatory.
 Currently, unless listing with a product is required, the capability to add
 products to eBay catalogs is only available to a select set of users
 identified by eBay.
 
*/
NSString *const Trading_ProductCreationEnabledCodeType_ENABLED = @"Enabled";

/**
 
 Product creation is supported for the category and listing with a product is
 required. If there is no matching product in the eBay catalog for the item,
 the seller must add the product to the catalog before listing the item. For
 categories that require listing with a product, any seller will be allowed to
 add a product. Product creation will be supported in the API and other tools.
 
*/
NSString *const Trading_ProductCreationEnabledCodeType_REQUIRED = @"Required";

/**
 
 (out) Reserved for internal or future use.
   
*/
NSString *const Trading_ProductCreationEnabledCodeType_CUSTOM_CODE = @"CustomCode";
