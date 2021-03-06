// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Indicates how the application wants eBay to handle the user's token after
 the user signs in.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 Return the token in the HTTP redirect to the application-specified
 accept URL.
 
*/
extern NSString *const Trading_TokenReturnMethodCodeType_REDIRECT;

/**
 
 Leave the token at eBay so that the application can get
 the token through the FetchToken API call (SecretId required).
 
*/
extern NSString *const Trading_TokenReturnMethodCodeType_FETCH_TOKEN;

/**
 
 Reserved for future use
 
*/
extern NSString *const Trading_TokenReturnMethodCodeType_CUSTOM_CODE;
