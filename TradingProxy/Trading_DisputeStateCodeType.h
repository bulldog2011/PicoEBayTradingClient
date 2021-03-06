// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Defines the current state of the dispute, which determines the values
 that are valid for DisputeActivity. DisputeState is an internal value
 returned in the response. A value can apply to an Unpaid Item or Item
 Not Received dispute. A dispute filed when an item is significantly not
 as described in the product listing is a variation of an Item Not
 Received dispute.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 The dispute is locked and cannot be updated. For any type of
 dispute. No values of DisputeActivity are valid.
 
*/
extern NSString *const Trading_DisputeStateCodeType_LOCKED;

/**
 
 The dispute is closed. In some cases, it can be reversed with
 SellerReverseDispute. For any type of dispute. No values of
 DisputeActivity are valid.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLOSED;

/**
 
 eBay sent the buyer an Unpaid Item Reminder with a Pay Now
 option. Waiting for the buyer's first response. It is within the 7-day
 grace period. For Unpaid Item Disputes. DisputeActivity can be
 SellerAddInformation or SellerCompletedTransaction.
 
*/
extern NSString *const Trading_DisputeStateCodeType_BUYER_FIRST_RESPONSE_PAY_OPTION;

/**
 
 eBay sent the buyer an Unpaid Item Reminder with no Pay Now
 option. Waiting for the buyer's first response. It is within the 7-day
 grace period. For Unpaid Item Disputes. DisputeActivity can be
 SellerAddInformation or SellerCompletedTransaction.
 
*/
extern NSString *const Trading_DisputeStateCodeType_BUYER_FIRST_RESPONSE_NO_PAY_OPTION;

/**
 
 eBay sent the buyer an Unpaid Item Reminder with a Pay Now
 option. Waiting for the buyer's first response. The 7-day grace
 period has expired. For Unpaid Item Disputes. DisputeActivity can be
 SellerAddInformation, SellerCompletedTransaction, or
 SellerEndCommunication.
 
*/
extern NSString *const Trading_DisputeStateCodeType_BUYER_FIRST_RESPONSE_PAY_OPTION_LATE_RESPONSE;

/**
 
 eBay sent the buyer an Unpaid Item Reminder with no Pay Now
 option. Waiting for the buyer's first response. The 7-day grace
 period has expired. For Unpaid Item Disputes. DisputeActivity can be
 SellerAddInformation, SellerCompletedTransaction, or
 SellerEndCommunication.
 
*/
extern NSString *const Trading_DisputeStateCodeType_BUYER_FIRST_RESPONSE_NO_PAY_OPTION_LATE_RESPONSE;

/**
 
 The buyer and seller have communicated, and eBay offered the buyer
 a Pay Now option. For Unpaid Item Disputes. DisputeActivity
 can be SellerAddInformation, SellerCompletedTransaction,
 SellerEndCommunication, or CameToAgreementNeedFVFCredit.
 
*/
extern NSString *const Trading_DisputeStateCodeType_MUTUAL_COMMUNICATION_PAY_OPTION;

/**
 
     The buyer and seller have communicated. eBay did not offer
     the buyer a Pay Now option. For Unpaid Item Disputes. DisputeActivity can
 be SellerAddInformation, SellerCompletedTransaction,
 SellerEndCommunication, or CameToAgreementNeedFVFCredit.
 
*/
extern NSString *const Trading_DisputeStateCodeType_MUTUAL_COMMUNICATION_NO_PAY_OPTION;

/**
 
 The dispute is pending resolution. A dispute cannot be closed
 when it is in this state. For Unpaid Item Disputes.
 No values of DisputeActivity are valid.
 
*/
extern NSString *const Trading_DisputeStateCodeType_PENDING_RESOLVE;

/**
 
 The buyer and seller have agreed within the grace period not
 to complete the transaction. For Unpaid Item Disputes.
 DisputeActivity can be SellerAddInformation.
 
*/
extern NSString *const Trading_DisputeStateCodeType_MUTUAL_WITHDRAWAL_AGREEMENT;

/**
 
 The buyer and seller have agreed not to complete the
 transaction, after the grace period. For Unpaid Item Disputes.
 DisputeActivity can be SellerAddInformation,
 SellerCompletedTransaction, or SellerEndCommunication.
 
*/
extern NSString *const Trading_DisputeStateCodeType_MUTUAL_WITHDRAWAL_AGREEMENT_LATE;

/**
 
 The buyer filed an Item Not Received dispute, and the seller
 has not responded. For Item Not Received disputes. DisputeActivity
 can be SellerOffersRefund, SellerShippedItem, or SellerComment.
 
*/
extern NSString *const Trading_DisputeStateCodeType_NOT_RECEIVED_NO_SELLER_RESPONSE;

/**
 
 The buyer filed an Item Not Received dispute for an item
 significantly not as described, and the seller has not responded.
 DisputeActivity can be SellerOffersRefund or SellerComment.
 
*/
extern NSString *const Trading_DisputeStateCodeType_NOT_AS_DESCRIBED_NO_SELLER_RESPONSE;

/**
 
 The buyer filed an Item Not Received dispute and is
 communicating with the seller. DisputeActivity can be
 SellerOffersRefund, SellerShippedItem, or SellerComment.
 
*/
extern NSString *const Trading_DisputeStateCodeType_NOT_RECEIVED_MUTUAL_COMMUNICATION;

/**
 
 The buyer filed an Item Not Received dispute for an item
 significantly not as described and is communicating with the seller.
 DisputeActivity can be SellerOffersRefund.
 
*/
extern NSString *const Trading_DisputeStateCodeType_NOT_AS_DESCRIBED_MUTUAL_COMMUNICATION;

/**
 
 The seller says mutual agreement has been reached and is
 waiting for the buyer to confirm, or the buyer is returning the item
 to the seller. DisputeActivity can be SellerAddInformation.
 For Unpaid Item Disputes.
 
*/
extern NSString *const Trading_DisputeStateCodeType_MUTUAL_AGREEMENT_OR_BUYER_RETURNING_ITEM;

/**
 
 The claim was assigned to an adjuster.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_OPENED;

/**
 
 The buyer was contacted by eBay and asked to submit paperwork to
 support the claim.
 
*/
extern NSString *const Trading_DisputeStateCodeType_NO_DOCUMENTATION;

/**
 
 The buyer did not respond to verification or was missing paperwork.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_CLOSED;

/**
 
 The buyer is not eligible for reimbursement.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_DENIED;

/**
 
 Paperwork was received from the buyer and the claim is being investigated.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_PENDING;

/**
 
 The buyer's claim was approved for reimbursement and was
 sent to accounts payable for payment.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_PAYMENT_PENDING;

/**
 
 The buyer was reimbursed.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_PAID;

/**
 
 The issue has been resolved: the seller sent the item or a refund.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_RESOLVED;

/**
 
 A claim was submitted (via Web).
 
*/
extern NSString *const Trading_DisputeStateCodeType_CLAIM_SUBMITTED;

/**
 
 The unpaid item dispute is open.
 
*/
extern NSString *const Trading_DisputeStateCodeType_UNPAID_ITEM_OPEN;

/**
 
 An unpaid item dispute filed by the Unpaid Item Assistance mechanism was
 disabled by eBay (for example, eBay detected that payment was initiated
 and the seller needs to manually handle this dispute).
 
*/
extern NSString *const Trading_DisputeStateCodeType_UPI_ASSISTANCE_DISABLED_BYE_BAY;

/**
 
 An unpaid item dispute filed by the Unpaid Item Assistance mechanism was
 disabled by the seller (e.g. the buyer and seller have communicated
 about payment and the seller wishes to extend the time for payment
 and not let the automatic process close the dispute 4 days after the
 dispute was automatically opened).
 
*/
extern NSString *const Trading_DisputeStateCodeType_UPI_ASSISTANCE_DISABLED_BY_SELLER;

/**
 
 Reserved for internal or future use.
 
*/
extern NSString *const Trading_DisputeStateCodeType_CUSTOM_CODE;
