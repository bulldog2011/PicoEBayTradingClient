// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetSellingManagerSaleRecordResponseType.h"
#import "Trading_SellingManagerSoldOrderType.h"

@implementation Trading_GetSellingManagerSaleRecordResponseType

@synthesize sellingManagerSoldOrder = _sellingManagerSoldOrder;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetSellingManagerSaleRecordResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellingManagerSoldOrder" propertyName:@"sellingManagerSoldOrder" type:PICO_TYPE_OBJECT clazz:[Trading_SellingManagerSoldOrderType class]];
    [map setObject:ps forKey:@"sellingManagerSoldOrder"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.sellingManagerSoldOrder = nil;
    [super dealloc];
}

@end
