// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetSessionIDRequestType.h"

@implementation Trading_GetSessionIDRequestType

@synthesize ruName = _ruName;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetSessionIDRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RuName" propertyName:@"ruName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"ruName"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.ruName = nil;
    [super dealloc];
}

@end
