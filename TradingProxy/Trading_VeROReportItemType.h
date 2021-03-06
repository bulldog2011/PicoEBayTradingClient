// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains the item information to report.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_VeROReportItemType : NSObject <PicoBindable> {

@private
    NSString *_itemID;
    NSNumber *_veROReasonCodeID;
    NSString *_messageToSeller;
    NSNumber *_copyEmailToRightsOwner;
    NSMutableArray *_region;
    NSMutableArray *_country;
    NSString *_patent;
    NSString *_detailedMessage;
    NSMutableArray *_any;

}


/**
 
 The unique identifier for the item being reported for alleged infringement.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *itemID;

/**
 
 The reason code identifier for the type of claimed infringement. Use
 GetVeROReasonCodeDetails to retrieve a list of reason codes for a given site
 or for all sites.
 
 
 type : NSNumber, wrapper for primitive long
*/
@property (nonatomic, retain) NSNumber *veROReasonCodeID;

/**
 
 Message from the VeRO Program member to the seller of the item being reported.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *messageToSeller;

/**
 
 When set to true, this specifies that the VeRO Program member be copied on
 the Notice of Claimed Infringement (NOCI) email sent to sellers of reported
 items.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *copyEmailToRightsOwner;

/**
 
 Region whose intellectual property laws are being violated.
 
 
 entry type : string constant in Trading_ShippingRegionCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *region;

/**
 
 The two-digit code representing the country whose intellectual property laws are
 being violated. This field can be used more than once if there a multiple
 countries whose intellectual property laws are being violated.
 <br><br>
 This field is required when the <b>VeROReasonCodeID</b>
 is 9037 (Item(s) is unlawful importation of product bearing trademark).
 
 
 entry type : string constant in Trading_CountryCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *country;

/**
 
 Patent number of the item, required when the VeROReasonCodeID is 9048 (Item(s)
 infringes a valid patent).
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *patent;

/**
 
 Explanatory text from the VeRO Program member. This field is required when the
 VeROReasonCodeID is "others."
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailedMessage;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
