// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_SellingManagerVendorDetailsType.h"

@implementation Trading_SellingManagerVendorDetailsType

@synthesize vendorName = _vendorName;
@synthesize vendorContactInfo = _vendorContactInfo;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VendorName" propertyName:@"vendorName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"vendorName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"VendorContactInfo" propertyName:@"vendorContactInfo" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"vendorContactInfo"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.vendorName = nil;
    self.vendorContactInfo = nil;
    self.any = nil;
    [super dealloc];
}

@end