// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SetPromotionalSaleListingsResponseType.h"

@implementation Trading_SetPromotionalSaleListingsResponseType

@synthesize status = _status;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SetPromotionalSaleListingsResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Status" propertyName:@"status" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"status"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.status = nil;
    [super dealloc];
}

@end