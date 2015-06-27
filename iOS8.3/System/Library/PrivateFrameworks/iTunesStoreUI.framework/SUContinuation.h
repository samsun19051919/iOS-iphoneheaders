/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUContinuationDelegate;
@interface SUContinuation : NSObject {

	id<SUContinuationDelegate> _delegate;

}

@property (assign,nonatomic) id<SUContinuationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<SUContinuationDelegate>)arg1 ;
-(id<SUContinuationDelegate>)delegate;
-(void)start;
-(void)sendErrorToDelegate:(id)arg1 ;
-(void)sendFinishToDelegate;
@end
