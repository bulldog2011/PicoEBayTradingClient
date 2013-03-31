// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Identifies payment methods used by a buyer to pay a
 seller. On item listings, identifies one of the payment methods
 seller will accept for the item. Available payment methods can
 differ by site and item. Payment methods are not applicable to eBay
 Real Estate ad format listings.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 No payment method specified.
 For example, no payment methods would be specified for Ad format listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_NONE;

/**
 
 Money order/cashiers check.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_MOCC;

/**
 
 American Express.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_AM_EX;

/**
 
 Payment instructions are contained in the item's description.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAYMENT_SEE_DESCRIPTION;

/**
 
 Credit card.
 Not applicable to Real Estate or US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_CC_ACCEPTED;

/**
 
 Personal check.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PERSONAL_CHECK;

/**
 
 Cash on delivery.
 This payment method is obsolete (ignored) for the US, US eBay Motors, UK, and Canada sites.
 See "Field Differences for eBay Sites" in the eBay Web Services Guide for a list of sites
 that accept COD as a payment method. Not applicable to Real Estate listings.
 When revising an item (on sites that still support COD), you can add or change its value.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_COD;

/**
 
 Visa/Mastercard. These qualify as safe payment methods.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_VISA_MC;

/**
 
 PaisaPay (for India site only). This qualifies as a safe payment method and is required for all categories on the IN site.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAISA_PAY_ACCEPTED;

/**
 
 Other forms of payment. Some custom methods are accepted by seller
 as the payment method in the transaction.
 Not applicable to US/CA eBay Motors listings
 (see PaymentSeeDescription instead).
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_OTHER;

/**
 
 PayPal is accepted as a payment method. This qualifies as a safe payment method. If true in listing
 requests, Item.PayPalEmailAddress must also be specified.<br>
 <br>
 If you don't pass PayPal in the listing request but the seller's eBay
 preferences are set to accept PayPal on all listings,
 eBay will add PayPal as a payment method for you in most cases,
 and we may return a warning. <br>
 <br>
 PayPal must be accepted when the seller requires immediate payment
 (Item.AutoPay) or offers other PayPal-based features, such as a
 finance offer (Item.FinanceOfferID).
 PayPal must be accepted for charity listings.
 PayPal must be accepted for event ticket listings when the venue is in
 New York state or Illinois, so that eBay can offer buyer protection
 (per state law). (For some applications, it may be
 simplest to use errors returned from VerifyAddItem to flag the PayPal
 requirement for New York and Illinois ticket listings.)
 PayPal must be accepted for US eBay Motors listings that require a deposit (and it will not be set automatically based on the
 seller's preferences). Conversely, if PayPal is specified for US eBay Motors listings, deposit attributes must be specified.<br>
 <br>
 For additional information about features that depend on PayPal,
 see the eBay Web Services Guide.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAY_PAL;

/**
 
 Discover card.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_DISCOVER;

/**
 
 Payment on delivery.
 Not applicable to Real Estate or US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_CASH_ON_PICKUP;

/**
 
 Direct transfer of money.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_MONEY_XFER_ACCEPTED;

/**
 
 If the seller has bank account information on file, and
 MoneyXferAcceptedInCheckout = true, then the bank account information will
 be displayed in Checkout. Applicable only to certain global eBay sites. See
 the "International Differences Overview" in the eBay Web Services Guide.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_MONEY_XFER_ACCEPTED_IN_CHECKOUT;

/**
 
 All other online payments.
 Not applicable to US/CA eBay Motors listings.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_OTHER_ONLINE_PAYMENTS;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_ESCROW;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PRE_PAY_DELIVERY;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_COD_PRE_PAY_DELIVERY;

/**
 
 Reserved for future use.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_POSTAL_TRANSFER;

/**
 
 Reserved for internal or future use.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_CUSTOM_CODE;

/**
 
 Loan check option (applicable only to the US eBay Motors site,
 except in the Parts and Accessories category, and the eBay Canada site for motors).
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_LOAN_CHECK;

/**
 
 Cash-in-person option. Applicable only to US and Canada eBay Motors vehicles,
 (not the Parts and Accessories category).
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_CASH_IN_PERSON;

/**
 
 Elektronisches Lastschriftverfahren (direct debit).
 Only applicable to the Express Germany site, which has been shut down.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_ELV;

/**
 
 PaisaPayEscrow payment option. Applicable on selected categories on the India site only.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAISA_PAY_ESCROW;

/**
 
 PaisaPayEscrowEMI (Equal Monthly Installments) Payment option.
 Must be specified with PaisaPayEscrow. Applicable only to India site.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAISA_PAY_ESCROW_EMI;

/**
 
 This payment method can be added only if
 a seller has a payment gateway account.
 You can use GetUser.User.SellerInfo.IntegratedMerchantCreditCardInfo
 to determine if a seller has a payment gateway account.
 If a seller successfully uses AddItem with IntegratedMerchantCreditCard,
 then for the resulting item,
 the IntegratedMerchantCreditCard value is a replacement
 for a credit-card payment method such as VisaMC.
 In such a case, the listing displays (to potential buyers) the credit cards that the
 seller specified in the seller's preferences for their payment gateway account (in My eBay).
 Additionally, a buyer's credit-card payment is integrated into eBay checkout.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_INTEGRATED_MERCHANT_CREDIT_CARD;

/**
 
 The Moneybookers payment method.
 For more information, see http://www.moneybookers.com/partners/us/ebay.
 Only applicable to the US site (and
 to the Parts and Accessories category of the US eBay Motors site).
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_MONEYBOOKERS;

/**
 
 The Paymate payment method. For more information,
 see http://www.paymate.com/eBay.
 Only applicable to the US site (and
 to the Parts and Accessories category of the US eBay Motors site).
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAYMATE;

/**
 
 The ProPay payment method. US site only. For more information,
 see http://www.Propay.com/eBay.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PRO_PAY;

/**
 
 PayOnPickup payment method. PayOnPickup is the same as CashOnPickup.
 For listings on the eBay US site, the user interface refers to this feature as Pay on pickup.
 In the user interface of your application, please refer to the feature as Pay on pickup so that
 the name in your user interface corresponds to the name on the eBay US site.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_PAY_ON_PICKUP;

/**
 
 This payment method can be added only if
 a seller has a IMCC payment gateway account and Diners Club card is selected in credit card preference.
 Currently Dines card is enabled for CyberSource Gateway sellers.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_DINERS;

/**
 
 Unless the buyer and seller agree to COD (Cash On Delivery) or POP (Pay on Pickup) as the form of payment for an
 order, StandardPayment is always the buyer payment method returned to the seller when the order is part of the
 new payment process on the German and Austrian sites. Beginning August 22, 2011, sellers new to listing on the
 German and Austrian sites are subject to the new payment process.
 
*/
extern NSString *const Trading_BuyerPaymentMethodCodeType_STANDARD_PAYMENT;
