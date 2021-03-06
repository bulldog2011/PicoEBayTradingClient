// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_RespondToBestOfferRequestType.h"
#import "Trading_AmountType.h"

@implementation Trading_RespondToBestOfferRequestType

@synthesize itemID = _itemID;
@synthesize bestOfferID = _bestOfferID;
@synthesize action = _action;
@synthesize sellerResponse = _sellerResponse;
@synthesize counterOfferPrice = _counterOfferPrice;
@synthesize counterOfferQuantity = _counterOfferQuantity;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"RespondToBestOfferRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"BestOfferID" propertyName:@"bestOfferID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"bestOfferID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Action" propertyName:@"action" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"action"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerResponse" propertyName:@"sellerResponse" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerResponse"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CounterOfferPrice" propertyName:@"counterOfferPrice" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"counterOfferPrice"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CounterOfferQuantity" propertyName:@"counterOfferQuantity" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"counterOfferQuantity"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.bestOfferID = nil;
    self.action = nil;
    self.sellerResponse = nil;
    self.counterOfferPrice = nil;
    self.counterOfferQuantity = nil;
    [super dealloc];
}

@end
