// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
     Defines all notification events that can be used.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
   Not a notification event.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_NONE;

/**
 
 Sent to a user when another buyer has placed a higher maximum bid
 and the user is no longer the current high bidder.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_OUT_BID;

/**
 
 Sent when an auction ends. An auction ends either when its duration
 expires or the buyer purchases an item with Buy It Now. Applies to
 all competitive-bid auctions.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_END_OF_AUCTION;

/**
 
 Sent to a seller when a buyer completes the checkout process for an item. Not
 sent when an auction ends without bids.
 <br><br>
 For checkouts that involve more than one item, AuctionCheckoutComplete is sent only for the first item.
 Because its payload is based on GetItemTransactions, only a single item is included in the notification.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_AUCTION_CHECKOUT_COMPLETE;

/**
 
 Sent to a seller each time a buyer requests a total price. Occurs
 before checkout is complete.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_CHECKOUT_BUYER_REQUESTS_TOTAL;

/**
 
 When a user leaves feedback, this notification is sent to a third party who
 has subscribed on a user's behalf. The user can be a buyer who leaves
 feedback for a seller or a seller who leaves feedback for a buyer.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_FEEDBACK;

extern NSString *const Trading_NotificationEventTypeCodeType_FEEDBACK_FOR_SELLER;

/**
 
 Sent to a seller when a buyer purchases a fixed-price item.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_FIXED_PRICE_TRANSACTION;

/**
 
 Reserved for future use.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_SECOND_CHANCE_OFFER;

/**
 
 Sent to a seller when a question is posted about one of the seller's
 active listings.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ASK_SELLER_QUESTION;

/**
 
 Sent to an eBay partner on behalf of a seller when a seller
 lists or relists an item. Sent for each item the seller lists.
 <br><br>
 This notification is triggered by automatic relists. For example, a seller
 who has opted in to automated relisting of unpaid items using
 UnpaidItemAssistancePreferencesType.AutoRelist will receive this notification
 when an unpaid item is automatically relisted.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_LISTED;

/**
 
 Sent to an eBay partner on behalf of a seller when a seller has
 revised an item.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_REVISED;

/**
 
 Sent to an eBay partner on behalf of a seller when a buyer responds
 to a dispute the seller has opened. Sent for each response the buyer makes.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BUYER_RESPONSE_DISPUTE;

/**
 
 Sent to an eBay partner on behalf of a seller when a seller opens a
 dispute. Sent for each dispute the seller opens.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_SELLER_OPENED_DISPUTE;

/**
 
 Sent to an eBay partner on behalf of a seller when a seller responds
 to a dispute they had opened. Sent for each response the seller makes.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_SELLER_RESPONDED_TO_DISPUTE;

/**
 
 Sent to an eBay partner on behalf of a seller when a seller closes a
 dispute they had opened. Sent for each closure the seller performs.
 <br><br>
 Applies to Sellers and Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_SELLER_CLOSED_DISPUTE;

/**
 
 Sent to a seller when a bidder makes a best offer on an item opted
 into the Best Offer feature by the seller.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BEST_OFFER;

extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGES_ALERT_HEADER;

extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGES_ALERT;

/**
 
 A notification type where a specified user or application is
 notified when a message from eBay is sent to My Messages. This notification
 type sends a GetMyMessages response at a detail level of ReturnHeaders.
 MyMessageseBayMessageHeader and MyMessageseBayMessage cannot be subscribed
 to at the same time or specified in the same call.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGESE_BAY_MESSAGE_HEADER;

/**
 
 A notification type where a specified user or application is
 notified when a message from eBay is sent to My Messages. This notification
 type sends a GetMyMessages response at a detail level of ReturnMessages.
 MyMessageseBayMessageHeader and MyMessageseBayMessage cannot be subscribed
 to at the same time or specified in the same call.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGESE_BAY_MESSAGE;

/**
 
 A notification type where a specified user or application is
 notified when a member to member (M2M) message is sent to My Messages. This
 notification type sends a GetMyMessages response at a detail level of
 ReturnHeaders. MyMessagesM2MMessageHeader and MyMessagesM2MMessage cannot
 be subscribed to at the same time or specified in the same call.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGES_M_2_M_MESSAGE_HEADER;

/**
 
 A notification type where a specified user or application is
 notified when a member to member (M2M) message is sent to My Messages. This
 notification type sends a GetMyMessages response at a detail level of
 ReturnMessages. MyMessagesM2MMessageHeader and MyMessagesM2MMessage cannot
 be subscribed to at the same time or specified in the same call.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGES_M_2_M_MESSAGE;

/**
 
   A notification type where a specified user or application is
 notified on behalf of a buyer when a buyer opens an Item Not Received dispute.
 Sent for each dispute the buyer opens.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_INR_BUYER_OPENED_DISPUTE;

/**
 
 A notification type where a specified user or application is
 notified on behalf of a buyer when a buyer responds to Item Not Received
 dispute that buyer had opened. Sent for each response the buyer makes.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_INR_BUYER_RESPONDED_TO_DISPUTE;

/**
 
 A notification type where a specified user or application is
 notified on behalf of a buyer when a buyer closes Item Not Received
 dispute that buyer had opened. Sent for each closure the buyer performs.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_INR_BUYER_CLOSED_DISPUTE;

/**
 
  A notification type where a specified user or application is
 notified on behalf of a seller when a seller responds to an Item Not Received
 dispute that buyer had opened. Sent for each response the seller makes.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_INR_SELLER_RESPONDED_TO_DISPUTE;

/**
 
 Do not use. This notification event is tied to eBay Express functionality
 which no longer exists.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_CHECKOUT;

/**
 
 A notification type where the listing of the watched item is about
 to end. This event has a property with which caller can specify the TimeLeft
 before the listing ends.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_WATCHED_ITEM_ENDING_SOON;

/**
 
 Specifies that an ItemClosed notification event has occurred. This event is triggered by
 ItemWon and ItemUnsold events.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_CLOSED;

/**
 
 Specifies an ItemSuspended notification event. Subscribe to this event to be notified when eBay has taken down a listing for a listing problem, for example, listing in the wrong category.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_SUSPENDED;

/**
 
 Specifies an ItemSold notification event, triggered when an eBay listing ends in a sale.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_SOLD;

/**
 
 Specifies an ItemExtended notification event, when a seller has extended the duration of a listing.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_EXTENDED;

/**
 
 The userid was changed. Available for SMS on the UK and Germany
 sites. Not applicable to Platform Notifications.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_USER_ID_CHANGED;

/**
 
 The email address was changed. Available for SMS on the UK and
 Germany sites. Not applicable to Platform Notifications.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EMAIL_ADDRESS_CHANGED;

/**
 
 The password was changed. Available for SMS on the UK and Germany
 sites. Not applicable to Platform Notifications.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_PASSWORD_CHANGED;

/**
 
 The password hint was changed. Available for SMS on the UK and
 Germany sites. Not applicable to Platform Notifications.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_PASSWORD_HINT_CHANGED;

/**
 
 The payment detail was changed. Available for SMS on the UK and
 Germany sites. Not applicable to Platform Notifications.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_PAYMENT_DETAIL_CHANGED;

/**
 
 The account was suspended. Available for SMS on the UK and Germany
 sites. Not applicable to Platform Notifications.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ACCOUNT_SUSPENDED;

/**
 
 An informational alert about account activity.
 A user can subscribe to receive an account activity summary via SMS.
 The user can specify the period (time range) for the account summary and can
 select how often the summary is to be sent. It is not triggered by an event
 but rather by an eBay daemon process that monitors a schedule database.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ACCOUNT_SUMMARY;

extern NSString *const Trading_NotificationEventTypeCodeType_THIRD_PARTY_CART_CHECKOUT;

/**
 
 Sent to an eBay partner on behalf of a seller when a seller has
 revised an item and added charity.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_REVISED_ADD_CHARITY;

/**
 
 Sent to a subscribing third party when a user adds an item to her or his watch list.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_ADDED_TO_WATCH_LIST;

/**
 
 Sent to a subscribing third party when a user removes an item from her or his watch list.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_REMOVED_FROM_WATCH_LIST;

/**
 
 Sent to a subscribing third party when a user adds an item to her or his bid group.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_ADDED_TO_BID_GROUP;

/**
 
 Sent to a subscribing third party when a user removes an item from her or his bid group.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_REMOVED_FROM_BID_GROUP;

/**
 
 Sent to third parties subscribed on a user's behalf when
 feedback comments are left by that user.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_FEEDBACK_LEFT;

/**
 
 Sent to third parties subscribed on a user's behalf when
 feedback comments are received by that user.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_FEEDBACK_RECEIVED;

/**
 
 Sent to a subscribing third party when a user's feedback star level changes.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_FEEDBACK_STAR_CHANGED;

/**
 
 Sent to a subscribing third party for the buyer when a user places a bid for an item.
   <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BID_PLACED;

/**
 
 Sent to a subscribing third party for the seller when a user places a bid for an item.
   <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BID_RECEIVED;

/**
 
 Sent to a subscribing third party for the buyer when a user bought an item.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_WON;

/**
 
 Sent to a subscribing third party for the buyer when a user lost a bid for an item.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_LOST;

/**
 
 Sent to a subscribing third party for the seller when an item was not sold.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_UNSOLD;

/**
 
 Sent to a subscribing third party for a buyer when a seller makes a counter offer to the buyer's best offer on an item optedinto the Best Offer feature by the seller.
   <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_COUNTER_OFFER_RECEIVED;

/**
 
 Sent to a subscribing third-party for a buyer when a seller rejects the buyer's best offer on an item opted into
 the Best Offer feature by the seller. Also sent to a buyer when the buyer rejects a seller's counteroffer.
   <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BEST_OFFER_DECLINED;

/**
 
 Sent to a subscribing third party for a buyer who makes a best offer on an item opted into the Best Offer feature by a seller.
   <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BEST_OFFER_PLACED;

/**
 
 An informational alert sent to a user when an item is added to her or his watch list. DO NOT USE. This notification was REMOVED in 549.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ADD_TO_WATCH_LIST;

/**
 
 An informational alert sent to a user when he or she places an offer for an item. DO NOT USE. This notification was REMOVED in 549.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_PLACE_OFFER;

/**
 
 An informational alert sent to a user when an item is removed from her or his watch list. DO NOT USE. This notification was REMOVED in 549.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_REMOVE_FROM_WATCH_LIST;

/**
 
 An informational alert sent to a user when when an item is added to her or his bid group. DO NOT USE. This notification was REMOVED in 549.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ADD_TO_BID_GROUP;

/**
 
 An informational alert sent to a user when an item is removed from her or his bid group. DO NOT USE. This notification was REMOVED in 549.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_REMOVE_FROM_BID_GROUP;

/**
 
 This event is not functional.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEMS_CANCELED;

/**
 
 An informational alert sent to a subscribing application when a user token has been revoked.
 <br><br>
 Applies to both Buyers and Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_TOKEN_REVOCATION;

/**
 
 An informational alert sent to a subscribing application when the Bulk exchange job completes.
 <br><br>
 Applies to Sellers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BULK_DATA_EXCHANGE_JOB_COMPLETED;

/**
 
   Reserved for future use.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_CUSTOM_CODE;

/**
 
 Alert sent to a subscribing buyer or seller when item marked as shipped by the seller.
 <br><br>
 Applies to Sellers and Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_MARKED_SHIPPED;

/**
 
 Alert sent to a subscribing buyer or seller when item marked as paid by the seller.
 <br><br>
 Applies to Sellers and Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_ITEM_MARKED_PAID;

/**
 
 This notification is sent to a subscribing buyer or seller (or application)
 when a response to the eBP case is due from the call user. When a eBP case is
 opened, this notification is only sent to the seller involved in the case and
 not the buyer.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_MY_RESPONSE_DUE;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when a response to the eBP case is due from the other party in the case.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_OTHER_PARTY_RESPONSE_DUE;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when an eBP case is escalated.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_ESCALATED_CASE;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when the decision of an eBP case is appealed.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_APPEALED_CASE;

/**
 
 This notification is sent to the subscribed seller (or application) when
 payment (to eBay or buyer) is due.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_MY_PAYMENT_DUE;

/**
 
 This notification is sent to the subscribed seller (or application) when
 payment (to eBay or buyer) is processed.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_PAYMENT_DONE;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when an appeal of an eBP case decision has been closed.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_CLOSED_APPEAL;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when an eBP case has been closed.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_CLOSED_CASE;

/**
 
 A notification type in which a specified user or application is notified
 when a High Priority Message (of priority 1 or 2) is sent to My Messages. Only
 High Priority Message will be sent back as part of the Notification payload. This
 notification type sends a GetMyMessages response at a detail level of
 ReturnMessages.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGES_HIGH_PRIORITY_MESSAGE;

/**
 
 A notification type in which a specified user or application is notified
 when a High Priority Message (of priority 1 or 2) is sent to My Messages. Only
 High Priority Messages will be sent back as part of the notification
 payload. This notification type sends a GetMyMessages response at a detail level
 of ReturnHeaders.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_MY_MESSAGES_HIGH_PRIORITY_MESSAGE_HEADER;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when an eBP case has been onholded by CS.
   
*/
extern NSString *const Trading_NotificationEventTypeCodeType_EBP_ON_HOLD_CASE;

/**
 
 This notification is sent to a DE or AT seller when an order (subject to the
 new eBay payment process) has been paid for by the buyer. This notification is
 triggered and sent when Checkout status is complete in GetOrders and other order
 retrieval API calls. Shipping the item and providing proof of shipment can
 expedite the process of payout to the seller's account.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_READY_TO_SHIP;

/**
 
 This notification is sent to a DE or AT seller when a seller payout for an order
 (subject to the new eBay payment process) is scheduled to be distributed to the seller's
 account in the next disbursement cycle. This notification is triggered and sent
 when the value of PaymentHoldStatus is 'Complete' in GetOrders and other order
 retrieval API calls.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_READY_FOR_PAYOUT;

/**
 
 A notification type where the listing of the bid item is about
 to end. This event has a property with which caller can specify the TimeLeft
 before the listing ends.
 <br><br>
 Applies to Buyers.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_BID_ITEM_ENDING_SOON;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when a return is created.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_CREATED;

/**
 
 This notification is sent to the subscribed seller (or application)
 when a return is waiting for Seller information like RMA and Return Address.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_WAITING_FOR_SELLER_INFO;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when Seller information like RMA and Return Address is overdue.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_SELLER_INFO_OVERDUE;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when a return is shipped.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_SHIPPED;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when a return is delivered.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_DELIVERED;

/**
 
 This notification is sent to the subscribed seller (or application)
 when refund is overdue on a return.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_REFUND_OVERDUE;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when a return is closed.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_CLOSED;

/**
 
 This notification is sent to the subscribed buyer or seller (or application)
 when a return is escalated.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_RETURN_ESCALATED;

/**
 
 A notification type that is sent to German and Austrian sellers when eBay determines that
 a buyer has paid less than or more than the order amount using the EFT payment method.
 Upon receiving this notification, the seller can then either accept or reject the buyer's
 payment amount through the site or by using the AcceptAdjustment or RejectAdjustment call
 of the Order Adjustment API.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_UNMATCHED_PAYMENT_RECEIVED;

/**
 
 A notification type where sellers are notified when voluntary refunds are
 successful.
 <br><br>
 This notification type is only applicable for DE/AT orders going through the new eBay
 payment process.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_REFUND_SUCCESS;

/**
 
 A notification type where sellers are notified when voluntary refunds failed.
 <br><br>
 This notification type is only applicable for DE/AT orders going through the new eBay
 payment process.
 
*/
extern NSString *const Trading_NotificationEventTypeCodeType_REFUND_FAILURE;
