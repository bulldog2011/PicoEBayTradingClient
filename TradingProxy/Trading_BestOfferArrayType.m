// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_BestOfferArrayType.h"
#import "Trading_BestOfferType.h"

@implementation Trading_BestOfferArrayType

@synthesize bestOffer = _bestOffer;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"BestOffer" propertyName:@"bestOffer" type:PICO_TYPE_OBJECT clazz:[Trading_BestOfferType class]];
    [map setObject:ps forKey:@"bestOffer"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.bestOffer = nil;
    [super dealloc];
}

@end