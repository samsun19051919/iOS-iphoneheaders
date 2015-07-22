/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>

@protocol ATClient, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATLegacySyncSessionTask : ATSessionTask {

	NSString* _dataClass;
	id<ATClient> _client;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _grappaSessionID;

}

@property (nonatomic,copy,readonly) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
@property (assign,nonatomic) unsigned grappaSessionID;                 //@synthesize grappaSessionID=_grappaSessionID - In the implementation block
-(void)cancel;
-(void)start;
-(id)sessionGroupingKey;
-(NSString *)dataClass;
-(unsigned)grappaSessionID;
-(void)_finishWithError:(id)arg1 shouldAddAssetTask:(BOOL)arg2 ;
-(id)initWithDataClass:(id)arg1 ;
-(void)prepareWithHostAnchor:(id)arg1 version:(id)arg2 ;
-(void)reconcileWithAnchor:(id)arg1 syncType:(unsigned)arg2 ;
-(void)setGrappaSessionID:(unsigned)arg1 ;
@end
