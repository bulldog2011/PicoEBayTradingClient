// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_FeedbackRequirementsType.h"

@implementation Trading_FeedbackRequirementsType

@synthesize value = _value;
@synthesize minimum = _minimum;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_VALUE xmlName:nil propertyName:@"value" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"value"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ATTRIBUTE xmlName:@"minimum" propertyName:@"minimum" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"minimum"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.value = nil;
    self.minimum = nil;
    [super dealloc];
}

@end