// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_VeROReportedItemDetailsType.h"
#import "Trading_VeROReportedItemType.h"

@implementation Trading_VeROReportedItemDetailsType

@synthesize reportedItem = _reportedItem;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ReportedItem" propertyName:@"reportedItem" type:PICO_TYPE_OBJECT clazz:[Trading_VeROReportedItemType class]];
    [map setObject:ps forKey:@"reportedItem"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.reportedItem = nil;
    [super dealloc];
}

@end
