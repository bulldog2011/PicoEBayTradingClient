// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the Feedback details for an order line item, including the eBay User ID
 of the user the feedback is intended for, the Feedback rating, and the Feedback comment.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_FeedbackInfoType : NSObject <PicoBindable> {

@private
    NSString *_commentText;
    NSString *_commentType;
    NSString *_targetUser;
    NSMutableArray *_any;

}


/**
 
 Textual comment that explains, clarifies, or justifies the Feedback rating specified
 in <b>CommentType</b>. This field is required in <b>CompleteSale</b> if the
 <b>FeedbackInfo</b> container is used.
 <br><br>
 This comment will still be displayed even if submitted Feedback is withdrawn.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *commentText;

/**
 
 This value indicates the Feedback rating for the user specified in the
 <b>TargetUser</b> field. This field is required in <b>CompleteSale</b> if the
 <b>FeedbackInfo</b> container is used.
 <br><br>
 A Positive rating increases the user's Feedback score, a Negative rating decreases
 the user's Feedback score, and a Neutral rating does not affect the user's Feedback
 score. eBay users also have the right to withdraw feedback for whatever reason.
 <br><br>
 Sellers cannot leave Neutral or Negative ratings for buyers.
 
 
 type: string constant in Trading_CommentTypeCodeType.h
*/
@property (nonatomic, retain) NSString *commentType;

/**
 
 This eBay User ID identifies the recipient user for whom the feedback is being left.
 This field is required in <b>CompleteSale</b> if the
 <b>FeedbackInfo</b> container is used.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *targetUser;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
