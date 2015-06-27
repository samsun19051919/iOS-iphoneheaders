/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray, NSTimer;

@interface _UIViewServiceFencingController : NSObject {

	int _lock;
	NSMutableSet* _pendingFenceSendRights;
	NSMutableArray* _resumeActions;
	unsigned _expectedParticipatingFencingProxyCount;
	NSTimer* _fencingControlTimeoutTimer;

}
+(id)activeFencePort;
-(void)dealloc;
-(id)init;
-(void)fencingControlProxy:(id)arg1 didBeginFencingWithSendRight:(id)arg2 expectedParticipatingFencingProxyCount:(unsigned)arg3 ;
-(void)fencingControlProxy:(id)arg1 didEndFencingWithSendRight:(id)arg2 ;
-(void)_fencingControlTimedOut;
@end
