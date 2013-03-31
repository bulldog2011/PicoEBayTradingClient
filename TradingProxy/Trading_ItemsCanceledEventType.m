// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ItemsCanceledEventType.h"
#import "Trading_ItemIDArrayType.h"

@implementation Trading_ItemsCanceledEventType

@synthesize canceledItemIDArray = _canceledItemIDArray;
@synthesize eligibleForRelist = _eligibleForRelist;
@synthesize sellerID = _sellerID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"ItemsCanceledEvent" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CanceledItemIDArray" propertyName:@"canceledItemIDArray" type:PICO_TYPE_OBJECT clazz:[Trading_ItemIDArrayType class]];
    [map setObject:ps forKey:@"canceledItemIDArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EligibleForRelist" propertyName:@"eligibleForRelist" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"eligibleForRelist"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerID" propertyName:@"sellerID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.canceledItemIDArray = nil;
    self.eligibleForRelist = nil;
    self.sellerID = nil;
    [super dealloc];
}

@end
