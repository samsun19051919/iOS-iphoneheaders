/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTMessageDelivery.h>
#import <FTServices/FTMessageQueueDelegate.h>

@class IMRemoteURLConnection;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {

	IMRemoteURLConnection* _remoteConnection;
	bool _pendingRetryAfterAirplaneMode;
	double _retryTimeAfterAirplaneMode;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)networkStateChanged;
-(void)_clearRetryTimer;
-(bool)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2 ;
-(void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2 ;
-(void)_serverBagLoaded:(id)arg1 ;
-(void)_cleanupURLConnection;
-(void)_dequeueIfNeeded;
-(id)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 ;
-(bool)_tryRetryMessageWithTimeInterval:(double)arg1 ;
-(id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id*)arg3 ;
-(void)_notifyDelegateAboutError:(id)arg1 forMessage:(id)arg2 ;
-(void)_updateWiFiAssertions;
-(bool)sendMessage:(id)arg1 ;
-(void)cancelMessage:(id)arg1 ;
-(bool)busy;
@end
