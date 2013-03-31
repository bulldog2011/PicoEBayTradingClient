// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetSellingManagerEmailLogRequestType.h"
#import "Trading_TimeRangeType.h"

@implementation Trading_GetSellingManagerEmailLogRequestType

@synthesize itemID = _itemID;
@synthesize transactionID = _transactionID;
@synthesize orderID = _orderID;
@synthesize emailDateRange = _emailDateRange;
@synthesize orderLineItemID = _orderLineItemID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetSellingManagerEmailLogRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TransactionID" propertyName:@"transactionID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"transactionID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderID" propertyName:@"orderID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"orderID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EmailDateRange" propertyName:@"emailDateRange" type:PICO_TYPE_OBJECT clazz:[Trading_TimeRangeType class]];
    [map setObject:ps forKey:@"emailDateRange"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderLineItemID" propertyName:@"orderLineItemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"orderLineItemID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.transactionID = nil;
    self.orderID = nil;
    self.emailDateRange = nil;
    self.orderLineItemID = nil;
    [super dealloc];
}

@end
