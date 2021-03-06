// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetCategorySpecificsRequestType.h"
#import "Trading_CategoryItemSpecificsType.h"

@implementation Trading_GetCategorySpecificsRequestType

@synthesize categoryID = _categoryID;
@synthesize lastUpdateTime = _lastUpdateTime;
@synthesize maxNames = _maxNames;
@synthesize maxValuesPerName = _maxValuesPerName;
@synthesize name = _name;
@synthesize categorySpecific = _categorySpecific;
@synthesize excludeRelationships = _excludeRelationships;
@synthesize includeConfidence = _includeConfidence;
@synthesize categorySpecificsFileInfo = _categorySpecificsFileInfo;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetCategorySpecificsRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LastUpdateTime" propertyName:@"lastUpdateTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"lastUpdateTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MaxNames" propertyName:@"maxNames" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"maxNames"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MaxValuesPerName" propertyName:@"maxValuesPerName" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"maxValuesPerName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Name" propertyName:@"name" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"name"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CategorySpecific" propertyName:@"categorySpecific" type:PICO_TYPE_OBJECT clazz:[Trading_CategoryItemSpecificsType class]];
    [map setObject:ps forKey:@"categorySpecific"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ExcludeRelationships" propertyName:@"excludeRelationships" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"excludeRelationships"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeConfidence" propertyName:@"includeConfidence" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeConfidence"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategorySpecificsFileInfo" propertyName:@"categorySpecificsFileInfo" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"categorySpecificsFileInfo"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categoryID = nil;
    self.lastUpdateTime = nil;
    self.maxNames = nil;
    self.maxValuesPerName = nil;
    self.name = nil;
    self.categorySpecific = nil;
    self.excludeRelationships = nil;
    self.includeConfidence = nil;
    self.categorySpecificsFileInfo = nil;
    [super dealloc];
}

@end
