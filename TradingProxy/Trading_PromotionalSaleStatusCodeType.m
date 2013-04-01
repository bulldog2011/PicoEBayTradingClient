// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_PromotionalSaleStatusCodeType.h"

/**
 @file
 
 Values indicate the status of a sale. Used for the Promotional Price Display
 feature, which enables sellers to apply discounts across many listings.
 
*/

/**
 
 The promotional sale is active.
 
*/
NSString *const Trading_PromotionalSaleStatusCodeType_ACTIVE = @"Active";

/**
 
 The promotional sale is scheduled. That is, the start time is in the future.
 
*/
NSString *const Trading_PromotionalSaleStatusCodeType_SCHEDULED = @"Scheduled";

/**
 
 The status of the promotional sale is pending. When first scheduling a Sale,
 if you select over 200 listings to be in any given Sale, it will take some
 time for eBay to process the request.
 
*/
NSString *const Trading_PromotionalSaleStatusCodeType_PROCESSING = @"Processing";

/**
 
 The promotional sale is inactive, the sale has ended. You can reschedule a
 sale once it has ended, but you will need to wait at least 24 hours before it
 can become active.
 
*/
NSString *const Trading_PromotionalSaleStatusCodeType_INACTIVE = @"Inactive";

/**
 
 The promotional sale has been deleted. Deleted promotional sales cannot be
 updated or reactivated.
 
*/
NSString *const Trading_PromotionalSaleStatusCodeType_DELETED = @"Deleted";

/**
 
 Reserved for internal or future use.
 
*/
NSString *const Trading_PromotionalSaleStatusCodeType_CUSTOM_CODE = @"CustomCode";
