// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_TransactionArrayType;
@class Trading_AddressType;
@class Trading_RefundArrayType;
@class Trading_ShippingDetailsType;
@class Trading_CheckoutStatusType;
@class Trading_PaymentHoldDetailType;
@class Trading_MultiLegShippingDetailsType;
@class Trading_ExternalTransactionType;
@class Trading_ShippingServiceOptionsType;
@class Trading_AmountType;

/**
 
 There are single line item and multiple line item orders. A single
 payment is made for both order types.
 <br>
 <br>
 We strongly recommend that you avoid mixing digital and non-digital listings in
 the same Combined Payment order.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_OrderType : NSObject <PicoBindable> {

@private
    NSString *_orderID;
    NSString *_orderStatus;
    Trading_AmountType *_adjustmentAmount;
    Trading_AmountType *_amountPaid;
    Trading_AmountType *_amountSaved;
    Trading_CheckoutStatusType *_checkoutStatus;
    Trading_ShippingDetailsType *_shippingDetails;
    NSString *_creatingUserRole;
    NSDate *_createdTime;
    NSMutableArray *_paymentMethods;
    NSString *_sellerEmail;
    Trading_AddressType *_shippingAddress;
    Trading_ShippingServiceOptionsType *_shippingServiceSelected;
    Trading_AmountType *_subtotal;
    Trading_AmountType *_total;
    NSMutableArray *_externalTransaction;
    Trading_TransactionArrayType *_transactionArray;
    NSString *_buyerUserID;
    NSDate *_paidTime;
    NSDate *_shippedTime;
    NSNumber *_integratedMerchantCreditCardEnabled;
    NSNumber *_bundlePurchase;
    NSString *_buyerCheckoutMessage;
    NSString *_eiasToken;
    NSString *_paymentHoldStatus;
    Trading_PaymentHoldDetailType *_paymentHoldDetails;
    Trading_RefundArrayType *_refundArray;
    Trading_AmountType *_refundAmount;
    NSString *_refundStatus;
    NSNumber *_isMultiLegShipping;
    Trading_MultiLegShippingDetailsType *_multiLegShippingDetails;
    NSMutableArray *_any;

}


/**
 
 A unique identifier that identifies a single line item or multiple line
 item order.
 <br><br>
 For a single line item order, the <b>OrderID</b> value is identical to the
 <b>OrderLineItemID</b> value that is generated upon creation of the order line
 item. For a Combined Payment order or an order that goes through the eBay shopping cart flow, the <b>OrderID</b>
 value is automatically created by eBay. A Combined Payment order can be created through the site by a buyer
 or seller when the buyer or seller share multiple, common order line items. A Combined Payment order can
 also be created by the seller through the <b>AddOrder</b> call.
 <br><br>
 An <b>OrderID</b> value overrides an <b>OrderLineItemID</b> value or an
 <b>ItemID/TransactionID</b> pair if these fields are also specified in the same request.
 <br><br>
 Also applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *orderID;

/**
 
 This enumeration value indicates the current status of the order.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type: string constant in Trading_OrderStatusCodeType.h
*/
@property (nonatomic, retain) NSString *orderStatus;

/**
 
 This value indicates the dollar amount by which the buyer has adjusted the order
 total. Adjustments to order costs may include shipping and handling, shipping
 insurance, buyer discounts, or added services. A positive amount indicates the
 amount is an extra charge being paid to the seller by the buyer. A negative
 value indicates this amount is a credit given to the buyer by the seller.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *adjustmentAmount;

/**
 
 This value indicates the total amount of the order. This amount includes the
 sale price of each line item, shipping and handling charges, shipping insurance
 (if offered and selected by the buyer), additional services, and any applied
 sales tax. This value is returned after the buyer has completed checkout (the
 <b>CheckoutStatus.Status</b> output field reads 'Complete').
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 For auction listings on North American sites and on eBay Motors Parts and
 Accessories, the <b>AmountPaid</b> value minus any applied sales tax is the amount
 subject to the final value fee calculation. The sales tax amount is returned in
 the <b>ShippingDetails.SalesTax.SalesTaxAmount</b> field. For more information on how
 final value fees are calculated, see the
 <a href="http://pages.ebay.com/help/sell/fvf.html">final value fees</a> help
 page.
 </span>
 <br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *amountPaid;

/**
 
 This value indicates the shipping discount experienced by the buyer as a result
 of creating a Combined Payment order. This value is returned as 0.00 for single
 line item orders.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *amountSaved;

/**
 
 Container consisting of details related to the current checkout status of the
 order.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_CheckoutStatusType
*/
@property (nonatomic, retain) Trading_CheckoutStatusType *checkoutStatus;

/**
 
 Container consisting of all shipping-related details for an order, including
 domestic and international shipping service options, shipment tracking
 information, and shipping insurance information.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_ShippingDetailsType
*/
@property (nonatomic, retain) Trading_ShippingDetailsType *shippingDetails;

/**
 
 This value indicates whether a Combined Payment order was created by the buyer
 or by the seller. This field is only returned for Combined Payment orders.
 
 
 type: string constant in Trading_TradingRoleCodeType.h
*/
@property (nonatomic, retain) NSString *creatingUserRole;

/**
 
 Timestamp that indicates the date and time that the order was created. For
 single line item orders, this value is the same as <b>CreatedDate</b> in the
 <b>Transaction</b> container.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *createdTime;

/**
 
       This field indicates a payment method available to the buyer to pay for the
 order. There can be multiple <b>PaymentMethods</b> fields.
 <br><br>
 For DE and AT orders subject to the new eBay payment process, only one
 <b>PaymentMethods</b> field will be returned, and the value will
 always be 'StandardPayment'.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 entry type : string constant in Trading_BuyerPaymentMethodCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *paymentMethods;

/**
 
 The email address of the seller involved in the order.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerEmail;

/**
 
 Container holding the shipping address of the buyer involved in the order.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_AddressType
*/
@property (nonatomic, retain) Trading_AddressType *shippingAddress;

/**
 
 Container consisting of details about the domestic or international shipping
 service selected by the buyer.
       <br/><br/>
                   <span class="tablenote">
                   <strong>Note:</strong> For GetOrders and GetOrderTransactions, if you provide <strong>OrderLineItemID</strong> values in the <strong>OrderID</strong> field, this container does not return accurate shipping service and cost information for multiple line item orders. You must provide the order's combined <strong>OrderID</strong> value to ensure that the <strong>ShippingService</strong> and <strong>ShippingServiceCost</strong> fields return the correct values for the order. 
                   </span>
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_ShippingServiceOptionsType
*/
@property (nonatomic, retain) Trading_ShippingServiceOptionsType *shippingServiceSelected;

/**
 
 The subtotal amount for the order is the total cost of all order line items. This value does not include any shipping/handling, shipping insurance, or sales tax costs.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *subtotal;

/**
 
 The <b>Total</b> amount equals the <b>Subtotal</b> value plus the shipping/handling, shipping insurance, and sales tax costs.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *total;

/**
 
 Container consisting of payment details for an eBay order. PayPal transactions may
 include a buyer payment or refund, or a fee or credit applied to the seller's
 account. This field is only returned after payment for the order has occurred. For
 DE and AT orders going through the new eBay payment process, the <b>
 PaymentHoldDetails</b> container and <b>PaymentHoldStatus</b>
 field will be returned instead of the <b> ExternalTransaction</b>
 container.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.
 <br><br>
 Not applicable to Half.com.
 
 
 entry type : class Trading_ExternalTransactionType
*/

@property (nonatomic, retain) NSMutableArray *externalTransaction;

/**
 
 Container consisting of one or more line items that comprise an order. The data for
 an order line item is stored in the <b>Transaction</b> container. For
 the <b>AddOrder</b> call, there will always be at least two order line
 items in the container, but no more than 40.
 <br><br>
 We strongly recommend that you avoid mixing transactions for digital and non-digital listings in the same Combined Payment order. (In the future, <b>AddOrder</b> may enforce this recommendation.)
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : class Trading_TransactionArrayType
*/
@property (nonatomic, retain) Trading_TransactionArrayType *transactionArray;

/**
 
 eBay user ID of the order's buyer.
 <br><br>
 Not applicable to Half.com.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerUserID;

/**
 
 Timestamp indicating the date and time of order payment. This field is not returned until payment has been made and checkout is complete.
 <br><br>
 This time is specified in GMT (not Pacific time). See "Time Values" in the eBay Web Services guide for information about converting between GMT and other time zones.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *paidTime;

/**
 
 Timestamp indicating the date and time of order shipment. This field is not returned until the order has been marked as shipped. Note that sellers have the ability to set the shipped time up to three calendar days in the future.
 <br><br>
 This time is specified in GMT (not Pacific time). See "Time Values" in the eBay Web Services guide for information about converting between GMT and other time zones.
 <br><br>
 Applicable to Half.com (for <b>GetOrders</b>).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *shippedTime;

/**
 
 Indicates whether the item can be paid for through a payment gateway (Payflow) account. If <b>IntegratedMerchantCreditCardEnabled</b> is true, then integrated merchant credit card (IMCC) is enabled for credit cards because the seller has a payment gateway account. Therefore, if <b>IntegratedMerchantCreditCardEnabled</b> is true, and AmEx, Discover, or VisaMC is returned for an item, then on checkout, an online credit-card payment is processed through a payment gateway account.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *integratedMerchantCreditCardEnabled;

/**
 
 Reserved for future use.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *bundlePurchase;

/**
 
 This field is returned if the buyer left a message for the seller during
 checkout.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerCheckoutMessage;

/**
 
 Unique identifier for the user that does not change when the eBay user name
 is changed. Use when an application needs to associate a new eBay user name
 with the corresponding eBay user.
 <br><br>
 Since a bidder's user info is anonymous, this tag will be returned only to that
 bidder, and to the seller of an item that the user is bidding on.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *eiasToken;

/**
 
 This field indicates the type and/or status of a payment hold on the item.
 
 
 type: string constant in Trading_PaymentHoldStatusCodeType.h
*/
@property (nonatomic, retain) NSString *paymentHoldStatus;

/**
 
 This container will be returned for DE and AT orders going through the new eBay
 payment process. This container consists of the expected payout distribution to the
 seller's account, as well as possible actions that a seller can take to expedite the
 payout for the order.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.<br>
 
 
 type : class Trading_PaymentHoldDetailType
*/
@property (nonatomic, retain) Trading_PaymentHoldDetailType *paymentHoldDetails;

/**
 
 Container consisting of one or more refunds for Half.com orders or DE/AT orders
 subject to the new eBay payment process. This container is returned only if a refund
 to a Half.com buyer has occurred or a refund was issued for an order subject to the 
 new eBay payment Process.<br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.<br>
 
 
 type : class Trading_RefundArrayType
*/
@property (nonatomic, retain) Trading_RefundArrayType *refundArray;

/**
 
 Amount of the refund issued to the buyer. This field is only returned for a DE/AT
 order subject to the new eBay payment process, and if a refund was issued to the
 buyer.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.<br>
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *refundAmount;

/**
 
 String value indicating the result of a refund (Success, Failure, Pending) to the
 buyer for an DE/AT order subject to the new eBay payment process.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.<br>
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *refundStatus;

/**
 
 If <strong>IsMultilegShipping</strong> is true, the order or transaction uses the Global Shipping Program, in which the shipment has a domestic leg and an international leg. The buyer's shipping address is in a country other than the country where the items were listed, and the seller has specified InternationalPriorityShipping as the default international shipping service in the listings of all the items in the shipment.
 <br/><br/>
 If <strong>IsMultilegShipping</strong> is false, the order or transaction doesn't use the Global Shipping Program. The shipment might use a different international shipping service, or it might be domestic.
       </span>
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *isMultiLegShipping;

/**
 
 Contains details about the domestic leg of a Global Shipping Program shipment.
 <br/><br/>
 This information is not returned if <strong>IsMultilegShipping</strong> is false.
 
 
 type : class Trading_MultiLegShippingDetailsType
*/
@property (nonatomic, retain) Trading_MultiLegShippingDetailsType *multiLegShippingDetails;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
