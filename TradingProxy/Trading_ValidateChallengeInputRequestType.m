// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ValidateChallengeInputRequestType.h"

@implementation Trading_ValidateChallengeInputRequestType

@synthesize challengeToken = _challengeToken;
@synthesize userInput = _userInput;
@synthesize keepTokenValid = _keepTokenValid;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"ValidateChallengeInputRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ChallengeToken" propertyName:@"challengeToken" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"challengeToken"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UserInput" propertyName:@"userInput" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"userInput"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"KeepTokenValid" propertyName:@"keepTokenValid" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"keepTokenValid"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.challengeToken = nil;
    self.userInput = nil;
    self.keepTokenValid = nil;
    [super dealloc];
}

@end
