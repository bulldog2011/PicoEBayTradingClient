// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Ends the specified fixed-price listing before the date and time at which
 it would normally end (per the listing duration).
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_EndFixedPriceItemRequestType : Trading_AbstractRequestType {

@private
    NSString *_itemID;
    NSString *_endingReason;
    NSString *_sku;

}


/**
 
 Unique item ID that identifies the item listing that you want to end.
 <br><br>
 In the EndFixedPriceItem request, either ItemID or SKU is required.
 If both are passed in and they don't refer to the same listing, eBay
 ignores SKU and considers only the ItemID.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Indicates the seller's reason for ending the listing early. This field
 is required if the seller is ending the item early and the item did
 not successfully sell.
 
 
 type: string constant in Trading_EndReasonCodeType.h
*/
@property (nonatomic, retain) NSString *endingReason;

/**
 
 The unique SKU of the item being ended. A SKU (stock keeping unit) is
 an identifier defined by a seller. SKU can only be used to end an
 item if you listed the item by using AddFixedPriceItem or
 RelistFixedPriceItem, and you set Item.InventoryTrackingMethod to SKU
 at the time the item was listed. (These criteria are necessary to
 uniquely identify the listing by a SKU.)
 <br><br>
 In the EndFixedPriceItem request, either ItemID or SKU is required. If
 both are passed in and they don't refer to the same listing, eBay
 ignores SKU and considers only the ItemID.
 <br><br>
 To remove a SKU when you revise or relist an item, use DeletedField in
 the revision or relist call.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sku;


@end
