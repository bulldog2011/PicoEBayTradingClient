// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_MemberMessageExchangeType;

/**
 
 Container for messages. Returned for GetMemberMessages if messages that meet the request criteria exist.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_MemberMessageExchangeArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_memberMessageExchange;

}


/**
 
 Information about individual messages. Returned if the parent container is returned.
 
 
 entry type : class Trading_MemberMessageExchangeType
*/

@property (nonatomic, retain) NSMutableArray *memberMessageExchange;


@end