// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 A list of stock-keeping unit (SKU) identifiers that a seller uses in listings.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SKUArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_sku;

}


/**
 
 A SKU (stock keeping unit) is an identifier defined by a seller.
 Some sellers use SKUs to track complex flows of products
 and information on the client side.
 A seller can specify a SKU when listing an item with AddItem
 and related calls. eBay preserves the SKU on the item, enabling you
 to obtain it before and after an order line item is created.
 (SKU is recommended as an alternative to ApplicationData.)<br>
 <br>
 A SKU is not required to be unique. A seller can specify a
 particular SKU value on one item or on multiple items.
 Different sellers can use the same SKUs.<br>
 <br>
 If the SKU is unique across a seller's active listings, and if
 the seller listed the item by using AddFixedPriceItem
 or RelistFixedPriceItem, the seller can also set
 Item.InventoryTrackingMethod to SKU. This allows the seller to use
 SKU instead of ItemID as a unique identifier in subsequent calls,
 such as GetItem and ReviseInventoryStatus.<br>
 <br>
 <span class="tablenote"><b>Note:</b>
 AddFixedPriceItem and RelistFixedPriceItem are defined in
 the Merchant Data API (part of Large Merchant Services).
 </span>
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *sku;


@end
