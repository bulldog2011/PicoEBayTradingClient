// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_StorePreferencesType;

/**
 
 Sets the preferences for a user's eBay Store.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SetStorePreferencesRequestType : Trading_AbstractRequestType {

@private
    Trading_StorePreferencesType *_storePreferences;

}


/**
 
       Specifies the store preferences.
     
 
 type : class Trading_StorePreferencesType
*/
@property (nonatomic, retain) Trading_StorePreferencesType *storePreferences;


@end