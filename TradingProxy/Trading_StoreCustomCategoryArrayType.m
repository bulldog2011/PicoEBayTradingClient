// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_StoreCustomCategoryArrayType.h"
#import "Trading_StoreCustomCategoryType.h"

@implementation Trading_StoreCustomCategoryArrayType

@synthesize customCategory = _customCategory;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CustomCategory" propertyName:@"customCategory" type:PICO_TYPE_OBJECT clazz:[Trading_StoreCustomCategoryType class]];
    [map setObject:ps forKey:@"customCategory"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.customCategory = nil;
    [super dealloc];
}

@end
