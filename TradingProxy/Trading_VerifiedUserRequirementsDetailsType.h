// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
  Type defining the <b>BuyerRequirementDetails.VerifiedUserRequirements</b>
  container that is returned in <b>GeteBayDetails</b>. The
  <b>VerifiedUserRequirements</b> container provides the <b>VerifiedUser</b>
  and <b>FeedbackScore</b> values that may be used in listing calls to restrict
  unverified users who have Feedback scores below the minimum threshold.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VerifiedUserRequirementsDetailsType : NSObject <PicoBindable> {

@private
    NSNumber *_verifiedUser;
    NSMutableArray *_feedbackScore;
    NSMutableArray *_any;

}


/**
 
 For eBay sites that support Verified User Requirements, this boolean is always
 returned as 'true'. If a seller uses the
 <b>BuyerRequirementDetails.VerifiedUserRequirements</b> in listing calls,
 the <b>VerifiedUser</b> field in that container should only be passed
 into the request if the seller is only willing to sell items to Verified Users. If
 the <b>VerifiedUser</b> field is omitted from the listing call, the
 specified <b>FeedbackScore</b> value will only apply to unverified users.
 <br/><br/>
 Currently, this feature is only supported by the following sites: UK, Australia,
 France, Spain, India, Ireland, Malaysia, Philippines, and Singapore. However, this
 is subject to change, so it is always a good idea for the seller to call
 <b>GeteBayDetails</b> with <b>DetailName</b> set to
 <b>BuyerRequirementDetails</b>.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *verifiedUser;

/**
 
 The values returned in these fields are the values that may be used by the seller
 in the <b>BuyerRequirementDetails.VerifiedUserRequirements</b>
 container in listing calls. The <b>FeedbackScore</b> value passed into
 a listing call request will restrict unverified users with Feedback scores below
 the minimum threshold value from buying the item.
 
 
 entry type : NSNumber, wrapper for primitive int
*/

@property (nonatomic, retain) NSMutableArray *feedbackScore;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
