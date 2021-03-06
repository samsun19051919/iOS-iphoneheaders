/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, BKProcess;

@interface BKWatchdogAssertion : NSObject {

	/*^block*/ id _invalidationHandler;
	unsigned _port;
	NSObject<OS_dispatch_source>* _portSource;
	BKProcess* _process;

}
-(void)setProcessToNil;
-(void)_setHandler:(/*^block*/ id)arg1 andResumeSource:(id)arg2 ;
-(void)_invalidateAndReleaseSource:(id)arg1 ;
-(id)initWithClientPort:(unsigned)arg1 process:(id)arg2 queue:(id)arg3 invalidationHandler:(/*^block*/ id)arg4 ;
-(void)removeFromProcess;
-(void)dealloc;
@end

