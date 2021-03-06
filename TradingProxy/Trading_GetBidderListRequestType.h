// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Retrieves all items the user is currently bidding on, and the ones they have won
 or purchased.
 
 
 
 Retrieves all items the user is currently bidding on, and the ones they have won
 or purchased.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetBidderListRequestType : Trading_AbstractRequestType {

@private
    NSNumber *_activeItemsOnly;
    NSDate *_endTimeFrom;
    NSDate *_endTimeTo;
    NSString *_userID;
    NSString *_granularityLevel;

}


/**
 
 Indicates whether or not to limit the result set to active items. If true, only
 active items are returned and the EndTimeFrom and EndTimeTo filters are
 ignored. If false (or not sent), both active and ended items are returned.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *activeItemsOnly;

/**
 
 Used in conjunction with EndTimeTo. Limits returned items to only those for
 which the item's end date is on or after the date-time specified. Specify an
 end date within 30 days prior to today. Items that ended more than 30 days
 ago are omitted from the results. If specified, EndTimeTo must also be
 specified. Express date-time in the format YYYY-MM-DD HH:MM:SS, and in GMT.
 (For information on how to convert between your local time zone and GMT, see
 Time Values Note.) This field is ignored if ActiveItemsOnly is true.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *endTimeFrom;

/**
 
 Used in conjunction with EndTimeFrom. Limits returned items to only those for
 which the item's end date is on or before the date-time specified. If
 specified, EndTimeFrom must also be specified. Express date-time in the format
 YYYY-MM-DD HH:MM:SS, and in GMT. This field is ignored if ActiveItemsOnly is
 true. Note that for GTC items, whose end times automatically increment by 30
 days every 30 days, an EndTimeTo within in the first 30 days of a listing will
 refer to the listing's initial end time.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *endTimeTo;

/**
 
 The user for whom information should be returned. If
 provided, overrides user defined via RequesterCredentials
 in header.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userID;

/**
 
 You can control some of the fields returned in the response by specifying one
 of two values in the GranularityLevel field: Fine or Medium. Fine returns
 more fields than the default, while setting this field to Medium returns an
 abbreviated set of results.
 
 
 type: string constant in Trading_GranularityLevelCodeType.h
*/
@property (nonatomic, retain) NSString *granularityLevel;


@end
