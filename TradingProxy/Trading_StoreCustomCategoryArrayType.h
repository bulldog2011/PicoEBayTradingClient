// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_StoreCustomCategoryType;

/**
 
   Set of custom categories for the Store.
   
 
 @ingroup EBayAPIInterface
*/
@interface Trading_StoreCustomCategoryArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_customCategory;

}


/**
 
   A custom category for your eBay Store.
   
 
 entry type : class Trading_StoreCustomCategoryType
*/

@property (nonatomic, retain) NSMutableArray *customCategory;


@end
