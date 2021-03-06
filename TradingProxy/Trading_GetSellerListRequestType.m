// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetSellerListRequestType.h"
#import "Trading_UserIDArrayType.h"
#import "Trading_SKUArrayType.h"
#import "Trading_PaginationType.h"

@implementation Trading_GetSellerListRequestType

@synthesize userID = _userID;
@synthesize motorsDealerUsers = _motorsDealerUsers;
@synthesize endTimeFrom = _endTimeFrom;
@synthesize endTimeTo = _endTimeTo;
@synthesize sort = _sort;
@synthesize startTimeFrom = _startTimeFrom;
@synthesize startTimeTo = _startTimeTo;
@synthesize pagination = _pagination;
@synthesize granularityLevel = _granularityLevel;
@synthesize skuArray = _skuArray;
@synthesize includeWatchCount = _includeWatchCount;
@synthesize adminEndedItemsOnly = _adminEndedItemsOnly;
@synthesize categoryID = _categoryID;
@synthesize includeVariations = _includeVariations;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetSellerListRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UserID" propertyName:@"userID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"userID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MotorsDealerUsers" propertyName:@"motorsDealerUsers" type:PICO_TYPE_OBJECT clazz:[Trading_UserIDArrayType class]];
    [map setObject:ps forKey:@"motorsDealerUsers"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndTimeFrom" propertyName:@"endTimeFrom" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"endTimeFrom"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndTimeTo" propertyName:@"endTimeTo" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"endTimeTo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Sort" propertyName:@"sort" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"sort"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartTimeFrom" propertyName:@"startTimeFrom" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"startTimeFrom"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartTimeTo" propertyName:@"startTimeTo" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"startTimeTo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Pagination" propertyName:@"pagination" type:PICO_TYPE_OBJECT clazz:[Trading_PaginationType class]];
    [map setObject:ps forKey:@"pagination"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"GranularityLevel" propertyName:@"granularityLevel" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"granularityLevel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SKUArray" propertyName:@"skuArray" type:PICO_TYPE_OBJECT clazz:[Trading_SKUArrayType class]];
    [map setObject:ps forKey:@"skuArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeWatchCount" propertyName:@"includeWatchCount" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeWatchCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AdminEndedItemsOnly" propertyName:@"adminEndedItemsOnly" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"adminEndedItemsOnly"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeVariations" propertyName:@"includeVariations" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeVariations"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.userID = nil;
    self.motorsDealerUsers = nil;
    self.endTimeFrom = nil;
    self.endTimeTo = nil;
    self.sort = nil;
    self.startTimeFrom = nil;
    self.startTimeTo = nil;
    self.pagination = nil;
    self.granularityLevel = nil;
    self.skuArray = nil;
    self.includeWatchCount = nil;
    self.adminEndedItemsOnly = nil;
    self.categoryID = nil;
    self.includeVariations = nil;
    [super dealloc];
}

@end
