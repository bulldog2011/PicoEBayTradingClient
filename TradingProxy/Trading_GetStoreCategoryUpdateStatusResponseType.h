// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 Returns the store category structure update status, when a prior 
 SetStoreCategories call was processed asynchronously. If a SetStoreCategories 
 request affects many listings, then the category structure changes will be 
 processed asynchronously. If not many listings are affected by category structure 
 changes, the status is returned in the SetStoreCategories response.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetStoreCategoryUpdateStatusResponseType : Trading_AbstractResponseType {

@private
    NSString *_status;

}


/**
 
 The status (Pending, InProgress, Complete, or Failed) of an update to the 
 store category structure. 
 
 
 type: string constant in Trading_TaskStatusCodeType.h
*/
@property (nonatomic, retain) NSString *status;


@end
