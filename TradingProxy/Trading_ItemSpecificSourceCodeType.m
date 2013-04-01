// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ItemSpecificSourceCodeType.h"

/**
 @file
 
 Defines the system source for an Item Specific.
 
*/

/**
 
 The Item Specific was originally stored with custom
 Item Specifics fields. (For example, the seller used
 the ItemSpecifics node in AddItem.)
 This is the default setting if Source isn't returned.
 
*/
NSString *const Trading_ItemSpecificSourceCodeType_ITEM_SPECIFIC = @"ItemSpecific";

/**
 
 The Item Specific was originally stored with eBay's
 system-defined (ID-based) attributes format. (For example,
 the seller used the AttributeSetArray node in AddItem
 at a time when the category supported Attributes.)
 
*/
NSString *const Trading_ItemSpecificSourceCodeType_ATTRIBUTE = @"Attribute";

/**
 
 The Item Specific is prefilled from a product catalog. (For example,
 the seller used ExternalProductID or ProductID in AddItem.)
 
*/
NSString *const Trading_ItemSpecificSourceCodeType_PRODUCT = @"Product";

/**
 
 Reserved for future use.
 
*/
NSString *const Trading_ItemSpecificSourceCodeType_CUSTOM_CODE = @"CustomCode";
