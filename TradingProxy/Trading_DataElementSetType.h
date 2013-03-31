// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 This type is deprecated as the <b>GetProduct*</b> calls are no longer available.
 
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_DataElementSetType : NSObject <PicoBindable> {

@private
    NSString *_dataElement;
    NSNumber *_dataElementID;
    NSMutableArray *_any;
    NSNumber *_attributeSetID;

}


/**
 
 
 An HTML snippet that specifies hints for the user, help links, help graphics,
 and other supplemental information that varies per characteristic set.
 In GetProductSearchPage, one DataElement value contains a hint (including an empty HTML achor element),
 one DataElement value may contain a URL to insert into the HTML anchor as the href value,
 and one DataElement value may contain a URL that eBay uses as a help graphic.
 If no value is available in the meta-data, a dash ("--") is returned instead.
 Usage of this information is optional and may require developers to inspect
 the information to determine how it can be applied in an application.
 Because this is returned as a string, the HTML markup elements are escaped with
 character entity references (e.g.,&lt;a href=""&gt;&lt;Attributes&gt;...).
 See the appendices in the eBay Web Services guide for general information about
 string data types.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *dataElement;

/**
 
 
 Identifier for a data element. This is primarily for internal use by eBay.
 Developers can choose to inspect this information and determine how it
 can be applied in their applications.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *dataElementID;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;

/**
 (public property)
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *attributeSetID;


@end
