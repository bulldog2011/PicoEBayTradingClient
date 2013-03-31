PicoEBayTradingClient
=====================

Pico Objective-C Client for the [eBay Trading API](https://www.x.com/developers/ebay/products/trading-api).

## Note
1. This is only the proxy part of the PicoEBayTradingClient, you need to integrate with [Pico Runtime](https://github.com/bulldog2011/pico) before you can use this proxy, please follow instructions on Pico github site to add the Pico runtime library and the PicoEBayTradingClient in your iOS app, you may also start with the sample mentioned in Reference Sample section below. 
2. You need to fill in `eBayAppId` and `eBayAuthToken` in `EBayTradingServiceClient` before your app can invoke eBay Trading service.
3. The proxy just suppose you hardcode the `eBayAuthToken` in `EBayTradingServiceClient`, in a real world app, for security, you need to integrate with eBay [Authentication & Authorization](http://developer.ebay.com/DevZone/XML/docs/WebHelp/wwhelp/wwhimpl/common/html/wwhelp.htm?context=eBay_XML_API&file=GettingTokens-Getting_Tokens_for_Applications_with_Multiple_Users.html) flow on your iOS device.
4. Besides proxy code, this site also hosts the [appledoc for the PicoEBayTradingClient](http://bulldog2011.github.com/PicoEBayTradingClient/).  


##Example Usage
With this proxy and the generic Pico runtime library, eBay Trading API invocation on iOS platform is quite simple:

``` objective-c

    // start progress activity
    [self.view makeToastActivity];
    
    // Get shared service client
    EBayTradingServiceClient  *tradingClient = [EBayTradingServiceClient sharedClient];
    tradingClient.debug = YES; // enable request/response message logging
    
    // Build request object
    Trading_GeteBayOfficialTimeRequestType *request = [[[Trading_GeteBayOfficialTimeRequestType alloc] init] autorelease];
    
    // make API call and register callbacks
    [tradingClient geteBayOfficialTime:request success:^(Trading_GeteBayOfficialTimeResponseType *responseObject) {
        
        // stop progress activity
        [self.view hideToastActivity];
        
        if ([Trading_AckCodeType_SUCCESS isEqualToString:responseObject.ack]) {
            NSString *dateString = [NSDateFormatter localizedStringFromDate:responseObject.timestamp
                                                                  dateStyle:NSDateFormatterShortStyle
                                                                  timeStyle:NSDateFormatterFullStyle];
            [self.view makeToast:dateString duration:3.0 position:@"center" title:@"eBay Official Time"];
        } else { // response residenet error
            Trading_ErrorType *error = [responseObject.errors objectAtIndex:0];
            [self.view makeToast:error.shortMessage duration:3.0 position:@"center" title:@"Error"];
        }
    } failure:^(NSError *error, id<PicoBindable> soapFault) {
        
        // stop progress activity
        [self.view hideToastActivity];
        
        if (error) {
            [self.view makeToast:[error localizedDescription] duration:3.0 position:@"center" title:@"Error"];
        } else if (soapFault) {
            SOAP11Fault *soap11Fault = (SOAP11Fault *)soapFault;
            [self.view makeToast:soap11Fault.faultstring duration:3.0 position:@"center" title:@"SOAP Fault"];
        }
    }];

        
```

## Reference Sample 

// TODO

##Docs
1. [Wsdl Driven Development on iOS - the Big Picture](http://bulldog2011.github.com/blog/2013/03/25/wsdl-driven-development-on-ios-the-big-picture/)

// TODO


##Copyright and License
(The MIT License)

Copyright (c) 2013 Leansoft Technology <51startup@sina.com>

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the 'Software'), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE

