// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SetStoreCategoriesResponseType.h"
#import "Trading_StoreCustomCategoryArrayType.h"

@implementation Trading_SetStoreCategoriesResponseType

@synthesize taskID = _taskID;
@synthesize status = _status;
@synthesize customCategory = _customCategory;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SetStoreCategoriesResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TaskID" propertyName:@"taskID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"taskID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Status" propertyName:@"status" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"status"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CustomCategory" propertyName:@"customCategory" type:PICO_TYPE_OBJECT clazz:[Trading_StoreCustomCategoryArrayType class]];
    [map setObject:ps forKey:@"customCategory"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.taskID = nil;
    self.status = nil;
    self.customCategory = nil;
    [super dealloc];
}

@end
