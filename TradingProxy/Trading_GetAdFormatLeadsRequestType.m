// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetAdFormatLeadsRequestType.h"

@implementation Trading_GetAdFormatLeadsRequestType

@synthesize itemID = _itemID;
@synthesize status = _status;
@synthesize includeMemberMessages = _includeMemberMessages;
@synthesize startCreationTime = _startCreationTime;
@synthesize endCreationTime = _endCreationTime;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetAdFormatLeadsRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Status" propertyName:@"status" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"status"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeMemberMessages" propertyName:@"includeMemberMessages" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeMemberMessages"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartCreationTime" propertyName:@"startCreationTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"startCreationTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndCreationTime" propertyName:@"endCreationTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"endCreationTime"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.status = nil;
    self.includeMemberMessages = nil;
    self.startCreationTime = nil;
    self.endCreationTime = nil;
    [super dealloc];
}

@end
