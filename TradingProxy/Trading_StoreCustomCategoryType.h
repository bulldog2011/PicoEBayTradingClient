// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_StoreCustomCategoryType;

/**
 
 Configuration of a store custom category.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_StoreCustomCategoryType : NSObject <PicoBindable> {

@private
    NSNumber *_categoryID;
    NSString *_name;
    NSNumber *_order;
    NSMutableArray *_childCategory;
    NSMutableArray *_any;

}


/**
 
 Custom category ID. For SetStoreCategories, required only if
 Action is set to Rename, Move or Delete.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *categoryID;

/**
 
 Name of the custom category.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 Order in which the custom category appears in the list of store
 categories.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *order;

/**
 
 Contains the properties of a custom subcategory for an eBay Store. eBay Stores support
 three category levels.
 
 
 entry type : class Trading_StoreCustomCategoryType
*/

@property (nonatomic, retain) NSMutableArray *childCategory;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end