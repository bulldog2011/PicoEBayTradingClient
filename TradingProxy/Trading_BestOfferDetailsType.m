// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_BestOfferDetailsType.h"
#import "Trading_AmountType.h"

@implementation Trading_BestOfferDetailsType

@synthesize bestOfferCount = _bestOfferCount;
@synthesize bestOfferEnabled = _bestOfferEnabled;
@synthesize bestOffer = _bestOffer;
@synthesize bestOfferStatus = _bestOfferStatus;
@synthesize bestOfferType = _bestOfferType;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BestOfferCount" propertyName:@"bestOfferCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"bestOfferCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BestOfferEnabled" propertyName:@"bestOfferEnabled" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"bestOfferEnabled"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BestOffer" propertyName:@"bestOffer" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"bestOffer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BestOfferStatus" propertyName:@"bestOfferStatus" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"bestOfferStatus"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BestOfferType" propertyName:@"bestOfferType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"bestOfferType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.bestOfferCount = nil;
    self.bestOfferEnabled = nil;
    self.bestOffer = nil;
    self.bestOfferStatus = nil;
    self.bestOfferType = nil;
    self.any = nil;
    [super dealloc];
}

@end