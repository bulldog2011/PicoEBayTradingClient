// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_ListingDurationDefinitionsType.h"
#import "Trading_ListingDurationDefinitionType.h"

@implementation Trading_ListingDurationDefinitionsType

@synthesize listingDuration = _listingDuration;
@synthesize version = _version;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ListingDuration" propertyName:@"listingDuration" type:PICO_TYPE_OBJECT clazz:[Trading_ListingDurationDefinitionType class]];
    [map setObject:ps forKey:@"listingDuration"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ATTRIBUTE xmlName:@"Version" propertyName:@"version" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"version"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.listingDuration = nil;
    self.version = nil;
    [super dealloc];
}

@end
