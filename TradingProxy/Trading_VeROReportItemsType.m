// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_VeROReportItemsType.h"
#import "Trading_VeROReportItemType.h"

@implementation Trading_VeROReportItemsType

@synthesize reportItem = _reportItem;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"ReportItem" propertyName:@"reportItem" type:PICO_TYPE_OBJECT clazz:[Trading_VeROReportItemType class]];
    [map setObject:ps forKey:@"reportItem"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.reportItem = nil;
    [super dealloc];
}

@end