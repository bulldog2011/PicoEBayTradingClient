// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_PromotionalSaleArrayType.h"
#import "Trading_PromotionalSaleType.h"

@implementation Trading_PromotionalSaleArrayType

@synthesize promotionalSale = _promotionalSale;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"PromotionalSale" propertyName:@"promotionalSale" type:PICO_TYPE_OBJECT clazz:[Trading_PromotionalSaleType class]];
    [map setObject:ps forKey:@"promotionalSale"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.promotionalSale = nil;
    [super dealloc];
}

@end