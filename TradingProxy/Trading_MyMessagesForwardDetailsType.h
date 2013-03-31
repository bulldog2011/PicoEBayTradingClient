// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type is deprecated because <b>MyMessagesAlert*</b> are deprecated.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MyMessagesForwardDetailsType : NSObject <PicoBindable> {

@private
    NSDate *_userForwardDate;
    NSString *_forwardMessageEncoding;
    NSMutableArray *_any;

}


/**
 
 
 The date and time a user forwarded a message.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *userForwardDate;

/**
 
 
 Encoding used to forward a message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *forwardMessageEncoding;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
