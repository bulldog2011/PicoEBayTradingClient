// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_StoreSubscriptionArrayType.h"
#import "Trading_StoreSubscriptionType.h"

@implementation Trading_StoreSubscriptionArrayType

@synthesize subscription = _subscription;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"Subscription" propertyName:@"subscription" type:PICO_TYPE_OBJECT clazz:[Trading_StoreSubscriptionType class]];
    [map setObject:ps forKey:@"subscription"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.subscription = nil;
    [super dealloc];
}

@end
