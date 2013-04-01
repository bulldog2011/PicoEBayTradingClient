// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_RefundType.h"
#import "Trading_RefundFundingSourceArrayType.h"
#import "Trading_RefundTransactionArrayType.h"
#import "Trading_RefundFailureReasonType.h"
#import "Trading_AmountType.h"

@implementation Trading_RefundType

@synthesize refundFromSeller = _refundFromSeller;
@synthesize totalRefundToBuyer = _totalRefundToBuyer;
@synthesize refundTime = _refundTime;
@synthesize refundID = _refundID;
@synthesize refundTransactionArray = _refundTransactionArray;
@synthesize refundAmount = _refundAmount;
@synthesize refundStatus = _refundStatus;
@synthesize refundFailureReason = _refundFailureReason;
@synthesize refundFundingSourceArray = _refundFundingSourceArray;
@synthesize externalReferenceID = _externalReferenceID;
@synthesize refundRequestedTime = _refundRequestedTime;
@synthesize refundCompletionTime = _refundCompletionTime;
@synthesize estimatedRefundCompletionTime = _estimatedRefundCompletionTime;
@synthesize sellerNoteToBuyer = _sellerNoteToBuyer;
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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundFromSeller" propertyName:@"refundFromSeller" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"refundFromSeller"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"TotalRefundToBuyer" propertyName:@"totalRefundToBuyer" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"totalRefundToBuyer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundTime" propertyName:@"refundTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"refundTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundID" propertyName:@"refundID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"refundID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundTransactionArray" propertyName:@"refundTransactionArray" type:PICO_TYPE_OBJECT clazz:[Trading_RefundTransactionArrayType class]];
    [map setObject:ps forKey:@"refundTransactionArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundAmount" propertyName:@"refundAmount" type:PICO_TYPE_OBJECT clazz:[Trading_AmountType class]];
    [map setObject:ps forKey:@"refundAmount"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundStatus" propertyName:@"refundStatus" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"refundStatus"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundFailureReason" propertyName:@"refundFailureReason" type:PICO_TYPE_OBJECT clazz:[Trading_RefundFailureReasonType class]];
    [map setObject:ps forKey:@"refundFailureReason"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundFundingSourceArray" propertyName:@"refundFundingSourceArray" type:PICO_TYPE_OBJECT clazz:[Trading_RefundFundingSourceArrayType class]];
    [map setObject:ps forKey:@"refundFundingSourceArray"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ExternalReferenceID" propertyName:@"externalReferenceID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"externalReferenceID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundRequestedTime" propertyName:@"refundRequestedTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"refundRequestedTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"RefundCompletionTime" propertyName:@"refundCompletionTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"refundCompletionTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EstimatedRefundCompletionTime" propertyName:@"estimatedRefundCompletionTime" type:PICO_TYPE_DATE clazz:nil];
    [map setObject:ps forKey:@"estimatedRefundCompletionTime"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SellerNoteToBuyer" propertyName:@"sellerNoteToBuyer" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"sellerNoteToBuyer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.refundFromSeller = nil;
    self.totalRefundToBuyer = nil;
    self.refundTime = nil;
    self.refundID = nil;
    self.refundTransactionArray = nil;
    self.refundAmount = nil;
    self.refundStatus = nil;
    self.refundFailureReason = nil;
    self.refundFundingSourceArray = nil;
    self.externalReferenceID = nil;
    self.refundRequestedTime = nil;
    self.refundCompletionTime = nil;
    self.estimatedRefundCompletionTime = nil;
    self.sellerNoteToBuyer = nil;
    self.any = nil;
    [super dealloc];
}

@end