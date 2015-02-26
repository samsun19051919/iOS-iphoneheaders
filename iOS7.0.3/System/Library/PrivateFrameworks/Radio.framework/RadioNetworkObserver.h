/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioNetworkObserver : NSObject {

	int _networkUsageCount;
	NSObject<OS_dispatch_queue>* _networkUsageQueue;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (nonatomic,readonly) BOOL isCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(BOOL)isCellularNetworkingAllowed;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(void).cxx_destruct;
-(BOOL)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
@end
