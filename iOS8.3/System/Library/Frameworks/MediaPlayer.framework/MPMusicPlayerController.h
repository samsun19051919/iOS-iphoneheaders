/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:47 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPMusicPlayerController
@optional
-(id)playbackState;
-(id)repeatMode;
-(void)setRepeatMode:(id)arg1;
-(void)prepareToPlay;
-(void)play;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(id)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(id)arg1;
-(id)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(id)arg1;
-(id)nowPlayingItem;
-(void)setQueueWithQuery:(id)arg1 firstItem:(id)arg2;
-(void)setQueueWithItemCollection:(id)arg1;
-(id)shuffleMode;
-(void)setShuffleMode:(id)arg1;
-(id)isGeniusAvailable;
-(id)isGeniusAvailableForSeedItems:(id)arg1;
-(id)setQueueWithSeedItems:(id)arg1;
-(id)nowPlayingItemAtIndex:(id)arg1;
-(void)pauseWithFadeoutDuration:(id)arg1;
-(id)allowsBackgroundVideo;
-(void)setAllowsBackgroundVideo:(id)arg1;
-(id)indexOfNowPlayingItem;
-(id)unshuffledIndexOfNowPlayingItem;
-(id)isNowPlayingItemFromGeniusMix;
-(id)currentChapterIndex;
-(void)setCurrentChapterIndex:(id)arg1;
-(void)setQueueWithGeniusMixPlaylist:(id)arg1;
-(void)setQueueWithRadioStation:(id)arg1;
-(id)skipInDirection:(id)arg1;
-(id)serverIsAlive;
-(void)setUseApplicationSpecificQueue:(id)arg1;
-(void)registerForServerDiedNotifications;
-(void)setQueueWithQuery:(id)arg1;
-(void)playItem:(id)arg1;
-(id)queueAsQuery;
-(id)queueAsRadioStation;
-(void)prepareQueueForPlayback;
-(void)setNowPlayingItem:(id)arg1;
-(void)shuffle;
-(void)skipToBeginningOrPreviousItem;
-(void)skipToNextChapter;
-(void)skipToPreviousChapter;
-(id)playbackSpeed;
-(void)setPlaybackSpeed:(id)arg1;
-(void)stop;
-(id)numberOfItems;
-(void)pause;

@end
