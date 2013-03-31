// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_BidderDetailType.h"

@implementation Trading_BidderDetailType

@synthesize userID = _userID;
@synthesize email = _email;
@synthesize feedbackScore = _feedbackScore;
@synthesize uniqueNegativeFeedbackCount = _uniqueNegativeFeedbackCount;
@synthesize uniquePositiveFeedbackCount = _uniquePositiveFeedbackCount;
@synthesize uniqueNeutralFeedbackCount = _uniqueNeutralFeedbackCount;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UserID" propertyName:@"userID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"userID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Email" propertyName:@"email" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"email"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FeedbackScore" propertyName:@"feedbackScore" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"feedbackScore"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UniqueNegativeFeedbackCount" propertyName:@"uniqueNegativeFeedbackCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"uniqueNegativeFeedbackCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UniquePositiveFeedbackCount" propertyName:@"uniquePositiveFeedbackCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"uniquePositiveFeedbackCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"UniqueNeutralFeedbackCount" propertyName:@"uniqueNeutralFeedbackCount" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"uniqueNeutralFeedbackCount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.userID = nil;
    self.email = nil;
    self.feedbackScore = nil;
    self.uniqueNegativeFeedbackCount = nil;
    self.uniquePositiveFeedbackCount = nil;
    self.uniqueNeutralFeedbackCount = nil;
    self.any = nil;
    [super dealloc];
}

@end
