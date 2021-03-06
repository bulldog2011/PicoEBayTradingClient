// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 The number of disputes that match a given filter.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DisputeFilterCountType : NSObject <PicoBindable> {

@private
    NSString *_disputeFilterType;
    NSNumber *_totalAvailable;
    NSMutableArray *_any;

}


/**
 
 A filter used to reduce the number of disputes returned. The filter uses criteria
 such as whether the dispute is awaiting a response, is closed, or is eligible for
 credit. Both Unpaid Item and Item Not Received disputes can be returned for the
 same filter value.
 
 
 type: string constant in Trading_DisputeFilterTypeCodeType.h
*/
@property (nonatomic, retain) NSString *disputeFilterType;

/**
 
 The number of disputes that match the filter.
 In the GetUserDisputes response, not returned for the filter type
 that was used in the request.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *totalAvailable;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
