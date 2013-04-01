// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_NameRecommendationType;

/**
 
 Defines details about recommended names and values for custom Item Specifics.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RecommendationsType : NSObject <PicoBindable> {

@private
    NSString *_categoryID;
    NSMutableArray *_nameRecommendation;
    NSNumber *_updated;
    NSMutableArray *_any;

}


/**
 
 The leaf category in which the associated Item Specifics are popular.
 This is always a category that you specified in the request.<br>
 <br>
 Only returned for categories that have popular Item Specifics,
 or when you also pass in the Name field.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryID;

/**
 
 Contains an Item Specific that eBay recommends as popular
 within the specified category. Only returned if recommendations are
 found.
 
 
 entry type : class Trading_NameRecommendationType
*/

@property (nonatomic, retain) NSMutableArray *nameRecommendation;

/**
 
 If true, the recommended Item Specifics for this category
 have changed since the time you specified (in LastUpdateTime).
 (In this case, we suggest you retrieve the latest data for
 the category.)
 If false, the recommended Item Specifics for this category
 have not changed since the time you specified.<br>
 <br>
 Only returned when you pass LastUpdateTime in the request.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *updated;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
