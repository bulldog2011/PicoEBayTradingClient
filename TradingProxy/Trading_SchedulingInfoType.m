// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SchedulingInfoType.h"

@implementation Trading_SchedulingInfoType

@synthesize maxScheduledMinutes = _maxScheduledMinutes;
@synthesize minScheduledMinutes = _minScheduledMinutes;
@synthesize maxScheduledItems = _maxScheduledItems;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MaxScheduledMinutes" propertyName:@"maxScheduledMinutes" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"maxScheduledMinutes"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MinScheduledMinutes" propertyName:@"minScheduledMinutes" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"minScheduledMinutes"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MaxScheduledItems" propertyName:@"maxScheduledItems" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"maxScheduledItems"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.maxScheduledMinutes = nil;
    self.minScheduledMinutes = nil;
    self.maxScheduledItems = nil;
    self.any = nil;
    [super dealloc];
}

@end
