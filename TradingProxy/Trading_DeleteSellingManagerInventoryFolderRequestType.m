// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_DeleteSellingManagerInventoryFolderRequestType.h"

@implementation Trading_DeleteSellingManagerInventoryFolderRequestType

@synthesize folderID = _folderID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"DeleteSellingManagerInventoryFolderRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FolderID" propertyName:@"folderID" type:PICO_TYPE_LONG clazz:nil];
    [map setObject:ps forKey:@"folderID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.folderID = nil;
    [super dealloc];
}

@end
