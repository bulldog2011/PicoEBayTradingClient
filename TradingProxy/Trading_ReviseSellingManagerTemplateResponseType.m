// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ReviseSellingManagerTemplateResponseType.h"
#import "Trading_FeesType.h"
#import "Trading_SellingManagerProductDetailsType.h"

@implementation Trading_ReviseSellingManagerTemplateResponseType

@synthesize saleTemplateID = _saleTemplateID;
@synthesize fees = _fees;
@synthesize categoryID = _categoryID;
@synthesize category2ID = _category2ID;
@synthesize verifyOnly = _verifyOnly;
@synthesize saleTemplateName = _saleTemplateName;
@synthesize sellingManagerProductDetails = _sellingManagerProductDetails;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"ReviseSellingManagerTemplateResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SaleTemplateID" propertyName:@"saleTemplateID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"saleTemplateID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Fees" propertyName:@"fees" type:PICO_TYPE_OBJECT clazz:[Trading_FeesType class]];
    [map setObject:ps forKey:@"fees"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Category2ID" propertyName:@"category2ID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"category2ID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VerifyOnly" propertyName:@"verifyOnly" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"verifyOnly"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SaleTemplateName" propertyName:@"saleTemplateName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"saleTemplateName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingManagerProductDetails" propertyName:@"sellingManagerProductDetails" type:PICO_TYPE_OBJECT clazz:[Trading_SellingManagerProductDetailsType class]];
    [map setObject:ps forKey:@"sellingManagerProductDetails"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.saleTemplateID = nil;
    self.fees = nil;
    self.categoryID = nil;
    self.category2ID = nil;
    self.verifyOnly = nil;
    self.saleTemplateName = nil;
    self.sellingManagerProductDetails = nil;
    [super dealloc];
}

@end
