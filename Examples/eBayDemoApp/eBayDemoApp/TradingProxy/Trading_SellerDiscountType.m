// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellerDiscountType.h"
#import "Trading_AmountType.h"

@implementation Trading_SellerDiscountType

@synthesize campaignID = _campaignID;
@synthesize campaignDisplayName = _campaignDisplayName;
@synthesize itemDiscountAmount = _itemDiscountAmount;
@synthesize shippingDiscountAmount = _shippingDiscountAmount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CampaignID" propertyName:@"campaignID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"campaignID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CampaignDisplayName" propertyName:@"campaignDisplayName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"campaignDisplayName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemDiscountAmount" propertyName:@"itemDiscountAmount" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"itemDiscountAmount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShippingDiscountAmount" propertyName:@"shippingDiscountAmount" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"shippingDiscountAmount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.campaignID = nil;
    self.campaignDisplayName = nil;
    self.itemDiscountAmount = nil;
    self.shippingDiscountAmount = nil;
    self.any = nil;
    [super dealloc];
}

@end