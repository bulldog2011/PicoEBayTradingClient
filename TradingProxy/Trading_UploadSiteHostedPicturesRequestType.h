// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Trading_AbstractRequestType.h"


@class Trading_Base64BinaryType;

/**
 
 Uploads a picture for a listing and returns a URL for the picture.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_UploadSiteHostedPicturesRequestType : Trading_AbstractRequestType {

@private
    NSString *_pictureName;
    NSNumber *_pictureSystemVersion;
    NSString *_pictureSet;
    Trading_Base64BinaryType *_pictureData;
    NSString *_pictureUploadPolicy;
    NSMutableArray *_externalPictureURL;
    NSMutableArray *_pictureWatermark;
    NSNumber *_extensionInDays;

}


/**
 
 A name you provide for the picture.
 Returned as SiteHostedPictureDetails.PictureName in the call response.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *pictureName;

/**
 
 Specifies the picture system version. Only version 2 is valid.
 Available to support future changes in the picture system version.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pictureSystemVersion;

/**
 
 The image sizes that will be generated.
 
 
 type: string constant in Trading_PictureSetCodeType.h
*/
@property (nonatomic, retain) NSString *pictureSet;

/**
 
 An optional reference ID to the binary attachment.
 The PictureData field does not contain the binary attachment.
 The binary attachment is image data,
 including headers, from a JPG, GIF, PNG, BMP, or TIF format image file.
 The binary attachment must be sent as a MIME attachment,
 in your POST request, after the XML input.
 <br>
         <br>
 <b>Note: Not applicable for eBay Large Merchant Services. Use the
 ExternalPictureURL field instead.</b>
 
 
 type : class Trading_Base64BinaryType
*/
@property (nonatomic, retain) Trading_Base64BinaryType *pictureData;

/**
 
 When the My Picture Uploads feature is available (see the Trading API Release Notes), applications
 (including non-listing apps, such as photo-editors and digital-camera software) will be able to use
 the PictureUploadPolicy field to specify that an uploaded picture is available to a seller on the eBay site. When you use PictureUploadPolicy, you are specifying that the picture you uploaded (and its URL) is stored for 48 hours on the eBay site. (If, within 48 hours, the picture is associated with an item,
 then it persists on the eBay site for the same time length as other pictures uploaded using
 the UploadSiteHostedPictures call).
 As a result of the storage on the eBay site, the picture is available to the seller on
 the My Picture Uploads tab within the Sell Your Item (SYI) pages.
 A maximum of 25 URLs can be stored.
 
 
 type: string constant in Trading_PictureUploadPolicyCodeType.h
*/
@property (nonatomic, retain) NSString *pictureUploadPolicy;

/**
 
   Include the URL for a picture that you want to include in your listing.
   You can only include one ExternalPictureURL field per call.
 <br><br>
 <span class="tablenote"><b>Note:</b>
 If a URI contains spaces, replace them with <code>%20</code>.
 For example, <code>http://example.com/my image.jpg</code> must be submitted as <code>http://example.com/my%20image.jpg</code>
 to replace the space in the image file name.
 </span>
   <br>
         <br>
 This field allows the eBay server to retrieve a picture from a URL on an
 external web server. Once retrieved, the picture will be copied to
 eBay Picture Services (EPS), and retained for 90 days, plus the length of
 your listing duration.
 <br>
         <br>
         <b>Note: The ExternalPictureURL field is required
 when using eBay Large Merchant Services.</b>
 
 
 entry type : NSString, wrapper for primitive string
*/

@property (nonatomic, retain) NSMutableArray *externalPictureURL;

/**
 
 This is the type of watermark that should be applied to the pictures hosted
 by the eBay Picture Services. Please note that watermarks are applied only
 to pictures that are greater than an EPS configured size. The possible
 values are: None, Both, Icon, or SellerId.
 
 
 entry type : string constant in Trading_PictureWatermarkCodeType.h
*/

@property (nonatomic, retain) NSMutableArray *pictureWatermark;

/**
 
 The number of days to extend the expiration date for the
 specified image, after a listing has ended. This call is restricted to
 applications that have been granted permission to use it by eBay
 Developer Technical Support.
 <br><br>
 This call is not needed for active listings - it is meant to be used only
  when a photo needs to be hosted longer than the normal listing
 duration.
 <br><br>
 The maximum number of days allowed for this field is 30.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *extensionInDays;


@end
