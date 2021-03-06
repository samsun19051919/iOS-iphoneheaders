/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSSpeechServiceDelegate.h>

@protocol VSSpeechConnectionDelegate;
@class VSSpeechRequest, VSSpeechConnection;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {

	<VSSpeechConnectionDelegate>* _delegate;
	VSSpeechRequest* _request;
	VSSpeechConnection* _connection;

}

@property (assign,nonatomic,__weak) <VSSpeechConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) VSSpeechConnection * connection;                      //@synthesize connection=_connection - In the implementation block
-(void)setRequest:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)request;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestMark:(int)arg1 didStartForRange:(NSRange)arg2 ;
-(void).cxx_destruct;
@end

