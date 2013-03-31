// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_UserType;
@class Trading_AmountType;

/**
 
 Details about a Best Offer.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BestOfferType : NSObject <PicoBindable> {

@private
    NSString *_bestOfferID;
    NSDate *_expirationTime;
    Trading_UserType *_buyer;
    Trading_AmountType *_price;
    NSString *_status;
    NSNumber *_quantity;
    NSString *_buyerMessage;
    NSString *_sellerMessage;
    NSString *_bestOfferCodeType;
    NSString *_callStatus;
    NSMutableArray *_any;

}


/**
 
 An ID to distinguish this Best Offer from other Best Offers
 made on the item.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *bestOfferID;

/**
 
 Date and time (in GMT) the offer naturally expires (if the
 seller has not accepted or declined the offer).
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *expirationTime;

/**
 
 Information about the buyer who made the Best Offer.
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *buyer;

/**
 
 The amount of the Best Offer.
 
 
 type : class Trading_AmountType
*/
@property (nonatomic, retain) Trading_AmountType *price;

/**
 
 The state of the offer. In the case of 
 a PlaceOffer response that specified a Best Offer,
 Status may be "Accepted" if the Best Offer
 was at or above an auto-accept price.
 
 
 type: string constant in Trading_BestOfferStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;

/**
 
 The number of items for which the buyer is making an offer.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *quantity;

/**
 
 Text message that was provided by a buyer when placing a Best Offer.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerMessage;

/**
 
 Text response to buyer from seller.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerMessage;

/**
 
 This value indicates whether the corresponding offer is an original Best Offer, or a counter offer to a Best 
 Offer from the seller or buyer.
 
 
 type: string constant in Trading_BestOfferTypeCodeType.h
*/
@property (nonatomic, retain) NSString *bestOfferCodeType;

/**
 
 The status of the call, either Success or Failure.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *callStatus;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
