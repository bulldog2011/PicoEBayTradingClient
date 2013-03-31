// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_SimpleItemSortCodeType.h"


/**
 
 Sorts items by Best Match, and no sort order applies. If specified, 
 then Best Match sort also applies to CategoryHistogram.
 
*/
NSString *const Trading_SimpleItemSortCodeType_BEST_MATCH = @"BestMatch";

/**
 
 This value is reserved for future or internal use.
 
*/
NSString *const Trading_SimpleItemSortCodeType_CUSTOM_CODE = @"CustomCode";

/**
 
 Sorts by the end time of the listing, in ascending or descending order according to the 
 <b>SortOrder</b> value.
 
*/
NSString *const Trading_SimpleItemSortCodeType_END_TIME = @"EndTime";

/**
 
 Sorts by number of bids on the item, in ascending or descending order according to the 
 <b>SortOrder</b> value.
 
*/
NSString *const Trading_SimpleItemSortCodeType_BID_COUNT = @"BidCount";

/**
 
 Sorts by country; no sort order can be specified.
 
*/
NSString *const Trading_SimpleItemSortCodeType_COUNTRY = @"Country";

/**
 
 Sorts by current bid; descending order only.
 
*/
NSString *const Trading_SimpleItemSortCodeType_CURRENT_BID = @"CurrentBid";

/**
 
 Sorts by distance; ascending order only.
 
*/
NSString *const Trading_SimpleItemSortCodeType_DISTANCE = @"Distance";

/**
 
 Sorts by the start time of the listing; recently-listed first.
 
*/
NSString *const Trading_SimpleItemSortCodeType_START_DATE = @"StartDate";

/**
 
 Sorts by BestMatchCategoryGroup, so results are grouped by Best Match within a category.
 
*/
NSString *const Trading_SimpleItemSortCodeType_BEST_MATCH_CATEGORY_GROUP = @"BestMatchCategoryGroup";

/**
 
 Sorts by total cost, which is item cost plus shipping cost. If
 <b>SortOrder</b> is included and set to 'Ascending', items are sorted 
 in the following order: Lowest total cost (for items where shipping was
 properly specified); then freight-shipping items (lowest to highest); and finally, 
 items for which shipping was not specified (lowest to highest).
 
*/
NSString *const Trading_SimpleItemSortCodeType_PRICE_PLUS_SHIPPING = @"PricePlusShipping";
