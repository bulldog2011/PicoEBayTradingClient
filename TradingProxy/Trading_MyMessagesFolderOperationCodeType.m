// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_MyMessagesFolderOperationCodeType.h"

/**
 @file
 
 MyMessagesFolderOperationCodeType - Indicates the type of
 operation to perform on a specified My Messsages folder.
 Operations cannot be performed on the Inbox or Sent folders.
 
*/

/**
 
 If a folder has been removed, restores the specified folder
 in My Messages. Because you cannot remove the Inbox and Sent folders,
 they can also not be restored. Requires FolderName as input.
 <br><br>
 Use Display to create a new custom folder. If you specify a FolderName
 that has not be removed, a new My Messages folder is created.
 
*/
NSString *const Trading_MyMessagesFolderOperationCodeType_DISPLAY = @"Display";

/**
 
 Renames a specified folder. Inbox and Sent folders cannot be
 renamed. To rename a folder, use FolderID to indicate the
 folder to rename, and FolderName to indicate the new name.
 
*/
NSString *const Trading_MyMessagesFolderOperationCodeType_RENAME = @"Rename";

/**
 
 Removes a specified folder. Inbox and Sent folders cannot be
 removed. Removing a folder that is not empty returns an
 error. Requires FolderID as input.
 
*/
NSString *const Trading_MyMessagesFolderOperationCodeType_REMOVE = @"Remove";

/**
 
 Reserved for future or internal use.
 
*/
NSString *const Trading_MyMessagesFolderOperationCodeType_CUSTOM_CODE = @"CustomCode";
