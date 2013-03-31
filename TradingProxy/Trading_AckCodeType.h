// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 This code identifies the acknowledgement code types that
 eBay could use to communicate the status of processing a
 (request) message to an application. This code would be used
 as part of a response message that contains an
 application-level acknowledgement element.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
  (out) Request processing succeeded
 
*/
extern NSString *const Trading_AckCodeType_SUCCESS;

/**
 
  (out) Request processing failed
 
*/
extern NSString *const Trading_AckCodeType_FAILURE;

/**
 
 (out) Request processing completed with warning information
 being included in the response message
 
*/
extern NSString *const Trading_AckCodeType_WARNING;

/**
 
 (out) Request processing completed with some failures.
 See the Errors data to determine which portions of the request failed.
  
*/
extern NSString *const Trading_AckCodeType_PARTIAL_FAILURE;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Trading_AckCodeType_CUSTOM_CODE;