// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>

/**
 @file
 
 MyMessagesFolderOperationCodeType - Indicates the type of
 operation to perform on a specified My Messsages folder.
 Operations cannot be performed on the Inbox or Sent folders.
 
 
 @ingroup EBayAPIInterface
*/

/**
 
 If a folder has been removed, restores the specified folder
 in My Messages. Because you cannot remove the Inbox and Sent folders,
 they can also not be restored. Requires FolderName as input.
 <br><br>
 Use Display to create a new custom folder. If you specify a FolderName
 that has not be removed, a new My Messages folder is created.
 
*/
extern NSString *const Trading_MyMessagesFolderOperationCodeType_DISPLAY;

/**
 
 Renames a specified folder. Inbox and Sent folders cannot be
 renamed. To rename a folder, use FolderID to indicate the
 folder to rename, and FolderName to indicate the new name.
 
*/
extern NSString *const Trading_MyMessagesFolderOperationCodeType_RENAME;

/**
 
 Removes a specified folder. Inbox and Sent folders cannot be
 removed. Removing a folder that is not empty returns an
 error. Requires FolderID as input.
 
*/
extern NSString *const Trading_MyMessagesFolderOperationCodeType_REMOVE;

/**
 
 Reserved for future or internal use.
 
*/
extern NSString *const Trading_MyMessagesFolderOperationCodeType_CUSTOM_CODE;