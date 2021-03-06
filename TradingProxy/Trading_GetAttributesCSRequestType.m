// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetAttributesCSRequestType.h"

@implementation Trading_GetAttributesCSRequestType

@synthesize attributeSystemVersion = _attributeSystemVersion;
@synthesize attributeSetID = _attributeSetID;
@synthesize includeCategoryMappingDetails = _includeCategoryMappingDetails;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetAttributesCSRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"AttributeSystemVersion" propertyName:@"attributeSystemVersion" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"attributeSystemVersion"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"AttributeSetID" propertyName:@"attributeSetID" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"attributeSetID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"IncludeCategoryMappingDetails" propertyName:@"includeCategoryMappingDetails" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"includeCategoryMappingDetails"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.attributeSystemVersion = nil;
    self.attributeSetID = nil;
    self.includeCategoryMappingDetails = nil;
    [super dealloc];
}

@end
