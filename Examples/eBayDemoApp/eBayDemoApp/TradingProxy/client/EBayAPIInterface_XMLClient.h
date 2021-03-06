// Generated by wsdl compiler for ios/objective-c
// DO NOT CHANGE!


#import <Foundation/Foundation.h>
#import "PicoXMLClient.h"
#import "Trading_GetMyeBayBuyingRequestType.h"
#import "Trading_GetMyeBayBuyingResponseType.h"
#import "Trading_AddToWatchListRequestType.h"
#import "Trading_AddToWatchListResponseType.h"


/**
 This class is the XML client to the EBayAPIInterface Web Service.
*/ 
@interface EBayAPIInterface_XMLClient : PicoXMLClient {

}

/**
 public method
*/
-(void)addToWatchList:(Trading_AddToWatchListRequestType *) requestObject 
      success:(void (^)(Trading_AddToWatchListResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getMyeBayBuying:(Trading_GetMyeBayBuyingRequestType *) requestObject 
      success:(void (^)(Trading_GetMyeBayBuyingResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;


@end