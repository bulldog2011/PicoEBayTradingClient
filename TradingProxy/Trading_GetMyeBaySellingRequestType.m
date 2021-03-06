// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetMyeBaySellingRequestType.h"
#import "Trading_ItemListCustomizationType.h"

@implementation Trading_GetMyeBaySellingRequestType

@synthesize scheduledList = _scheduledList;
@synthesize activeList = _activeList;
@synthesize soldList = _soldList;
@synthesize unsoldList = _unsoldList;
@synthesize bidList = _bidList;
@synthesize deletedFromSoldList = _deletedFromSoldList;
@synthesize deletedFromUnsoldList = _deletedFromUnsoldList;
@synthesize sellingSummary = _sellingSummary;
@synthesize hideVariations = _hideVariations;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetMyeBaySellingRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ScheduledList" propertyName:@"scheduledList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"scheduledList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ActiveList" propertyName:@"activeList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"activeList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SoldList" propertyName:@"soldList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"soldList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UnsoldList" propertyName:@"unsoldList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"unsoldList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BidList" propertyName:@"bidList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"bidList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DeletedFromSoldList" propertyName:@"deletedFromSoldList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"deletedFromSoldList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DeletedFromUnsoldList" propertyName:@"deletedFromUnsoldList" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"deletedFromUnsoldList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingSummary" propertyName:@"sellingSummary" type:PICO_TYPE_OBJECT clazz:[Trading_ItemListCustomizationType class]];
    [map setObject:ps forKey:@"sellingSummary"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"HideVariations" propertyName:@"hideVariations" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"hideVariations"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.scheduledList = nil;
    self.activeList = nil;
    self.soldList = nil;
    self.unsoldList = nil;
    self.bidList = nil;
    self.deletedFromSoldList = nil;
    self.deletedFromUnsoldList = nil;
    self.sellingSummary = nil;
    self.hideVariations = nil;
    [super dealloc];
}

@end
