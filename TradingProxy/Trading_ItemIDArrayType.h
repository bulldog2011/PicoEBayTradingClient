// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Type defining the <b>PromotionalSaleItemIDArray</b> container, which
 consists of an array of listings to which a Promotional Sale applies.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ItemIDArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_itemID;
    NSMutableArray *_any;

}


/**
 
 A unique identifier for an item listing.
 <br/><br/>
 For <b>SetPromotionalSaleListings</b>, the seller passes in the
 <b>ItemID</b> value for each listing that he/she wishes to become
 part of the Promotional Sale identified by the
 <b>PromotionalSaleID</b> value.
 <br/><br/>
 For <b>GetPromotionalSaleDetails</b>, each listing returned in the
 response is a part of the Promotional Sale identified by the
 <b>PromotionalSaleID</b> value.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *itemID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
