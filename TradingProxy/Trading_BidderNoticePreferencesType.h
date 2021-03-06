// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
   Contains a seller's preferences for receiving bidder notices.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BidderNoticePreferencesType : NSObject <PicoBindable> {

@private
    NSNumber *_unsuccessfulBidderNoticeIncludeMyItems;
    NSMutableArray *_any;

}


/**
 
   If true, sends the seller a notice containing the contact information for unsuccessful
   bidders.
   
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *unsuccessfulBidderNoticeIncludeMyItems;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
