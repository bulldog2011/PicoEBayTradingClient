// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_RemindersType;

/**
 
 Returns totals of various reminder types from the user's My eBay account.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetMyeBayRemindersResponseType : Trading_AbstractResponseType {

@private
    Trading_RemindersType *_buyingReminders;
    Trading_RemindersType *_sellingReminders;

}


/**
 
 Contains the buying reminders in the user's My eBay account that match
 the request criteria.
 
 
 type : class Trading_RemindersType
*/
@property (nonatomic, retain) Trading_RemindersType *buyingReminders;

/**
 
 Contains the selling reminders in the user's My eBay account that match
 the request criteria.
 
 
 type : class Trading_RemindersType
*/
@property (nonatomic, retain) Trading_RemindersType *sellingReminders;


@end
