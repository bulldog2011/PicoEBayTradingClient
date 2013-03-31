// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Trading_BestOfferType;

/**
  
 A collection of Best Offers. Empty if there are no best offers.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_BestOfferArrayType : NSObject <PicoBindable> {

@private
    NSMutableArray *_bestOffer;

}


/**
  
 A container of details about a best offer.
 
 
 entry type : class Trading_BestOfferType
*/

@property (nonatomic, retain) NSMutableArray *bestOffer;


@end