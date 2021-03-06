// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_PaginationResultType;
@class Trading_SellingManagerProductType;

/**
 
 Contains a list of the products created by the seller. The list of products is returned as a set
 of tags, in which are returned zero, one, or multiple SellingManagerProductType objects. Each
 SellingManagerProductType object contains the information about for one Selling Manager product
 and any Selling Manager templates the product contains.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetSellingManagerInventoryResponseType : Trading_AbstractResponseType {

@private
    NSDate *_inventoryCountLastCalculatedDate;
    NSMutableArray *_sellingManagerProduct;
    Trading_PaginationResultType *_paginationResult;

}


/**
 
 Returns the date the inventory counts were last calculated.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *inventoryCountLastCalculatedDate;

/**
 
 Container for information about the requested products and templates.
 
 
 entry type : class Trading_SellingManagerProductType
*/

@property (nonatomic, retain) NSMutableArray *sellingManagerProduct;

/**
 
 Contains the total number of pages (TotalNumberOfPages) and the total
 number of products entries (TotalNumberOfEntries) that can be returned
 on repeated calls with the same format and report criteria.
 
 
 type : class Trading_PaginationResultType
*/
@property (nonatomic, retain) Trading_PaginationResultType *paginationResult;


@end
