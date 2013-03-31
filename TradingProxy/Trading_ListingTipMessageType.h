// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 Contains the message portion of a listing tip that is returned by the Listing Analyzer engine.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ListingTipMessageType : NSObject <PicoBindable> {

@private
    NSString *_listingTipMessageID;
    NSString *_shortMessage;
    NSString *_longMessage;
    NSString *_helpURLPath;
    NSMutableArray *_any;

}


/**
 
 Identifier for the tip message. Primarily for internal use. This value may change over time.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *listingTipMessageID;

/**
 
 Brief version of the tip message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *shortMessage;

/**
 
 Detailed version of the tip message.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *longMessage;

/**
 
 Path part of a URL for a "Learn More" link that points to a relevant eBay Web site online help page.
 The path is relative to http://pages.ebay.XX, where XX is the 2-letter site code
 (e.g., http://pages.ebay.de for the eBay Germany site). Applications should append the
 URL to the appropriate path for the user's site.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *helpURLPath;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end