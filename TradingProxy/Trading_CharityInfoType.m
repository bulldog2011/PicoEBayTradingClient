// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_CharityInfoType.h"
#import "Trading_NonProfitSocialAddressType.h"
#import "Trading_NonProfitAddressType.h"

@implementation Trading_CharityInfoType

@synthesize name = _name;
@synthesize mission = _mission;
@synthesize logoURL = _logoURL;
@synthesize status = _status;
@synthesize searchableString = _searchableString;
@synthesize charityRegion = _charityRegion;
@synthesize charityDomain = _charityDomain;
@synthesize charityID = _charityID;
@synthesize logoURLSelling = _logoURLSelling;
@synthesize displayLogoSelling = _displayLogoSelling;
@synthesize displayNameInCheckout = _displayNameInCheckout;
@synthesize description = _description;
@synthesize showMultipleDonationAmountInCheckout = _showMultipleDonationAmountInCheckout;
@synthesize externalID = _externalID;
@synthesize popularityIndex = _popularityIndex;
@synthesize ein = _ein;
@synthesize nonProfitSecondName = _nonProfitSecondName;
@synthesize nonProfitAddress = _nonProfitAddress;
@synthesize nonProfitSocialAddress = _nonProfitSocialAddress;
@synthesize any = _any;
@synthesize id = _id;

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
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Name" propertyName:@"name" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"name"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Mission" propertyName:@"mission" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"mission"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LogoURL" propertyName:@"logoURL" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"logoURL"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Status" propertyName:@"status" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"status"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SearchableString" propertyName:@"searchableString" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"searchableString"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CharityRegion" propertyName:@"charityRegion" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"charityRegion"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CharityDomain" propertyName:@"charityDomain" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"charityDomain"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"CharityID" propertyName:@"charityID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"charityID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LogoURLSelling" propertyName:@"logoURLSelling" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"logoURLSelling"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayLogoSelling" propertyName:@"displayLogoSelling" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"displayLogoSelling"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DisplayNameInCheckout" propertyName:@"displayNameInCheckout" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"displayNameInCheckout"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"Description" propertyName:@"description" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"description"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ShowMultipleDonationAmountInCheckout" propertyName:@"showMultipleDonationAmountInCheckout" type:PICO_TYPE_BOOL clazz:nil];
    [map setObject:ps forKey:@"showMultipleDonationAmountInCheckout"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"ExternalID" propertyName:@"externalID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"externalID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"PopularityIndex" propertyName:@"popularityIndex" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"popularityIndex"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"EIN" propertyName:@"ein" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"ein"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"NonProfitSecondName" propertyName:@"nonProfitSecondName" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"nonProfitSecondName"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"NonProfitAddress" propertyName:@"nonProfitAddress" type:PICO_TYPE_OBJECT clazz:[Trading_NonProfitAddressType class]];
    [map setObject:ps forKey:@"nonProfitAddress"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"NonProfitSocialAddress" propertyName:@"nonProfitSocialAddress" type:PICO_TYPE_OBJECT clazz:[Trading_NonProfitSocialAddressType class]];
    [map setObject:ps forKey:@"nonProfitSocialAddress"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ANY_ELEMENT xmlName:@"any" propertyName:@"any" type:PICO_TYPE_ANYELEMENT clazz:nil];
    [map setObject:ps forKey:@"any"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ATTRIBUTE xmlName:@"id" propertyName:@"id" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"id"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.name = nil;
    self.mission = nil;
    self.logoURL = nil;
    self.status = nil;
    self.searchableString = nil;
    self.charityRegion = nil;
    self.charityDomain = nil;
    self.charityID = nil;
    self.logoURLSelling = nil;
    self.displayLogoSelling = nil;
    self.displayNameInCheckout = nil;
    self.description = nil;
    self.showMultipleDonationAmountInCheckout = nil;
    self.externalID = nil;
    self.popularityIndex = nil;
    self.ein = nil;
    self.nonProfitSecondName = nil;
    self.nonProfitAddress = nil;
    self.nonProfitSocialAddress = nil;
    self.any = nil;
    self.id = nil;
    [super dealloc];
}

@end
