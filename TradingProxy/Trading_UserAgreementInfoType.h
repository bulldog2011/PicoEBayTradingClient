// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
           Type defining the <b>UserAgreementInfo</b> container, which consists of details related to the
 current status of a DE or AT seller signing the required supplemental user agreement for the new eBay
 payment process.
         
 
 @ingroup EBayAPIInterface
*/
@interface Trading_UserAgreementInfoType : NSObject <PicoBindable> {

@private
    NSString *_site;
    NSString *_sellereBayPaymentProcessStatus;
    NSDate *_acceptedTime;
    NSDate *_sellereBayPaymentProcessEnableTime;
    NSString *_userAgreementURL;
    NSMutableArray *_any;

}


/**
 
                 String value that indicates the site to which the supplemental user agreement information pertains.
                 This value is always returned with the <b>UserAgreementInfo</b> container.
                 <br><br>
                 Although this value is based on <b>SiteCodeType</b> (which contains many values), the
                 only values that will be returned here are 'Germany' or 'Austria'.
                 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
                 
 
 type: string constant in Trading_SiteCodeType.h
*/
@property (nonatomic, retain) NSString *site;

/**
 
                   Enumeration value that indicates whether or not a new DE or AT seller has accepted the supplement
 user agreement for the new payment process for that site (indicated by the <b>UserAgreementInfo.site</b>
 value). This value is always returned with the <b>UserAgreementInfo</b> container.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
                 
 
 type: string constant in Trading_SellereBayPaymentProcessStatusCodeType.h
*/
@property (nonatomic, retain) NSString *sellereBayPaymentProcessStatus;

/**
 
 This timestamp indicates the date on which the DE or AT seller accepted the supplemental user agreement
 for the new payment process. Unless the <b>UserAgreementInfo.SellereBayPaymentProcessStatus</b>
 value is 'MustAcceptUA', this value is always returned with <b>UserAgreementInfo</b> container.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *acceptedTime;

/**
 
 This timestamp indicates the date on which the new eBay payment process was fully enabled (if <b>UserAgreementInfo.SellereBayPaymentProcessStatus</b>='eBayPaymentProcessEnabled')
 or scheduled to be enabled (if <b>UserAgreementInfo.SellereBayPaymentProcessStatus</b>='AcceptedUA'
 or 'MustAcceptUA', and the enable date is known by eBay). Unless the eBay payment process enable date is
 not known for the seller, this value is always returned with <b>UserAgreementInfo</b>
 container.
 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
 
 
 type : NSDate, wrapper for primitive date
*/
@property (nonatomic, retain) NSDate *sellereBayPaymentProcessEnableTime;

/**
 
                   This is the URL for new eBay payment process supplemental user agreement. This URL is only returned
                   if the <b>UserAgreementInfo.SellereBayPaymentProcessStatus</b>='MustAcceptUA'.
                 <br>
 <br>
 <span class="tablenote"><b>Note:</b>
 The introduction of the new eBay payment process for the entire German and
 Austrian eBay marketplace has been delayed until further notice.</span>
 <br>
                 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userAgreementURL;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
