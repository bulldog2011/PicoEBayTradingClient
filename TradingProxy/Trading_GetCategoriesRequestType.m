// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetCategoriesRequestType.h"

@implementation Trading_GetCategoriesRequestType

@synthesize categorySiteID = _categorySiteID;
@synthesize categoryParent = _categoryParent;
@synthesize levelLimit = _levelLimit;
@synthesize viewAllNodes = _viewAllNodes;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetCategoriesRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategorySiteID" propertyName:@"categorySiteID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categorySiteID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CategoryParent" propertyName:@"categoryParent" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryParent"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LevelLimit" propertyName:@"levelLimit" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"levelLimit"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ViewAllNodes" propertyName:@"viewAllNodes" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"viewAllNodes"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categorySiteID = nil;
    self.categoryParent = nil;
    self.levelLimit = nil;
    self.viewAllNodes = nil;
    [super dealloc];
}

@end
