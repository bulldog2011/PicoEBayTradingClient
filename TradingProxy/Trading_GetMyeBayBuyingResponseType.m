// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Trading_GetMyeBayBuyingResponseType.h"
#import "Trading_ItemType.h"
#import "Trading_PaginatedItemArrayType.h"
#import "Trading_BidGroupArrayType.h"
#import "Trading_PaginatedOrderTransactionArrayType.h"
#import "Trading_MyeBayFavoriteSellerListType.h"
#import "Trading_MyeBayFavoriteSearchListType.h"
#import "Trading_BuyingSummaryType.h"
#import "Trading_UserDefinedListType.h"

@implementation Trading_GetMyeBayBuyingResponseType

@synthesize buyingSummary = _buyingSummary;
@synthesize watchList = _watchList;
@synthesize bidList = _bidList;
@synthesize bestOfferList = _bestOfferList;
@synthesize wonList = _wonList;
@synthesize lostList = _lostList;
@synthesize favoriteSearches = _favoriteSearches;
@synthesize favoriteSellers = _favoriteSellers;
@synthesize secondChanceOffer = _secondChanceOffer;
@synthesize bidAssistantList = _bidAssistantList;
@synthesize deletedFromWonList = _deletedFromWonList;
@synthesize deletedFromLostList = _deletedFromLostList;
@synthesize userDefinedList = _userDefinedList;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"GetMyeBayBuyingResponse" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BuyingSummary" propertyName:@"buyingSummary" type:PICO_TYPE_OBJECT clazz:[Trading_BuyingSummaryType class]];
    [map setObject:ps forKey:@"buyingSummary"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WatchList" propertyName:@"watchList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedItemArrayType class]];
    [map setObject:ps forKey:@"watchList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BidList" propertyName:@"bidList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedItemArrayType class]];
    [map setObject:ps forKey:@"bidList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BestOfferList" propertyName:@"bestOfferList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedItemArrayType class]];
    [map setObject:ps forKey:@"bestOfferList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"WonList" propertyName:@"wonList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedOrderTransactionArrayType class]];
    [map setObject:ps forKey:@"wonList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"LostList" propertyName:@"lostList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedItemArrayType class]];
    [map setObject:ps forKey:@"lostList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FavoriteSearches" propertyName:@"favoriteSearches" type:PICO_TYPE_OBJECT clazz:[Trading_MyeBayFavoriteSearchListType class]];
    [map setObject:ps forKey:@"favoriteSearches"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"FavoriteSellers" propertyName:@"favoriteSellers" type:PICO_TYPE_OBJECT clazz:[Trading_MyeBayFavoriteSellerListType class]];
    [map setObject:ps forKey:@"favoriteSellers"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"SecondChanceOffer" propertyName:@"secondChanceOffer" type:PICO_TYPE_OBJECT clazz:[Trading_ItemType class]];
    [map setObject:ps forKey:@"secondChanceOffer"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"BidAssistantList" propertyName:@"bidAssistantList" type:PICO_TYPE_OBJECT clazz:[Trading_BidGroupArrayType class]];
    [map setObject:ps forKey:@"bidAssistantList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DeletedFromWonList" propertyName:@"deletedFromWonList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedOrderTransactionArrayType class]];
    [map setObject:ps forKey:@"deletedFromWonList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"DeletedFromLostList" propertyName:@"deletedFromLostList" type:PICO_TYPE_OBJECT clazz:[Trading_PaginatedItemArrayType class]];
    [map setObject:ps forKey:@"deletedFromLostList"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"UserDefinedList" propertyName:@"userDefinedList" type:PICO_TYPE_OBJECT clazz:[Trading_UserDefinedListType class]];
    [map setObject:ps forKey:@"userDefinedList"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.buyingSummary = nil;
    self.watchList = nil;
    self.bidList = nil;
    self.bestOfferList = nil;
    self.wonList = nil;
    self.lostList = nil;
    self.favoriteSearches = nil;
    self.favoriteSellers = nil;
    self.secondChanceOffer = nil;
    self.bidAssistantList = nil;
    self.deletedFromWonList = nil;
    self.deletedFromLostList = nil;
    self.userDefinedList = nil;
    [super dealloc];
}

@end
