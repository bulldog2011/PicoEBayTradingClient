// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_PictureManagerPictureDisplayType.h"

@implementation Trading_PictureManagerPictureDisplayType

@synthesize displayType = _displayType;
@synthesize url = _url;
@synthesize size = _size;
@synthesize height = _height;
@synthesize width = _width;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayType" propertyName:@"displayType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"displayType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"URL" propertyName:@"url" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"url"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Size" propertyName:@"size" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"size"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Height" propertyName:@"height" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"height"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Width" propertyName:@"width" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"width"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.displayType = nil;
    self.url = nil;
    self.size = nil;
    self.height = nil;
    self.width = nil;
    self.any = nil;
    [super dealloc];
}

@end
