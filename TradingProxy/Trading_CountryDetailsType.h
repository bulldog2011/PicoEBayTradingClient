// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Details about a specific country.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_CountryDetailsType : NSObject <PicoBindable> {

@private
    NSString *_country;
    NSString *_description;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 Two-letter code representing a country. These two-letter codes are typically used 
 in Add/Revise/Relist calls when referring to a country.<br><br>
 
 
 type: string constant in Trading_CountryCodeType.h
*/
@property (nonatomic, retain) NSString *country;

/**
 
 Full country name for display purposes. May be similar to (but not necessarily identical to)
 CountryName in addresses (e.g., User.RegistrationAddress.CountryName in GetUser).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 Returns the latest version number for this field. The version can be used to
 determine if and when to refresh cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 details were last updated. This timestamp can be used to
 determine if and when to refresh cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
