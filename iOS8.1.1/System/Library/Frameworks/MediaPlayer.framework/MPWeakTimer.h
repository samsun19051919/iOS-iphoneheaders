/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface MPWeakTimer : NSObject {

	NSObject*<OS_dispatch_source> _timerSource;

}
+(id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(id)timerWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
+(id)timerWithInterval:(double)arg1 block:(/*^block*/id)arg2 ;
+(id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithInterval:(double)arg1 repeats:(BOOL)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(id)initWithInterval:(double)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
@end
