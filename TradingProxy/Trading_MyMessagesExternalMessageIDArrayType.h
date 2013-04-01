// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains a list of up to 10 external message IDs.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MyMessagesExternalMessageIDArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_externalMessageID;

}


/**
 
 Currently available on the US site. A message ID that uniquely identifies a message
 for a given user. If provided at the time of message creation, this ID can be used
 to retrieve messages, and will take precedence over the message ID. A total of 10
 message IDs can be specified.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *externalMessageID;


@end