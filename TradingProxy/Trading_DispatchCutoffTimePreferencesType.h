// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
   Contains a seller's preferences for cutoff time for zero day handling for item shipping.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DispatchCutoffTimePreferencesType : NSObject <PicoBindable> {

@private
    NSDate *_cutoffTime;
    NSMutableArray *_any;

}


/**
 
 Indicates the time of day this eBay item will shipped with in same days if DispatchTime is set 0
 for the item. Enter times in 30 minute increments from the top of the hour. That is, enter
 values either on the hour (:00) or 30 minutes past the hour (:30).
 Other values will be will be rounded down to the next closest 30 minute
 increment. Times entered should be local to the value provided for TimeZoneID.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *cutoffTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end