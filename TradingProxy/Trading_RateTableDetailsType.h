// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
    This type contains fields to specify the shipping rate tables that are to be applied to a listing. Shipping rate tables enable sellers to tailor the flat shipping rates offered for an item to fit the shipping destination. They can specify a base rate for a large region, then define alternative rates or surcharges for shipping to other (extended) regions within the larger region.
    <br><br>
 Prerequisites for applying shipping rate tables:
 <ul>
 <li>The shipping type for the listing must be Flat. </li>
 <li>The seller must have previously configured a shipping rate table in My eBay site preferences. </li>
 </ul>
             This container is returned from the GetItem family of calls only for the seller who listed the item.
    <br><br>
 You can find more information about using shipping rate tables in the Shipping chapter of the Trading API User's Guide.
 
 
 @ingroup EBayAPIInterface
*/
@interface Trading_RateTableDetailsType : NSObject <PicoBindable> {

@private
    NSString *_domesticRateTable;
    NSString *_internationalRateTable;
    NSMutableArray *_any;

}


/**
 
    This field specifies which domestic shipping rate table to apply to a listing. Domestic rate tables can be used only for items listed on the DE, UK or US site.
                   <br><br>
                   Currently, sellers can configure only one domestic shipping rate table, so set <strong>DomesticRateTable</strong> = <code>Default</code> to apply that table. The rates assigned to the various domestic regions are applied depending on the location of the buyer. If only one shipping service category and rate has been set for a given domestic region in the domestic rate table, buyers in that region will see only one shipping cost. If several service levels and rates are set up in the domestic shipping rate table for a given domestic region, buyers in that region will see the different shipping levels and rates and can choose one of them.
                   <br><br>
    If you are modifying or relisting an item (using the Revise or Relist family of calls), you can delete the existing rate table setting applied to the listing by using the empty tag: <code>&lt;DomesticRateTable /&gt;</code>
    <br><br>
                   This field is returned from the GetItem family of calls only for the seller who listed the item.
    <br><br>
    You can find more information about using shipping rate tables in the Shipping chapter of the Trading API User's Guide.
    
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *domesticRateTable;

/**
 
    This field specifies which international shipping rate table to apply to a listing. International rate tables can be used only for items listed on the DE or UK site.
                   <br><br>
 
                   Currently, sellers can configure only one international shipping rate table, so set <strong>InternationalRateTable</strong> = <code>Default</code> to apply that table. The rates assigned to the various countries are applied depending on the location of the buyer. If only one shipping service category and rate has been set for a given country in the international rate table, buyers in that country will see only one shipping cost. If several service levels and rates are set up in the international shipping rate table for a given country, buyers in that country will see the different shipping levels and rates and can choose one of them.
                   <br><br>
 
    If you are modifying or relisting an item (using the Revise or Relist family of calls), you can delete the existing rate table setting applied to the listing by using the empty tag: <code>&lt;InternationalRateTable /&gt;</code>
    <br><br>
 
                   This field is returned from the GetItem family of calls only for the seller who listed the item.
    <br><br>
 
    You can find more information about using shipping rate tables in the Shipping chapter of the Trading API User's Guide.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *internationalRateTable;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
