// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_DeviceTypeCodeType.h"

/**
 @file
 
 The means of receipt of notification.
 
*/

/**
 
 Typical API, web page interaction.
 
*/
NSString *const Trading_DeviceTypeCodeType_PLATFORM = @"Platform";

/**
 
 For SMS/wireless application. 
 Note that SMS is currently reserved for future use.
 
*/
NSString *const Trading_DeviceTypeCodeType_SMS = @"SMS";

/**
 
 Warning: do NOT set this value in production if you currently use Platform Notifications
 with this application ID. Setting this value will discontinue all platform
 notifications for this application ID, until this value is reset to Platform. <br>
 <br>
 Set this enum value to specify that the notification client is a Client Alerts API client.
 Alerts will be delivered through the Client Alerts system.
 
*/
NSString *const Trading_DeviceTypeCodeType_CLIENT_ALERTS = @"ClientAlerts";

/**
 
 (out) Reserved for internal or future use.
 
*/
NSString *const Trading_DeviceTypeCodeType_CUSTOM_CODE = @"CustomCode";
