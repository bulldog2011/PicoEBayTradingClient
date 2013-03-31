// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_SiteDefaultsType;
@class Trading_FeatureDefinitionsType;
@class Trading_CategoryFeatureType;

/**
 (public class)
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetCategoryFeaturesResponseType : Trading_AbstractResponseType {

@private
    NSString *_categoryVersion;
    NSDate *_updateTime;
    NSMutableArray *_category;
    Trading_SiteDefaultsType *_siteDefaults;
    Trading_FeatureDefinitionsType *_featureDefinitions;

}


/**
 
 Returns the current version of the set of feature meta-data.
 Compare this value to the version of the last version you
 downloaded to determine whether the data may have changed.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *categoryVersion;

/**
 
 Gives the time in GMT that the feature flags for the
 category hierarchy were last updated.
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *updateTime;

/**
 
 A category whose feature settings are different from the settings of its parent category.<br>
 <br>
 For example, suppose there is a branch of the category tree with 5 category levels
 (L1, L2, L3, L4, and L5). Suppose the feature settings for SiteDefaults, L1, L4, and L5
 are all "A", and the settings for L2 and L3 are "B". In this case:<br>
 L1's settings (A) match the site default, so L1 is not returned.<br>
 L2's settings (B) are different from L1's, so L2 is returned.<br>
 L3's settings (B) are the same as L2's, so L3 is not returned<br>
 L4's settings (A) are different from L3's, so L4 is returned<br>
 L5's settings (A) are the same as L4's, so L5 is not returned.<br>
 <br>
 If you specified a particular FeatureID in the request, this field
 only returns feature settings for that feature.
 Only returned when the category is different from its parent.
 If the category has children and they aren't returned,
 it means the children inherit the category's feature settings.
 
 
 entry type : class Trading_CategoryFeatureType
*/

@property (nonatomic, retain) NSMutableArray *category;

/**
 
 Returns the feature settings defined for most categories on the site.
 Most categories share these settings. However, some categories can
 override some settings, as indicated in the Category nodes
 (if any).
 
 
 type : class Trading_SiteDefaultsType
*/
@property (nonatomic, retain) Trading_SiteDefaultsType *siteDefaults;

/**
 
 Returns definitions of the various features on the site,
 or the features you requested in FeatureID (if any).
 Each feature has a node within FeatureDefinitions.
 
 
 type : class Trading_FeatureDefinitionsType
*/
@property (nonatomic, retain) Trading_FeatureDefinitionsType *featureDefinitions;


@end
