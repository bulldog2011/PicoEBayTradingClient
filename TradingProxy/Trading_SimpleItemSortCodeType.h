// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>


/**
 
 Sorts items by Best Match, and no sort order applies. If specified, 
 then Best Match sort also applies to CategoryHistogram.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_BEST_MATCH;

/**
 
 This value is reserved for future or internal use.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_CUSTOM_CODE;

/**
 
 Sorts by the end time of the listing, in ascending or descending order according to the 
 <b>SortOrder</b> value.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_END_TIME;

/**
 
 Sorts by number of bids on the item, in ascending or descending order according to the 
 <b>SortOrder</b> value.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_BID_COUNT;

/**
 
 Sorts by country; no sort order can be specified.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_COUNTRY;

/**
 
 Sorts by current bid; descending order only.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_CURRENT_BID;

/**
 
 Sorts by distance; ascending order only.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_DISTANCE;

/**
 
 Sorts by the start time of the listing; recently-listed first.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_START_DATE;

/**
 
 Sorts by BestMatchCategoryGroup, so results are grouped by Best Match within a category.
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_BEST_MATCH_CATEGORY_GROUP;

/**
 
 Sorts by total cost, which is item cost plus shipping cost. If
 <b>SortOrder</b> is included and set to 'Ascending', items are sorted 
 in the following order: Lowest total cost (for items where shipping was
 properly specified); then freight-shipping items (lowest to highest); and finally, 
 items for which shipping was not specified (lowest to highest).
 
*/
extern NSString *const Trading_SimpleItemSortCodeType_PRICE_PLUS_SHIPPING;