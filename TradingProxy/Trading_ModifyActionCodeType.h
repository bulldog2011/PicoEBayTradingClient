// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 This enumerated type defines the values that can be used when adding, modiying, or
 deleting a shipping discount profile (through the <b>ModifyActionCode</b>
 field in <b>SetShippingDiscountProfiles</b>), or when adding, modiying, or
 deleting a promotional sale (through the <b>Action</b>
 field in <b>SetPromotionalSale</b>), or when adding or removing one or more
 listings from the promotional sale (through the <b>Action</b>
 field in <b>SetPromotionalSaleListings</b>).
 <br/><br/>
 For <b>SetPromotionalSaleListings</b>, the specified action ('Add' or
 'Delete') will apply to all listings specified in the <b>PromotionalSaleItemIDArray</b>
 container. A promotional sale can also be applied to all listings of a specified
 category (using <b>CategoryID</b> in the
 <b>SetPromotionalSaleListings</b> request). However, an entire category
 of listings cannot be removed from a promotional sale. In other words, the
 <b>Action </b> field cannot be set to 'Delete' if a
 <b>CategoryID</b> is specified.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 For <b>SetPromotionalSale</b>, this value is used in the request to
 create a new promotional sale.
 <br/><br/>
 For <b>SetPromotionalSaleListings</b>, this value is used in the request
 to apply an existing promotional sale to one or more active items or to an entire
 category of active items.
 <br/><br/>
 For <b>SetShippingDiscounts</b>, this value is used in the request
 to create a new shipping discount profile.
 
*/
extern NSString *const Trading_ModifyActionCodeType_ADD;

/**
 
 For <b>SetPromotionalSale</b>, this value is used in the request to
 delete an existing promotional sale.
 <br/><br/>
 For <b>SetPromotionalSaleListings</b>, this value is used in the request
 to remove one or more active items from an existing promotional sale. This value
 cannot be used if a <b>CategoryID</b> is specified in the request.
 <br/><br/>
 For <b>SetShippingDiscounts</b>, this value is used in the request
 to delete an existing shipping discount profile.
 
*/
extern NSString *const Trading_ModifyActionCodeType_DELETE;

/**
 
 For <b>SetPromotionalSale</b>, this value is used in the request to
 modify an existing promotional sale.
 <br/><br/>
 For <b>SetShippingDiscounts</b>, this value is used in the request
 to modify an existing shipping discount profile.
 
*/
extern NSString *const Trading_ModifyActionCodeType_UPDATE;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_ModifyActionCodeType_CUSTOM_CODE;
