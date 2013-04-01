// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_WarrantyDurationDetailsType;
@class Trading_ShippingCostPaidByDetailsType;
@class Trading_RestockingFeeValueDetailsType;
@class Trading_ReturnsWithinDetailsType;
@class Trading_WarrantyTypeDetailsType;
@class Trading_RefundDetailsType;
@class Trading_WarrantyOfferedDetailsType;
@class Trading_ReturnsAcceptedDetailsType;

/**
 
 Type for the return policy details of an item.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ReturnPolicyDetailsType : NSObject <PicoBindable> {

@private
    NSMutableArray *_refund;
    NSMutableArray *_returnsWithin;
    NSMutableArray *_returnsAccepted;
    NSNumber *_description;
    NSMutableArray *_warrantyOffered;
    NSMutableArray *_warrantyType;
    NSMutableArray *_warrantyDuration;
    NSNumber *_ean;
    NSMutableArray *_shippingCostPaidBy;
    NSMutableArray *_restockingFeeValue;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 How the seller will compensate the buyer for a returned item
 (such as money back or exchange).
 
 
 entry type : class Trading_RefundDetailsType
*/

@property (nonatomic, retain) NSMutableArray *refund;

/**
 
 Time period within which the buyer can return the item, starting from the day they receive the item.
 
 
 entry type : class Trading_ReturnsWithinDetailsType
*/

@property (nonatomic, retain) NSMutableArray *returnsWithin;

/**
 
 Whether the seller allows the buyer to return the item.
 
 
 entry type : class Trading_ReturnsAcceptedDetailsType
*/

@property (nonatomic, retain) NSMutableArray *returnsAccepted;

/**
 
 This field is returned with a value of 'true' if the site supports a text
 description of the seller's return policy for items.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *description;

/**
 
 Whether the item includes a warranty.
 
 
 entry type : class Trading_WarrantyOfferedDetailsType
*/

@property (nonatomic, retain) NSMutableArray *warrantyOffered;

/**
 
 The type of warranty offered.
 
 
 entry type : class Trading_WarrantyTypeDetailsType
*/

@property (nonatomic, retain) NSMutableArray *warrantyType;

/**
 
 The length of the warranty offered.
 
 
 entry type : class Trading_WarrantyDurationDetailsType
*/

@property (nonatomic, retain) NSMutableArray *warrantyDuration;

/**
 
  Returns true if the site supports specifying a European Article Number (EAN) with the return policy.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *ean;

/**
 
 The party who pays the shipping cost for a returned item.
 
 
 entry type : class Trading_ShippingCostPaidByDetailsType
*/

@property (nonatomic, retain) NSMutableArray *shippingCostPaidBy;

/**
 
 Container consisting of the allowed values (and a text description of each
 value) that may be specified in the
 <b>RestockingFeeValueOption</b> field of an Add/Revise/Relist
 API call.
 
 
 entry type : class Trading_RestockingFeeValueDetailsType
*/

@property (nonatomic, retain) NSMutableArray *restockingFeeValue;

/**
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the details were last
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
