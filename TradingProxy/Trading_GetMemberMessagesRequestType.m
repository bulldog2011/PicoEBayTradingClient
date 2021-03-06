// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetMemberMessagesRequestType.h"
#import "Trading_PaginationType.h"

@implementation Trading_GetMemberMessagesRequestType

@synthesize itemID = _itemID;
@synthesize mailMessageType = _mailMessageType;
@synthesize messageStatus = _messageStatus;
@synthesize displayToPublic = _displayToPublic;
@synthesize startCreationTime = _startCreationTime;
@synthesize endCreationTime = _endCreationTime;
@synthesize pagination = _pagination;
@synthesize memberMessageID = _memberMessageID;
@synthesize senderID = _senderID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetMemberMessagesRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ItemID" propertyName:@"itemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"itemID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MailMessageType" propertyName:@"mailMessageType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"mailMessageType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MessageStatus" propertyName:@"messageStatus" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"messageStatus"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayToPublic" propertyName:@"displayToPublic" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"displayToPublic"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"StartCreationTime" propertyName:@"startCreationTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"startCreationTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EndCreationTime" propertyName:@"endCreationTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"endCreationTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Pagination" propertyName:@"pagination" type:PICO_TYPE_OBJECT clazz:[Trading_PaginationType class]];
    [map setObject:ps forKey:@"pagination"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MemberMessageID" propertyName:@"memberMessageID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"memberMessageID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SenderID" propertyName:@"senderID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"senderID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.mailMessageType = nil;
    self.messageStatus = nil;
    self.displayToPublic = nil;
    self.startCreationTime = nil;
    self.endCreationTime = nil;
    self.pagination = nil;
    self.memberMessageID = nil;
    self.senderID = nil;
    [super dealloc];
}

@end
