// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Information about a single notification. Notification information includes
 the reference ID, notification type, current status, time delivered, error code,
 and error message for the notification. If notification details are included in
 the response, all of the detail fields are returned.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_NotificationDetailsType : NSObject <PicoBindable> {

@private
    NSString *_deliveryURL;
    NSString *_referenceID;
    NSDate *_expirationTime;
    NSString *_type;
    NSNumber *_retries;
    NSString *_deliveryStatus;
    NSDate *_nextRetryTime;
    NSDate *_deliveryTime;
    NSString *_errorMessage;
    NSString *_deliveryURLName;
    NSMutableArray *_any;

}


/**
 
 Returns the destination address for the notification. This is the value set
 using SetNotificationPreferences.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *deliveryURL;

/**
 
 Reference identifier for the notification.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *referenceID;

/**
 
 Date and time when this notification will be removed from the
 eBay system.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *expirationTime;

/**
 
 Returns the notification type. Possible values include: AskSellerQuestion,
 AuctionCheckoutComplete, BestOffer, CheckoutBuyerRequestTotal, EndOfAuction,
 Feedback, FixedPriceEndOfTransaction, FixedPriceTransaction, ItemNotReceived,
 MyMessages, OutBid, SecondChanceOffer, UPIBuyerResponseDispute, UPISellerClosedDispute,
 UPISellerOpenedDispute, and UPISellerRespondedToDispute.
 
 
 type: string constant in Trading_NotificationEventTypeCodeType.h
*/
@property (nonatomic, retain) NSString *type;

/**
 
 Returns the total number of retries for the given notification.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *retries;

/**
 
 Returns the notification status. Possible values include Delivered,
 Failed, Rejected, and MarkedDown.
 
 
 type: string constant in Trading_NotificationEventStateCodeType.h
*/
@property (nonatomic, retain) NSString *deliveryStatus;

/**
 
 Returns the time when the notification is scheduled for retry.
 This won't be included if the DeliveryStatus is Delivered.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *nextRetryTime;

/**
 
 Returns the time when the notification was delivered.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *deliveryTime;

/**
 
 Returns the error message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *errorMessage;

/**
 
 Returns the delivery URL name for the notification. This is the value set
 using SetNotificationPreferences.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *deliveryURLName;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
