// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"



/**
 
 Renames, removes, or restores the specified My Messages folders for
 a given user.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_ReviseMyMessagesFoldersRequestType : Trading_AbstractRequestType {

@private
    NSString *_operation;
    NSMutableArray *_folderID;
    NSMutableArray *_folderName;

}


/**
 
 Indicates the type of operation to perform on a
 specified My Messages folder. Operations include creating,
 renaming, removing, and restoring folders. Operations
 cannot be performed on the Inbox and Sent folders.
 
 
 type: string constant in Trading_MyMessagesFolderOperationCodeType.h
*/
@property (nonatomic, retain) NSString *operation;

/**
 
 An ID that uniquely identifies the My Messages
 folder to perform the operation on. This value is set by
 eBay and cannot be changed. Retrieve FolderIDs
 by calling GetMyMessages with a DetailLevel of
 ReturnSummary. Inbox is FolderID = 0, and Sent is
 FolderID = 1.
 
 
 entry type : NSNumber, wrapper for primitive long
*/

@property (nonatomic, retain) NSMutableArray *folderID;

/**
 
 The name of a specified My Messages folder. Depending
 on the specified Operation, the value is an existing
 folder name or a new folder name. Retrieve existing
 FolderNames by calling GetMyMessages with a DetailLevel
 of ReturnSummary. Inbox is FolderID = 0, and Sent is
 FolderID = 1.
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *folderName;


@end