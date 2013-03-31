// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Specifies 1 year feedback metrics as buyer.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BuyerRoleMetricsType : NSObject <PicoBindable> {

@private
    NSNumber *_positiveFeedbackLeftCount;
    NSNumber *_negativeFeedbackLeftCount;
    NSNumber *_neutralFeedbackLeftCount;
    NSNumber *_feedbackLeftPercent;
    NSMutableArray *_any;

}


/**
 
 Count of positive feedback entries given as a buyer.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *positiveFeedbackLeftCount;

/**
 
 Count of negative feedback entries given as a buyer.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *negativeFeedbackLeftCount;

/**
 
 Count of neutral feedback entries given as a buyer.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *neutralFeedbackLeftCount;

/**
 
 Percentage of leaving feedback as a buyer.
 
 
 type : NSNumber, wrapper for primitive float
*/
@property (nonatomic, retain) NSNumber *feedbackLeftPercent;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end