// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type is deprecated as the Bid Assistant feature is no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BidAssistantListType : NSObject <PicoBindable> {

@private
    NSNumber *_bidGroupID;
    NSNumber *_includeNotes;
    NSMutableArray *_any;

}


/**
 
 
 Use this element to specify the bid group id for the Bid Assistant items 
 that you want information about.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *bidGroupID;

/**
 
 
 Specifies whether or not to include Item.PrivateNotes and Item.eBayNotes
 in the response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeNotes;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
