// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetClientAlertsAuthTokenResponseType.h"

@implementation Trading_GetClientAlertsAuthTokenResponseType

@synthesize clientAlertsAuthToken = _clientAlertsAuthToken;
@synthesize hardExpirationTime = _hardExpirationTime;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetClientAlertsAuthTokenResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ClientAlertsAuthToken" propertyName:@"clientAlertsAuthToken" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"clientAlertsAuthToken"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"HardExpirationTime" propertyName:@"hardExpirationTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"hardExpirationTime"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.clientAlertsAuthToken = nil;
    self.hardExpirationTime = nil;
    [super dealloc];
}

@end
