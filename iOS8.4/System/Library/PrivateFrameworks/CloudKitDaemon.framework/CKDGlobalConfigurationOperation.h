/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@protocol OS_dispatch_group;
@class CKDServerConfiguration, NSObject;

@interface CKDGlobalConfigurationOperation : CKDOperation {

	CKDServerConfiguration* _configuration;
	NSObject*<OS_dispatch_group> _configurationFetchedGroup;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;                              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> configurationFetchedGroup;              //@synthesize configurationFetchedGroup=_configurationFetchedGroup - In the implementation block
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(void)main;
-(CKDServerConfiguration *)configuration;
-(BOOL)shouldCheckAppVersion;
-(void)setConfigurationFetchedGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)configurationFetchedGroup;
@end
