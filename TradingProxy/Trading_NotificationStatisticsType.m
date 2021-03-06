// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_NotificationStatisticsType.h"

@implementation Trading_NotificationStatisticsType

@synthesize deliveredCount = _deliveredCount;
@synthesize queuedNewCount = _queuedNewCount;
@synthesize queuedPendingCount = _queuedPendingCount;
@synthesize expiredCount = _expiredCount;
@synthesize errorCount = _errorCount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DeliveredCount" propertyName:@"deliveredCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"deliveredCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QueuedNewCount" propertyName:@"queuedNewCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"queuedNewCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QueuedPendingCount" propertyName:@"queuedPendingCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"queuedPendingCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ExpiredCount" propertyName:@"expiredCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"expiredCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ErrorCount" propertyName:@"errorCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"errorCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.deliveredCount = nil;
    self.queuedNewCount = nil;
    self.queuedPendingCount = nil;
    self.expiredCount = nil;
    self.errorCount = nil;
    self.any = nil;
    [super dealloc];
}

@end
