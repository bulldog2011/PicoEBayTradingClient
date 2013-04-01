// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Indicates category support for listing of Local Market items by sellers
 subscribed to Local Market for Specialty Vehicles.
 Each of the subscriptions will have following options, which will define
 "National" vs "Local" ad format listing.
 "LocalOptional" : This will allow national and local listing.
 "LocalOnly" : Seller can have Local listings only.
 "NationalOnly" : Seller can not opt into local only exposure. It has to be
 national listing.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SpecialitySubscriptionDefinitionType : NSObject <PicoBindable> {

@private
    NSMutableArray *_any;

}


/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
