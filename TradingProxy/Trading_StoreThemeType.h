// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_StoreColorSchemeType;

/**
 
 Store theme.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_StoreThemeType : NSObject <PicoBindable> {

@private
    NSNumber *_themeID;
    NSString *_name;
    Trading_StoreColorSchemeType *_colorScheme;
    NSMutableArray *_any;

}


/**
 
 Store theme ID (use GetStoreOptions to get the list of valid theme
 IDs).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *themeID;

/**
 
 Store theme name. Provides a user-friendly name for the theme.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 Theme color scheme.
 
 
 type : class Trading_StoreColorSchemeType
*/
@property (nonatomic, retain) Trading_StoreColorSchemeType *colorScheme;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
