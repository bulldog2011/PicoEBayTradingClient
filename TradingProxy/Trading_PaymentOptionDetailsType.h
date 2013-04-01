// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type is deprecated; use
 <b>GetCategoryFeatures</b> with <b>PaymentMethods</b> as a
 <b>FeatureID</b> value in the request.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_PaymentOptionDetailsType : NSObject <PicoBindable> {

@private
    NSString *_paymentOption;
    NSString *_description;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 
 A payment method value defined in the schema.
 
 
 type: string constant in Trading_BuyerPaymentMethodCodeType.h
*/
@property (nonatomic, retain) NSString *paymentOption;

/**
 
 
 Full name of the payment method for display purposes.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 
 Returns the latest version number for this field. The version can be
 used to determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 
 Gives the time in GMT that the feature flags for the details were last
 updated. This timestamp can be used to determine if and when to refresh
 cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
