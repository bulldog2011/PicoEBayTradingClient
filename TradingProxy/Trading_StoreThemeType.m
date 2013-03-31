// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_StoreThemeType.h"
#import "Trading_StoreColorSchemeType.h"

@implementation Trading_StoreThemeType

@synthesize themeID = _themeID;
@synthesize name = _name;
@synthesize colorScheme = _colorScheme;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ThemeID" propertyName:@"themeID" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"themeID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Name" propertyName:@"name" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"name"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ColorScheme" propertyName:@"colorScheme" type:PICO_TYPE_OBJECT clazz:[Trading_StoreColorSchemeType class]];
    [map setObject:ps forKey:@"colorScheme"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.themeID = nil;
    self.name = nil;
    self.colorScheme = nil;
    self.any = nil;
    [super dealloc];
}

@end
