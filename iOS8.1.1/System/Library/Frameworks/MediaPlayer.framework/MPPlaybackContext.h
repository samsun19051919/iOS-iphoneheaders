/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPPlaybackContext : NSObject {

	BOOL _keepPlayingCurrentItemIfPossible;
	unsigned long long _shuffleType;
	unsigned long long _repeatType;

}

@property (assign,nonatomic) BOOL keepPlayingCurrentItemIfPossible;              //@synthesize keepPlayingCurrentItemIfPossible=_keepPlayingCurrentItemIfPossible - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;                     //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) unsigned long long repeatType;                      //@synthesize repeatType=_repeatType - In the implementation block
+(Class)queueFeederClass;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(void)setRepeatType:(unsigned long long)arg1 ;
-(void)setShuffleType:(unsigned long long)arg1 ;
-(BOOL)keepPlayingCurrentItemIfPossible;
-(void)setKeepPlayingCurrentItemIfPossible:(BOOL)arg1 ;
-(id)init;
@end
