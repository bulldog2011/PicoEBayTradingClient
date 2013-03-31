// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_AbstractRequestType.h"
#import "Trading_BotBlockRequestType.h"
#import "Trading_CustomSecurityHeaderType.h"

@implementation Trading_AbstractRequestType

@synthesize requesterCredentials = _requesterCredentials;
@synthesize detailLevel = _detailLevel;
@synthesize errorLanguage = _errorLanguage;
@synthesize messageID = _messageID;
@synthesize version = _version;
@synthesize endUserIP = _endUserIP;
@synthesize errorHandling = _errorHandling;
@synthesize invocationID = _invocationID;
@synthesize outputSelector = _outputSelector;
@synthesize warningLevel = _warningLevel;
@synthesize botBlock = _botBlock;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RequesterCredentials" propertyName:@"requesterCredentials" type:PICO_TYPE_OBJECT clazz:[Trading_CustomSecurityHeaderType class]];
    [map setObject:ps forKey:@"requesterCredentials"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"DetailLevel" propertyName:@"detailLevel" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"detailLevel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ErrorLanguage" propertyName:@"errorLanguage" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"errorLanguage"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MessageID" propertyName:@"messageID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"messageID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Version" propertyName:@"version" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"version"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndUserIP" propertyName:@"endUserIP" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"endUserIP"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ErrorHandling" propertyName:@"errorHandling" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"errorHandling"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"InvocationID" propertyName:@"invocationID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"invocationID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"OutputSelector" propertyName:@"outputSelector" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"outputSelector"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WarningLevel" propertyName:@"warningLevel" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"warningLevel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BotBlock" propertyName:@"botBlock" type:PICO_TYPE_OBJECT clazz:[Trading_BotBlockRequestType class]];
    [map setObject:ps forKey:@"botBlock"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.requesterCredentials = nil;
    self.detailLevel = nil;
    self.errorLanguage = nil;
    self.messageID = nil;
    self.version = nil;
    self.endUserIP = nil;
    self.errorHandling = nil;
    self.invocationID = nil;
    self.outputSelector = nil;
    self.warningLevel = nil;
    self.botBlock = nil;
    self.any = nil;
    [super dealloc];
}

@end
