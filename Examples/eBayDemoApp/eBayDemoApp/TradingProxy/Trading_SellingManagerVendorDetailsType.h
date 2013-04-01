// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 Describes vendor information.
 
 @ingroup EBayAPIInterface
*/
@interface Trading_SellingManagerVendorDetailsType : NSObject <PicoBindable> {

@private
    NSString *_vendorName;
    NSString *_vendorContactInfo;
    NSMutableArray *_any;

}


/**
 
 Primary vendor name. Vendor information is returned only if it has been set.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *vendorName;

/**
 
 Contact information of vendor. Vendor information is returned only if it has been set.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *vendorContactInfo;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end