// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetProductFinderXSLResponseType.h"
#import "Trading_XSLFileType.h"

@implementation Trading_GetProductFinderXSLResponseType

@synthesize xslFile = _xslFile;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetProductFinderXSLResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"XSLFile" propertyName:@"xslFile" type:PICO_TYPE_OBJECT clazz:[Trading_XSLFileType class]];
    [map setObject:ps forKey:@"xslFile"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.xslFile = nil;
    [super dealloc];
}

@end
