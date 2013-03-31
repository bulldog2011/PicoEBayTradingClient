// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_PaymentTypeCodeType.h"

/**
 @file
 
 For GetSellerPayments, indicates the type of Half.com payment being
 made (sale or refund).
 
*/

/**
 
 (out) The buyer paid the seller.
 Applicable to Half.com.
 
*/
NSString *const Trading_PaymentTypeCodeType_SALE = @"Sale";

/**
 
 (out) The seller issued a refund to the buyer.
 Applicable to Half.com.
 
*/
NSString *const Trading_PaymentTypeCodeType_REFUND = @"Refund";

/**
 
 For eBay internal use.
 
*/
NSString *const Trading_PaymentTypeCodeType_SELLER_DENIED_PAYMENT = @"SellerDeniedPayment";

/**
 
 For eBay internal use.
 
*/
NSString *const Trading_PaymentTypeCodeType_ADMIN_REVERSAL = @"AdminReversal";

/**
 
 All other payment types.
 
*/
NSString *const Trading_PaymentTypeCodeType_ALL_OTHER = @"AllOther";

/**
 
 (out) The buyer paid the seller for a rental extension.
 Applicable to Half.com only.
 
*/
NSString *const Trading_PaymentTypeCodeType_RENTAL_EXTENSION = @"RentalExtension";

/**
 
 (out) The buyer paid the seller for a rental buyout.
 Applicable to Half.com only.
 
*/
NSString *const Trading_PaymentTypeCodeType_RENTAL_BUYOUT = @"RentalBuyout";

/**
 
 (out) Reserved for internal or future use.
 
*/
NSString *const Trading_PaymentTypeCodeType_CUSTOM_CODE = @"CustomCode";
