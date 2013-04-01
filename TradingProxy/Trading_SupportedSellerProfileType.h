// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_CategoryGroupType;

/**
 
   Type defining the <b>SupportedSellerProfile</b> container, which contains
 summary information related to specific Business Policies payment, return policy, and shipping
 profiles. The profile type is found in the <b>ProfileType</b> field.
   <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform.
 </span>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SupportedSellerProfileType : NSObject <PicoBindable> {

@private
    NSNumber *_profileID;
    NSString *_profileType;
    NSString *_profileName;
    NSString *_shortSummary;
    Trading_CategoryGroupType *_categoryGroup;

}


/**
 
   Unique identifier of a Business Policies profile. This identifier is auto-
 generated by eBay when the seller creates the profile. This field is always
 returned with the <b>SupportedSellerProfile</b> container.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform.
 </span>
   
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *profileID;

/**
 
   Indicates the type of the Business Policies profile. Valid values are PAYMENT,
 RETURN_POLICY, and SHIPPING. This field is always returned with the
 <b>SupportedSellerProfile</b> container.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *profileType;

/**
 
  The seller-defined name for a Business Policies profile. This field is always
  returned with the <b>SupportedSellerProfile</b> container.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *profileName;

/**
 
   Seller-provided description of a Business Policies profile. This field is only
 returned if a seller has provided a description for the profile.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform.
 </span>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shortSummary;

/**
 
  Identifies the the Business Policies category group associated with the Business
  Policies profile. Current values are ALL (referring to all non-motor vehicle
  categories) and MOTORS_VEHICLE (for motor vehicle listings).
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 Business Policies are not yet available for use on the eBay platform.
 </span>
 
 
 type : class Trading_CategoryGroupType
*/
@property (nonatomic, retain) Trading_CategoryGroupType *categoryGroup;


@end
