// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 Type defining the response of the <b>AddDispute</b> call. Upon a successful
 call, the response contains a newly created DisputeID value, which confirms that the
 the Unpaid Item or Mutually Canceled Transaction case was successfully created.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_AddDisputeResponseType : Trading_AbstractResponseType {

@private
    NSString *_disputeID;

}


/**
 
 The unique identifier of the Unpaid Item or Mutually Canceled Transaction case
 that was successfully created with the <b>AddDispute</b> call.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *disputeID;


@end
