// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_MinimumFeedbackScoreDetailsType;
@class Trading_VerifiedUserRequirementsDetailsType;
@class Trading_MaximumItemRequirementsDetailsType;
@class Trading_MaximumBuyerPolicyViolationsDetailsType;
@class Trading_MaximumUnpaidItemStrikesInfoDetailsType;

/**
 
 Type defining the <b>BuyerRequirementDetails</b> container, which is returned in
 GeteBayDetails, and provides the seller with the buyer requirement features (and applicable
 values) that are supported by the listing site.
 <br/><br/>
 <span class="tablenote"><b>Note: </b>
 This container is only returned if <b>BuyerRequirementDetails</b> is included as a <b>DetailName</b>
 filter in the request, or if no <b>DetailName</b> filters are used in the request.
 </span>  <br/><br/>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SiteBuyerRequirementDetailsType : NSObject <PicoBindable> {

@private
    NSNumber *_linkedPayPalAccount;
    Trading_MaximumBuyerPolicyViolationsDetailsType *_maximumBuyerPolicyViolations;
    Trading_MaximumItemRequirementsDetailsType *_maximumItemRequirements;
    Trading_MaximumUnpaidItemStrikesInfoDetailsType *_maximumUnpaidItemStrikesInfo;
    Trading_MinimumFeedbackScoreDetailsType *_minimumFeedbackScore;
    NSNumber *_shipToRegistrationCountry;
    Trading_VerifiedUserRequirementsDetailsType *_verifiedUserRequirements;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 Specifies that the site's buyer requirements support PayPal.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *linkedPayPalAccount;

/**
 
 Blocks bidders who have reached the maximum allowed buyer
 policy violation stricks (in a specific time period) from bidding on this item.
 
 
 type : class Trading_MaximumBuyerPolicyViolationsDetailsType
*/
@property (nonatomic, retain) Trading_MaximumBuyerPolicyViolationsDetailsType *maximumBuyerPolicyViolations;

/**
 
   Limits unpaying or low feedback bidders, by setting the MaximumItemCount and
   MinimumFeedbackScore to define when a bidder is blocked from bidding.
 
 
 type : class Trading_MaximumItemRequirementsDetailsType
*/
@property (nonatomic, retain) Trading_MaximumItemRequirementsDetailsType *maximumItemRequirements;

/**
 
   Specifies a maximum number of unpaid items strikes that will result in blocking a bidder from
   bidding on the item (within a specific time period).
 
 
 type : class Trading_MaximumUnpaidItemStrikesInfoDetailsType
*/
@property (nonatomic, retain) Trading_MaximumUnpaidItemStrikesInfoDetailsType *maximumUnpaidItemStrikesInfo;

/**
 
 This container consists of the values that can be used in the
 <b>BuyerRequirementDetails.MinimumFeedbackScore</b> field when listing
 an item through an Add/Revise/Relist API call. The Feedback Score for a potential
 buyer must be greater than or equal to the specified value, or that buyer is blocked
 from buying the item.
 <br/><br/>
 For this container to appear in the response,
 <b>BuyerRequirementDetails</b> must be one of the values passed into the
 <b>DetailLevel</b> field in the request (or, no
 <b>DetailLevel</b> filters should be used).
 
 
 type : class Trading_MinimumFeedbackScoreDetailsType
*/
@property (nonatomic, retain) Trading_MinimumFeedbackScoreDetailsType *minimumFeedbackScore;

/**
 
 Specifies that the site's buyer requirements support ShipToRegistrationCountry.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *shipToRegistrationCountry;

/**
 
 Specifies the valid values for limiting unverified bidders.
 
 
 type : class Trading_VerifiedUserRequirementsDetailsType
*/
@property (nonatomic, retain) Trading_VerifiedUserRequirementsDetailsType *verifiedUserRequirements;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT when the feature flags for the details were last
 updated. This timestamp can be used to determine if and when to refresh
 cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
