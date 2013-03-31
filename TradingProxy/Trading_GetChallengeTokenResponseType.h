// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractResponseType.h"



/**
 
 Response to GetChallengeToken request.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_GetChallengeTokenResponseType : Trading_AbstractResponseType {

@private
    NSString *_challengeToken;
    NSString *_imageChallengeURL;
    NSString *_audioChallengeURL;

}


/**
 
 Botblock token that is used to validate that the user is a human and not a bot.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *challengeToken;

/**
 
 The URL of the image your application should display to
 the user for a botblock challenge.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *imageChallengeURL;

/**
 
 The URL of the audio clip your application should provide for sight-impaired users.
 The audio clip corresponds to the image.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *audioChallengeURL;


@end
