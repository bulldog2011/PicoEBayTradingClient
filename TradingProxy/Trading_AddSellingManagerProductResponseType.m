// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_AddSellingManagerProductResponseType.h"
#import "Trading_SellingManagerProductDetailsType.h"

@implementation Trading_AddSellingManagerProductResponseType

@synthesize sellingManagerProductDetails = _sellingManagerProductDetails;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"AddSellingManagerProductResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingManagerProductDetails" propertyName:@"sellingManagerProductDetails" type:PICO_TYPE_OBJECT clazz:[Trading_SellingManagerProductDetailsType class]];
    [map setObject:ps forKey:@"sellingManagerProductDetails"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.sellingManagerProductDetails = nil;
    [super dealloc];
}

@end