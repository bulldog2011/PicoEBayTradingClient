// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 Specifies the action to take for an item's My eBay notes.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 Creates or replaces an item's My eBay notes. Note that if
 the specified item already has notes in My eBay, the new
 notes will completely replace the existing notes. They will
 not be appended.
 
*/
extern NSString *const Trading_SetUserNotesActionCodeType_ADD_OR_UPDATE;

/**
 
 Deletes any existing My eBay notes for the specified item.
 Specifying Delete when no notes exist does nothing, but does
 not return an error.
 
*/
extern NSString *const Trading_SetUserNotesActionCodeType_DELETE;

/**
 
 Reserved for internal or future use.
 
*/
extern NSString *const Trading_SetUserNotesActionCodeType_CUSTOM_CODE;