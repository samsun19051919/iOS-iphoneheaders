/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <PassKitCore/PKUsageNotificationClientInterface.h>

@class NSXPCListener, NSMutableSet;

@interface PKUsageNotificationClient : NSObject <NSXPCListenerDelegate, PKUsageNotificationClientInterface> {

	NSXPCListener* _listener;
	NSMutableSet* _connections;
	/*^block*/ id _handler;

}
-(void)dealloc;
-(id)init;
-(bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)passUsedFromSource:(int)arg1 withTypeIdentifier:(id)arg2 info:(id)arg3 ;
-(void)setPassUsageHandler:(/*^block*/ id)arg1 ;
@end

