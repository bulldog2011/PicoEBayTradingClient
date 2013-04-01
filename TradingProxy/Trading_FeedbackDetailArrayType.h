// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_FeedbackDetailType;

/**
 
 Contains multiple individual feedback detail entries.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_FeedbackDetailArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_feedbackDetail;

}


/**
 
 Contains a single feedback detail entry. Output only.
 
 
 entry type : class Trading_FeedbackDetailType
*/

@property (nonatomic, retain) NSMutableArray *feedbackDetail;


@end