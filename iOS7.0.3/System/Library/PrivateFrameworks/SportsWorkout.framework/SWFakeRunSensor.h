/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWRunSensor.h>

@protocol SWFakeRunSensorDelegate;
@interface SWFakeRunSensor : SWRunSensor {

	<SWFakeRunSensorDelegate>* _delegate;

}
+(id)_createDelegate;
+(void)initialize;
-(void)_fakeLinkingSuccess;
-(void)_fakeSearchSuccess;
-(void)_fakeNextPacketWithPayload:(id)arg1 timestamp:(unsigned long)arg2 ;
-(void)beginLinking;
-(void)cancelLinking;
-(void)beginSearching;
-(void)cancelSearching;
-(unsigned)remainingBatteryLifetimeInHours;
-(void)_fakeLinkingFailure;
-(void)dealloc;
-(id)init;
-(void)deactivate;
@end
