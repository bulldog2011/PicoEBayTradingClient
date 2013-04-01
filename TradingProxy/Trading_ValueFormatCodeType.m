// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_ValueFormatCodeType.h"

/**
 @file
 
 The format of a ValueType.  The ValueFormatCodeType places additional constraints on the format a value takes
 on which are enforceable for validation purposes
 
*/

/**
 
 A date including the month, day, and year in the following format:
 '<em>YYYYMMDD</em>'
 
*/
NSString *const Trading_ValueFormatCodeType_FULL_DATE = @"FullDate";

/**
 
 A date including the month and year in the following format: '<em>YYYYMM</em>'
 
*/
NSString *const Trading_ValueFormatCodeType_PARTIAL_DATE = @"PartialDate";

/**
 
 A date including only the year in the following format: '<em>YYYY</em>'
 
*/
NSString *const Trading_ValueFormatCodeType_YEAR = @"Year";

/**
 
 Reserved for future or internal use.
 
*/
NSString *const Trading_ValueFormatCodeType_CUSTOM_CODE = @"CustomCode";
