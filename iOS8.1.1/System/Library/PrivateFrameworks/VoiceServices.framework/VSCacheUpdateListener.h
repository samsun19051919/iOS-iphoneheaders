/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {

	NSLock* _lock;
	NSMutableArray* _updateRequestQueue;
	NSDictionary* _dataProviders;
	NSTimer* _flushTimer;
	BOOL _isListening;

}
+(id)sharedListener;
+(id)sharedListenerIfExists;
-(id)_initShared;
-(void)dealloc;
-(id)init;
-(void)startListening;
-(void)stopListening;
-(void)_enqueueRequest:(id)arg1 ;
-(void)_flush;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2 ;
@end
