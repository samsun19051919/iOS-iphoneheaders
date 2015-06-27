/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUUID, NSDate, NSDictionary, NSString, NSURL, LSUserActivity;

@interface NSUserActivity : NSObject {

	id _internal;
	id _delegate;
	id _frameworkDelegate;

}

@property (retain,readonly) NSUUID * _uniqueIdentifier; 
@property (readonly) unsigned _suggestedActionType; 
@property (copy,readonly) NSDate * _lastActivityDate; 
@property (setter=_setOptions:,copy) NSDictionary * _options; 
@property (setter=_setFrameworkPayload:,copy) NSDictionary * _frameworkPayload; 
@property (setter=_setFrameworkDelegate:,__weak) id<NSUserActivityDelegate> _frameworkDelegate; 
@property (copy,readonly) NSString * activityType; 
@property (copy) NSString * title; 
@property (copy) NSDictionary * userInfo; 
@property (assign) char needsSave; 
@property (copy) NSURL * webpageURL; 
@property (assign) char supportsContinuationStreams; 
@property (__weak) id<NSUserActivityDelegate> delegate; 
@property (retain,readonly) LSUserActivity * _internalUserActivity;                                          //@synthesize internal=_internal - In the implementation block
+(void)_reportToCoreDuet:(id)arg1 ;
+(id)_userFacingErrorForLaunchServicesError:(id)arg1 userInfo:(id)arg2 ;
+(void)_fetchUserActivityWithUUID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setOptions:(id)arg1 ;
-(LSUserActivity *)_internalUserActivity;
-(id)typeIdentifier;
-(NSURL *)webpageURL;
-(void)setWebpageURL:(NSURL *)arg1 ;
-(char)supportsContinuationStreams;
-(void)setSupportsContinuationStreams:(char)arg1 ;
-(void)getContinuationStreamsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithInternalUserActivity:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(id)webPageURL;
-(void)setWebPageURL:(id)arg1 ;
-(void)willSynchronizeActivity;
-(void)didSynchronizeActivity;
-(void)didReceiveInputStream:(id)arg1 outputStream:(id)arg2 ;
-(id)_initWithTypeIdentifier:(id)arg1 suggestedActionType:(unsigned)arg2 options:(id)arg3 ;
-(void)_updateUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(void)_removeUserInfoValueForKey:(id)arg1 ;
-(NSDictionary *)_frameworkPayload;
-(void)_setFrameworkPayload:(id)arg1 ;
-(void)_updateFrameworkPayloadValue:(id)arg1 forKey:(id)arg2 ;
-(void)_removeFrameworkPayloadValueForKey:(id)arg1 ;
-(unsigned)_suggestedActionType;
-(NSDate *)_lastActivityDate;
-(void)_setLastActivityDate:(id)arg1 ;
-(void)_resignCurrent;
-(void)dealloc;
-(void)setDelegate:(id<NSUserActivityDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id<NSUserActivityDelegate>)delegate;
-(void)invalidate;
-(void)becomeCurrent;
-(NSString *)title;
-(NSUUID *)_uniqueIdentifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id<NSUserActivityDelegate>)_frameworkDelegate;
-(void)_setFrameworkDelegate:(id)arg1 ;
-(NSDictionary *)userInfo;
-(NSDictionary *)_options;
-(NSString *)activityType;
-(id)initWithActivityType:(id)arg1 ;
-(void)setNeedsSave:(char)arg1 ;
-(void)addUserInfoEntriesFromDictionary:(id)arg1 ;
-(char)needsSave;
@end
