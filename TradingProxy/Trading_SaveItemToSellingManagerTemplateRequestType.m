// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SaveItemToSellingManagerTemplateRequestType.h"

@implementation Trading_SaveItemToSellingManagerTemplateRequestType

@synthesize itemID = _itemID;
@synthesize productID = _productID;
@synthesize templateName = _templateName;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SaveItemToSellingManagerTemplateRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProductID" propertyName:@"productID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"productID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TemplateName" propertyName:@"templateName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"templateName"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.productID = nil;
    self.templateName = nil;
    [super dealloc];
}

@end