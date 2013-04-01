// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetItemRequestType.h"
#import "Trading_NameValueListArrayType.h"

@implementation Trading_GetItemRequestType

@synthesize itemID = _itemID;
@synthesize includeWatchCount = _includeWatchCount;
@synthesize includeCrossPromotion = _includeCrossPromotion;
@synthesize includeItemSpecifics = _includeItemSpecifics;
@synthesize includeTaxTable = _includeTaxTable;
@synthesize sku = _sku;
@synthesize variationSKU = _variationSKU;
@synthesize variationSpecifics = _variationSpecifics;
@synthesize transactionID = _transactionID;
@synthesize includeItemCompatibilityList = _includeItemCompatibilityList;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetItemRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeWatchCount" propertyName:@"includeWatchCount" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeWatchCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeCrossPromotion" propertyName:@"includeCrossPromotion" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeCrossPromotion"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeItemSpecifics" propertyName:@"includeItemSpecifics" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeItemSpecifics"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeTaxTable" propertyName:@"includeTaxTable" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeTaxTable"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SKU" propertyName:@"sku" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sku"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VariationSKU" propertyName:@"variationSKU" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"variationSKU"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VariationSpecifics" propertyName:@"variationSpecifics" type:PICO_TYPE_OBJECT clazz:[Trading_NameValueListArrayType class]];
    [map setObject:ps forKey:@"variationSpecifics"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TransactionID" propertyName:@"transactionID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"transactionID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeItemCompatibilityList" propertyName:@"includeItemCompatibilityList" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeItemCompatibilityList"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.includeWatchCount = nil;
    self.includeCrossPromotion = nil;
    self.includeItemSpecifics = nil;
    self.includeTaxTable = nil;
    self.sku = nil;
    self.variationSKU = nil;
    self.variationSpecifics = nil;
    self.transactionID = nil;
    self.includeItemCompatibilityList = nil;
    [super dealloc];
}

@end