// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 This call enables a seller to create an Unpaid Item case against a buyer, or to cancel a
 single line item order.
 <br/><br/>
 <span class="tablenote"><b>Note:</b>
 This call is only used by sellers to create an Unpaid Item cases or to mutually cancel a
 single line item order. Buyers must use the eBay Resolution Center or PayPal Resolution
 Center (for orders that satisfy requirements) to create an Item Not Received or an Item
 Significantly Not as Described case.
 </span>
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AddDisputeRequestType : Trading_AbstractRequestType {

@private
    NSString *_disputeExplanation;
    NSString *_disputeReason;
    NSString *_itemID;
    NSString *_transactionID;
    NSString *_orderLineItemID;

}


/**
 
 This enumerated value gives the explanation of why the buyer or seller opened a
 case (or why seller canceled an order line item). Not all values contained in
 <b>DisputeExplanationCodeType</b> are allowed in the
 <b>AddDispute</b> call, and the values that are allowed must match
 the <b>DisputeReason</b> value.
 
 
 type: string constant in Trading_DisputeExplanationCodeType.h
*/
@property (nonatomic, retain) NSString *disputeExplanation;

/**
 
 The type of dispute being created. <b>BuyerHasNotPaid</b> and
 <b>TransactionMutuallyCanceled</b> are the only values that may
 be used with the <b>AddDispute</b> call.
 
 
 type: string constant in Trading_DisputeReasonCodeType.h
*/
@property (nonatomic, retain) NSString *disputeReason;

/**
 
 Unique identifier for an eBay item listing. A listing can have multiple
 orders, but only one <b>ItemID</b>. To
 identify a specific order line item, either an
 <b>ItemID</b>/<b>TransactionID</b> pair or an
 <b>OrderLineItemID</b> value must be passed in the request. So,
 unless <b>OrderLineItemID</b> is used, this field is required.
 <br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 The unique identifier of an order line item. An order line item is created once
 a buyer purchases the item through a fixed-priced listing or by using the Buy It
 Now feature in an auction listing, or when an auction listing ends with a
 winning bidder. To identify a specific order line item, either an
 <b>ItemID</b>/<b>TransactionID</b> pair or an
 <b>OrderLineItemID</b> value must be passed in the request. So,
 unless <b>OrderLineItemID</b> is used, this field is required.
 <br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *transactionID;

/**
 
 <b>OrderLineItemID</b> is a unique identifier of an order line item,
 and is based upon the concatenation of <b>ItemID</b> and
 <b>TransactionID</b>, with a hyphen in between these two IDs. To
 identify a specific order line item, either an
 <b>ItemID</b>/<b>TransactionID</b> pair or an
 <b>OrderLineItemID</b> value must be passed in the request. So,
 unless <b>ItemID</b>/<b>TransactionID</b> pair is used,
 this field is required.
 <br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderLineItemID;


@end