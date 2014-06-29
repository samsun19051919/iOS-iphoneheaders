/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherXMLHTTPRequest.h>

@protocol WeatherValidatorDelegate;
@interface WeatherValidator : WeatherXMLHTTPRequest {

	<WeatherValidatorDelegate>* _delegate;

}
+(id)sharedWeatherValidator;
-(void)setDelegate:(id)arg1 ;
-(void)failWithError:(id)arg1 ;
-(id)aggregateDictionaryDomain;
-(void)processDocument:(xmlDoc*)arg1 ;
-(void)validateLocation:(id)arg1 ;
-(void)_failWithError:(id)arg1 ;
@end
