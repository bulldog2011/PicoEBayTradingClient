// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_SiteIDFilterCodeType.h"

/**
 @file
 
 Site criteria for filtering search results. The site value is determined by the
 site specified in the request (the site ID in the SOAP URL or, for Unified
 Schema XML requests, the site ID in the X-EBAY-API-SITEID HTTP Header).
 
*/

/**
 
 (in) Items listed in the currency implied by the site specified in the
 request.
 
*/
NSString *const Trading_SiteIDFilterCodeType_LISTED_IN_CURRENCY_IMPLIED = @"ListedInCurrencyImplied";

/**
 
 (in) Items located in the country implied by the site specified in the
 request.
 
*/
NSString *const Trading_SiteIDFilterCodeType_LOCATED_IN_COUNTRY_IMPLIED = @"LocatedInCountryImplied";

/**
 
 (in) Items available to the country implied by the site specified in the
 request. For the US site, this implies listings from ALL English-language
 countries that are available to the US.
 
*/
NSString *const Trading_SiteIDFilterCodeType_AVAILABLE_IN_COUNTRY_IMPLIED = @"AvailableInCountryImplied";

/**
 
 (in) Items listed on the site specified in the request, regardless of listing
 currency.
 
*/
NSString *const Trading_SiteIDFilterCodeType_SITE_IMPLIED = @"SiteImplied";

/**
 
 (in) Items located in Belgium or listed on one of the two Belgian sites.
 
*/
NSString *const Trading_SiteIDFilterCodeType_BELGIUM_LISTING = @"BelgiumListing";

/**
 
 (out) Reserved for internal or future use.
 
*/
NSString *const Trading_SiteIDFilterCodeType_CUSTOM_CODE = @"CustomCode";
