// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetMessagePreferencesRequestType.h"

@implementation Trading_GetMessagePreferencesRequestType

@synthesize sellerID = _sellerID;
@synthesize includeASQPreferences = _includeASQPreferences;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetMessagePreferencesRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerID" propertyName:@"sellerID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeASQPreferences" propertyName:@"includeASQPreferences" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeASQPreferences"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.sellerID = nil;
    self.includeASQPreferences = nil;
    [super dealloc];
}

@end
