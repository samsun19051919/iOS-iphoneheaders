/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:03:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <CloudDocsDaemon/BRCancellable.h>

@protocol BROperationClient;
@class NSObject, NSString;

@interface _BRCFrameworkOperation : _BRCOperation <BRCancellable> {

	char _startedFinish;
	NSObject*<BROperationClient> _remoteClientProxy;

}

@property (nonatomic,retain) NSObject*<BROperationClient> remoteClientProxy;              //@synthesize remoteClientProxy=_remoteClientProxy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)invalidate;
-(id)_description;
-(void)start;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setRemoteClientProxy:(NSObject*<BROperationClient>)arg1 ;
-(NSObject*<BROperationClient>)remoteClientProxy;
@end
