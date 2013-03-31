// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_CharityIDType;

/**
 
 Lists the nonprofit charity organization affiliations for a specified user.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CharityAffiliationsType : NSObject <PicoBindable> {

@private
    NSMutableArray *_charityID;
    NSMutableArray *_any;

}


/**
 
 Indicates the affiliation status for nonprofit charity organizations
 registered with the dedicated eBay Giving Works provider.
 
 
 entry type : class Trading_CharityIDType
*/

@property (nonatomic, retain) NSMutableArray *charityID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
