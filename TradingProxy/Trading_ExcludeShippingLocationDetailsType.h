// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Container for the list of site-specific locations supported by the Exclude Ship To
 Locations feature.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ExcludeShippingLocationDetailsType : NSObject <PicoBindable> {

@private
    NSString *_description;
    NSString *_location;
    NSString *_region;
    NSString *_detailVersion;
    NSDate *_updateTime;
    NSMutableArray *_any;

}


/**
 
 The localized location name.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *description;

/**
 
 The location or region code to be used with the AddItem family of calls. These
 codes are also returned by GetItem. This code reflects the <a href=
 "http://www.iso.org/iso/country_codes/iso_3166_code_lists/english_country_names_and_code_elements.htm"
 >ISO 3166</a> codes.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *location;

/**
 
 The region code to which the location belongs.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *region;

/**
 
 Returns the current version number of the ExcludeShippingLocation data. Use
 the version number to determine if you need to refresh your cached client data.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailVersion;

/**
 
 The time in GMT that the feature flags for the details were last updated.
 Use this timestamp to determine if you need to refresh your cached client data.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
