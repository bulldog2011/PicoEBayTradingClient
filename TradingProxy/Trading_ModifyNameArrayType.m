// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ModifyNameArrayType.h"
#import "Trading_ModifyNameType.h"

@implementation Trading_ModifyNameArrayType

@synthesize modifyName = _modifyName;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ModifyName" propertyName:@"modifyName" type:PICO_TYPE_OBJECT clazz:[Trading_ModifyNameType class]];
    [map setObject:ps forKey:@"modifyName"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.modifyName = nil;
    [super dealloc];
}

@end
