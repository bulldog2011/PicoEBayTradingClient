// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ProductSearchResultType.h"
#import "Trading_ResponseAttributeSetType.h"

@implementation Trading_ProductSearchResultType

@synthesize id = _id;
@synthesize numProducts = _numProducts;
@synthesize attributeSet = _attributeSet;
@synthesize displayStockPhotos = _displayStockPhotos;
@synthesize any = _any;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ID" propertyName:@"id" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"id"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NumProducts" propertyName:@"numProducts" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"numProducts"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"AttributeSet" propertyName:@"attributeSet" type:PICO_TYPE_OBJECT clazz:[Trading_ResponseAttributeSetType class]];
    [map setObject:ps forKey:@"attributeSet"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayStockPhotos" propertyName:@"displayStockPhotos" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"displayStockPhotos"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.id = nil;
    self.numProducts = nil;
    self.attributeSet = nil;
    self.displayStockPhotos = nil;
    self.any = nil;
    [super dealloc];
}

@end
