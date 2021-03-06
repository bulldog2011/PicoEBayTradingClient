// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_VATRateType.h"

@implementation Trading_VATRateType

@synthesize itemID = _itemID;
@synthesize transactionID = _transactionID;
@synthesize vatPercent = _vatPercent;
@synthesize orderLineItemID = _orderLineItemID;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TransactionID" propertyName:@"transactionID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"transactionID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VATPercent" propertyName:@"vatPercent" type:PICO_TYPE_FLOAT clazz:nil];
    [map setObject:ps forKey:@"vatPercent"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderLineItemID" propertyName:@"orderLineItemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"orderLineItemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.transactionID = nil;
    self.vatPercent = nil;
    self.orderLineItemID = nil;
    self.any = nil;
    [super dealloc];
}

@end
