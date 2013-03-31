// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetChallengeTokenResponseType.h"

@implementation Trading_GetChallengeTokenResponseType

@synthesize challengeToken = _challengeToken;
@synthesize imageChallengeURL = _imageChallengeURL;
@synthesize audioChallengeURL = _audioChallengeURL;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetChallengeTokenResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ImageChallengeURL" propertyName:@"imageChallengeURL" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"imageChallengeURL"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AudioChallengeURL" propertyName:@"audioChallengeURL" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"audioChallengeURL"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.challengeToken = nil;
    self.imageChallengeURL = nil;
    self.audioChallengeURL = nil;
    [super dealloc];
}

@end
