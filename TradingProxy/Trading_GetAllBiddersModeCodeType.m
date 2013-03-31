// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_GetAllBiddersModeCodeType.h"

/**
 @file
 
 Specifies which bidder information to return.
 
*/

/**
 
 (in) Returns all bidders for an ended or still-active
 listing. It may be used by any user.
 
*/
NSString *const Trading_GetAllBiddersModeCodeType_VIEW_ALL = @"ViewAll";

/**
 
 (in) Returns all non-winning bidders for ended
 listings only. It may be used only by a seller.
 
*/
NSString *const Trading_GetAllBiddersModeCodeType_ENDED_LISTING = @"EndedListing";

/**
 
 (in) Returns all non-winning bidders for an ended listing
 who have not yet received a Second Chance Offer and noted
 interest in receiving a Second Chance Offer. It may be used
 only by a seller.
 
*/
NSString *const Trading_GetAllBiddersModeCodeType_SECOND_CHANCE_ELIGIBLE_ENDED_LISTING = @"SecondChanceEligibleEndedListing";

/**
 
 (out) Reserved for internal or future use.
 
*/
NSString *const Trading_GetAllBiddersModeCodeType_CUSTOM_CODE = @"CustomCode";