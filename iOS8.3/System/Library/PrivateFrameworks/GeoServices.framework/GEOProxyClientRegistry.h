/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, GEOProxyClient, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject {

	NSLock* _lock;
	GEOProxyClient* _currentComposite;
	NSMutableSet* _currentSet;

}
+(id)sharedRegistry;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)_updateComposite;
-(void)enableRegistry;
-(id)compositeClient;
@end
