// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_MyeBayFavoriteSellerListType;
@class Trading_MyeBayFavoriteSearchListType;
@class Trading_ItemArrayType;

/**
 
 Contains the items, searches and sellers that the user has saved to this
 list using the "Add to list" feature.  The name of the list is given by the
 "Name" element.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_UserDefinedListType : NSObject <PicoBindable> {

@private
    NSString *_name;
    NSNumber *_itemCount;
    NSNumber *_favoriteSellerCount;
    Trading_ItemArrayType *_itemArray;
    Trading_MyeBayFavoriteSearchListType *_favoriteSearches;
    Trading_MyeBayFavoriteSellerListType *_favoriteSellers;
    NSMutableArray *_any;

}


/**
 
 The user's chosen name for this list.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 The value in this field indicates the total number of items in the
 user-defined list. The number of <b>Item</b> nodes in the
 <b>ItemArray</b> should match this value.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *itemCount;

/**
 
 The value in this field indicates the total number of favorite sellers in the
 user-defined list. The number of <b>FavoriteSeller</b> nodes returned
 in the response should match this value.
    
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *favoriteSellerCount;

/**
 
 An array of Items that the user has added to the user-defined list.
 
 
 type : class Trading_ItemArrayType
*/
@property (nonatomic, retain) Trading_ItemArrayType *itemArray;

/**
 
 An array of Favorite Searches that the user has added to the user-defined list.
 
 
 type : class Trading_MyeBayFavoriteSearchListType
*/
@property (nonatomic, retain) Trading_MyeBayFavoriteSearchListType *favoriteSearches;

/**
 
 An array of Favorite Sellers that the user has added to the user-defined list.
 
 
 type : class Trading_MyeBayFavoriteSellerListType
*/
@property (nonatomic, retain) Trading_MyeBayFavoriteSellerListType *favoriteSellers;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
