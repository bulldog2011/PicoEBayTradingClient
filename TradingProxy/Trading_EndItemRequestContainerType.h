// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 A container to specify a single eBay item to end.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_EndItemRequestContainerType : NSObject <PicoBindable> {

@private
    NSString *_itemID;
    NSString *_endingReason;
    NSString *_messageID;
    NSString *_sellerInventoryID;
    NSMutableArray *_any;

}


/**
 
 The ID of the item listing to be ended.
 An ItemID must be specified in the EndItems request, except that in the case of a Half.com item,
 either an ItemID or a SellerInventoryID must be specified.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 Indicates the seller's reason for ending the listing early.
 This field is required if the seller is ending the item early and
 the item did not successfully sell.
 Also applicable to Half.com.
 
 
 type: string constant in Trading_EndReasonCodeType.h
*/
@property (nonatomic, retain) NSString *endingReason;

/**
 
 Most Trading API calls support a <b>MessageID</b> element in the request
 and a <b>CorrelationID</b> element in the response. With
 <b>EndItems</b>, the seller can pass in a different
 <b>MessageID</b> value for
 each <b>EndItemRequestContainer<b> container that is used in the request. The
 <b>CorrelationID</b> value returned under each
 <b>EndItemResponseContainer</b> container is used to correlate each
 End Item request container with its corresponding End Item response container. The same <b>MessageID</b> value that you pass into a request will
 be returned in the <b>CorrelationID</b> field in the response.
 <br>
 <br>
 If you do not pass in a <b>MessageID</b> value in the request,
 <b>CorrelationID</b> is not returned.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *messageID;

/**
 
 A unique identifier that the seller specified in Item.SellerInventoryID
 when they listed an item on Half.com.
 In the case of a Half.com item, either an ItemID or a SellerInventoryID
 must be specified in the call request.
 <br><br>
 The SellerInventoryID field is applicable only to Half.com.
 <br><br>
 For a Half.com item, you can either specify an ItemID or
 SellerInventoryID. An error occurs if you try to specify a conflicting
 ItemID and SellerInventoryID (for the same item).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerInventoryID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
