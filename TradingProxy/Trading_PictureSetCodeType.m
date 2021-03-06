// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Trading_PictureSetCodeType.h"

/**
 @file
 
         The size of images generated.
       
*/

/**
 
             Default value for requests. The size for the standard, 3-picture set for item pictures.
           
*/
NSString *const Trading_PictureSetCodeType_STANDARD = @"Standard";

/**
 
             Supersize, 4-picture set.
             If you specify this value on input, and this value is returned
             in the response, then in AddItem or a related call,
             you must specify Item.PictureDetails.PhotoDisplay.Supersize
             or Item.PictureDetails.PhotoDisplay.PicturePack.
           
*/
NSString *const Trading_PictureSetCodeType_SUPERSIZE = @"Supersize";

/**
 
             When returned as output in the call response, the characters after setid may contain this value
             if a Supersize image cannot be generated.
             If this value is returned in the response, then in AddItem or a related call,
             you must specify Item.PictureDetails.PhotoDisplay.Supersize
             or Item.PictureDetails.PhotoDisplay.PicturePack.
           
*/
NSString *const Trading_PictureSetCodeType_LARGE = @"Large";

/**
 
             (out) Reserved for internal or future use.
           
*/
NSString *const Trading_PictureSetCodeType_CUSTOM_CODE = @"CustomCode";
