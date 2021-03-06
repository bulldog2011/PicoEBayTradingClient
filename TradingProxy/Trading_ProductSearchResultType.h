// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_ResponseAttributeSetType;

/**
 
 This type is deprecated as <b>GetProduct*</b> calls were deprecated.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ProductSearchResultType : NSObject <PicoBindable> {

@private
    NSString *_id;
    NSString *_numProducts;
    NSMutableArray *_attributeSet;
    NSNumber *_displayStockPhotos;
    NSMutableArray *_any;

}


/**
 
 
 Key you specified in ProductSearchID in the search request to
 distinguish between query results. Primarily useful when conducting
 multiple searches in the same call. If no ProductSearchID value was
 specified in the request, returns the array index of the search result
 (beginning with 0). Not applicable to GetProductFamilyMembers.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *id;

/**
 
 
 Total quantity of products that match the search request
 (across all characteristic sets). This value can exceed the actual
 quantity of products returned in the current virtual page.
 Not applicable to GetProductFamilyMembers.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *numProducts;

/**
 
 
 A result containing a set of one or more product families.
 For GetProductSearchResults, if QueryKeywords and multiple characteristic set IDs were
 specified in the request, multiple AttributeSet objects can be returned.
 Each AttributeSet corresponds to a characteristic set ID specified
 in the request. See the eBay Web Services guide for more information
 about working with this data.
 For GetProductSearchResults, only returned with request version 387 and higher.
 For GetProductFamilyMembers, only returned with request version 415 and higher.
 
 
 entry type : class Trading_ResponseAttributeSetType
*/

@property (nonatomic, retain) NSMutableArray *attributeSet;

/**
 
 
 If true, your application should attempt to display stock photos that
 are returned. If false, your application should not attempt to display any
 stock photos that are returned. This recommendation is useful for catalog data
 related to products like coins, where stock photos are not applicable. An
 application with a graphical user interface can use this flag to determine
 when to hide stock photo widgets for a set of search results.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *displayStockPhotos;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
