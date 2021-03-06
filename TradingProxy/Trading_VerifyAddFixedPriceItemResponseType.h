// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_ExpressItemRequirementsType;
@class Trading_FeesType;

/**
 
 Returns the estimated fees that would be applicable for a new listing
 (were the item actually listed to eBay with AddItem).
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VerifyAddFixedPriceItemResponseType : Trading_AbstractResponseType {

@private
    NSString *_itemID;
    NSString *_sku;
    Trading_FeesType *_fees;
    NSNumber *_expressListing;
    Trading_ExpressItemRequirementsType *_expressItemRequirements;
    NSString *_categoryID;
    NSString *_category2ID;
    NSMutableArray *_discountReason;

}


/**
 
 Represents the item ID for the new fixed-price listing. VerifyAddFixedPriceItem does not
 actually list an item, so 0 is returned instead of a normal item ID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Item-level SKU for the new listing, if the seller specified
 tem.SKU in the request. Variation SKUs are not returned
 (see GetItem instead).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;

/**
 
 Child elements contain the estimated listing fees for the new item listing.
 The fees do not include the Final Value Fee (FVF), which cannot be determined
 until an item is sold.
 
 
 type : class Trading_FeesType
*/
@property (nonatomic, retain) Trading_FeesType *fees;

/**
 
 Indicates whether the item would be listed on eBay Express.
 See ExpressItemRequirements for hints about why this
 value is true or false for a given item.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *expressListing;

/**
 
 Contains details about why an item does or doesn't
 qualify as an eBay Express listing. Only returned when
 IncludeExpressRequirements is true the request.<br>
 <br>
 The item requirements are assessed in this order:<br>
 - SellerExpressEligible<br>
 - ExpressOptOut<br>
 - ExpressApproved<br>
 - All other settings
 
 
 type : class Trading_ExpressItemRequirementsType
*/
@property (nonatomic, retain) Trading_ExpressItemRequirementsType *expressItemRequirements;

/**
 
 ID of the primary category in which the item would be listed.
 Only returned if you set Item.CategoryMappingAllowed to true in the request
 and the ID you passed in PrimaryCategory was mapped to a new ID by eBay.
 If the primary category has not changed or it has expired with no replacement,
 CategoryID does not return a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 ID of the secondary category in which the item would be listed.
 Only returned if you set Item.CategoryMappingAllowed to true in the request
 and the ID you passed in SecondaryCategory was mapped to a new ID by eBay.
 If the secondary category has not changed or it has expired with no replacement,
 Category2ID does not return a value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *category2ID;

/**
 
 The nature of the discount, if a discount would have applied
 had this actually been listed at this time.
 
 
 entry type : string constant in Trading_DiscountReasonCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *discountReason;


@end
