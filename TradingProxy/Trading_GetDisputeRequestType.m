// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetDisputeRequestType.h"

@implementation Trading_GetDisputeRequestType

@synthesize disputeID = _disputeID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetDisputeRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisputeID" propertyName:@"disputeID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"disputeID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.disputeID = nil;
    [super dealloc];
}

@end
