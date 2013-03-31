// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 The information for one Theme or one Layout.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DescriptionTemplateType : NSObject <PicoBindable> {

@private
    NSNumber *_groupID;
    NSNumber *_id;
    NSString *_imageURL;
    NSString *_name;
    NSString *_templateXML;
    NSString *_type;
    NSMutableArray *_any;

}


/**
 
 Unique identifier for the group in which a Theme falls 
 (holidays, special events, etc.). Not returned for Layouts.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *groupID;

/**
 
 Unique identifier for one Theme or Layout.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *id;

/**
 
 URL for a small (100x120 pixel) image providing a sample of how a Theme or Layout looks.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *imageURL;

/**
 
 Unique text name of the Theme or Layout.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *name;

/**
 
 XML defining the template. Elements you must include
 in your XML: ThemeTop, ThemeUserCellTop, ThemeUserContent, 
 ThemeUserCellBottom, ThemeBottom. Not returned for Layouts.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *templateXML;

/**
 
 Either Layout or Theme.
 
 
 type: string constant in Trading_DescriptionTemplateCodeType.h
*/
@property (nonatomic, retain) NSString *type;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
