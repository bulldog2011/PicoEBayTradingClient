// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 (out) A template for an SMS notification message.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_NotificationMessageType : Trading_AbstractResponseType {

@private
    NSString *_messageBody;
    NSString *_eias;

}


/**
 
 (out) The SMS message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *messageBody;

/**
 
 (out) The EIAS userId.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *eias;


@end
