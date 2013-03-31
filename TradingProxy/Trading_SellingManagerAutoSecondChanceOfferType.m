// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellingManagerAutoSecondChanceOfferType.h"
#import "Trading_AmountType.h"

@implementation Trading_SellingManagerAutoSecondChanceOfferType

@synthesize secondChanceOfferCondition = _secondChanceOfferCondition;
@synthesize amount = _amount;
@synthesize profitPercent = _profitPercent;
@synthesize duration = _duration;
@synthesize listingHoldInventoryLevel = _listingHoldInventoryLevel;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SecondChanceOfferCondition" propertyName:@"secondChanceOfferCondition" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"secondChanceOfferCondition"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Amount" propertyName:@"amount" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"amount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ProfitPercent" propertyName:@"profitPercent" type:PICO_TYPE_FLOAT clazz:nil];
    [map setObject:ps forKey:@"profitPercent"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Duration" propertyName:@"duration" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"duration"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ListingHoldInventoryLevel" propertyName:@"listingHoldInventoryLevel" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"listingHoldInventoryLevel"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.secondChanceOfferCondition = nil;
    self.amount = nil;
    self.profitPercent = nil;
    self.duration = nil;
    self.listingHoldInventoryLevel = nil;
    self.any = nil;
    [super dealloc];
}

@end
