// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_LeaveFeedbackRequestType.h"
#import "Trading_ItemRatingDetailArrayType.h"

@implementation Trading_LeaveFeedbackRequestType

@synthesize itemID = _itemID;
@synthesize commentText = _commentText;
@synthesize commentType = _commentType;
@synthesize transactionID = _transactionID;
@synthesize targetUser = _targetUser;
@synthesize sellerItemRatingDetailArray = _sellerItemRatingDetailArray;
@synthesize orderLineItemID = _orderLineItemID;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"LeaveFeedbackRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentText" propertyName:@"commentText" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"commentText"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CommentType" propertyName:@"commentType" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"commentType"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TransactionID" propertyName:@"transactionID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"transactionID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TargetUser" propertyName:@"targetUser" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"targetUser"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerItemRatingDetailArray" propertyName:@"sellerItemRatingDetailArray" type:PICO_TYPE_OBJECT clazz:[Trading_ItemRatingDetailArrayType class]];
    [map setObject:ps forKey:@"sellerItemRatingDetailArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"OrderLineItemID" propertyName:@"orderLineItemID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"orderLineItemID"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.itemID = nil;
    self.commentText = nil;
    self.commentType = nil;
    self.transactionID = nil;
    self.targetUser = nil;
    self.sellerItemRatingDetailArray = nil;
    self.orderLineItemID = nil;
    [super dealloc];
}

@end
