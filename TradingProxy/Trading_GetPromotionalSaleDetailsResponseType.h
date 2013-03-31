// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_PromotionalSaleArrayType;

/**
 
 Contains information about promotional sales. This call
 is part of the Promotional Price Display feature.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetPromotionalSaleDetailsResponseType : Trading_AbstractResponseType {

@private
    Trading_PromotionalSaleArrayType *_promotionalSaleDetails;

}


/**
 
 Contains information about a promotional sale or sales. If you did not 
 specify a PromotionalSaleID in the request, then all promotional sales
 for the seller are returned. Promotional sales enable sellers to add 
 discounts and/or free shipping to items. 
 
 
 type : class Trading_PromotionalSaleArrayType
*/
@property (nonatomic, retain) Trading_PromotionalSaleArrayType *promotionalSaleDetails;


@end
