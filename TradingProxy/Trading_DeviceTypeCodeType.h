// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 The means of receipt of notification.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 Typical API, web page interaction.
 
*/
extern NSString *const Trading_DeviceTypeCodeType_PLATFORM;

/**
 
 For SMS/wireless application. 
 Note that SMS is currently reserved for future use.
 
*/
extern NSString *const Trading_DeviceTypeCodeType_SMS;

/**
 
 Warning: do NOT set this value in production if you currently use Platform Notifications
 with this application ID. Setting this value will discontinue all platform
 notifications for this application ID, until this value is reset to Platform. <br>
 <br>
 Set this enum value to specify that the notification client is a Client Alerts API client.
 Alerts will be delivered through the Client Alerts system.
 
*/
extern NSString *const Trading_DeviceTypeCodeType_CLIENT_ALERTS;

/**
 
 (out) Reserved for internal or future use.
 
*/
extern NSString *const Trading_DeviceTypeCodeType_CUSTOM_CODE;