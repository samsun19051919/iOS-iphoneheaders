/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MPUMediaDownloadObserver : NSObject {

	/*^block*/id _progressHandler;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _hasPendingProgressHandlerExecution;
	BOOL _invalidated;
	long long _pid;
	BOOL _paused;

}

@property (readonly) double downloadProgress; 
@property (getter=isCurrentlyPlayable,readonly) BOOL currentlyPlayable; 
@property (copy) id progressHandler; 
@property (readonly) BOOL canCancel; 
@property (getter=isPurchasing,nonatomic,readonly) BOOL purchasing; 
@property (getter=isRestoreDownload,readonly) BOOL restoreDownload; 
@property (getter=isPaused,readonly) BOOL paused;                                    //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) long long persistentID;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) double rawDownloadProgress; 
@property (nonatomic,readonly) double rawDownloadTotal; 
+(id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(BOOL)arg2 storeID:(long long)arg3 ;
+(id)newObserverForMediaItem:(id)arg1 ;
+(id)newObserverForMediaCollection:(id)arg1 ;
+(id)newObserverForStoreID:(long long)arg1 ;
+(id)sharedITunesStoreDownloadManager;
-(BOOL)isPurchasing;
-(id)progressHandler;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)setProgressHandler:(id)arg1 ;
-(void)cancelDownload;
-(double)downloadProgress;
-(void)_onQueue_invalidate;
-(void)_onQueue_setShouldFireProgressHandler;
-(BOOL)isCurrentlyPlayable;
-(BOOL)canCancel;
-(void)pauseDownload;
-(void)resumeDownload;
-(BOOL)isRestoreDownload;
-(double)rawDownloadProgress;
-(double)rawDownloadTotal;
-(long long)persistentID;
-(BOOL)isPaused;
@end

