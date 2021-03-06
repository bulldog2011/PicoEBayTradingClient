// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ProductSearchPageType.h"
#import "Trading_CharacteristicsSetType.h"
#import "Trading_DataElementSetType.h"
#import "Trading_CharacteristicType.h"

@implementation Trading_ProductSearchPageType

@synthesize searchCharacteristicsSet = _searchCharacteristicsSet;
@synthesize searchType = _searchType;
@synthesize sortCharacteristics = _sortCharacteristics;
@synthesize dataElementSet = _dataElementSet;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SearchCharacteristicsSet" propertyName:@"searchCharacteristicsSet" type:PICO_TYPE_OBJECT clazz:[Trading_CharacteristicsSetType class]];
    [map setObject:ps forKey:@"searchCharacteristicsSet"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SearchType" propertyName:@"searchType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"searchType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"SortCharacteristics" propertyName:@"sortCharacteristics" type:PICO_TYPE_OBJECT clazz:[Trading_CharacteristicType class]];
    [map setObject:ps forKey:@"sortCharacteristics"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"DataElementSet" propertyName:@"dataElementSet" type:PICO_TYPE_OBJECT clazz:[Trading_DataElementSetType class]];
    [map setObject:ps forKey:@"dataElementSet"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.searchCharacteristicsSet = nil;
    self.searchType = nil;
    self.sortCharacteristics = nil;
    self.dataElementSet = nil;
    self.any = nil;
    [super dealloc];
}

@end
