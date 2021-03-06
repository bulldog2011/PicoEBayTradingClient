// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Specifies the Date range.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_TimeRangeType : NSObject <PicoBindable> {

@private
    NSDate *_timeFrom;
    NSDate *_timeTo;
    NSMutableArray *_any;

}


/**
 
 Specifies the earliest (oldest) date to be used in a date range.
  
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *timeFrom;

/**
 
 Specifies the latest (most recent) date to be used in a date range.
  
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *timeTo;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
