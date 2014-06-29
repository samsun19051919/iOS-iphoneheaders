/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <demod/MSDDemoUpdateStatusDelegate.h>

@protocol OS_xpc_object;
@class NSObject;

@interface MSDLocalMessageResponder : NSObject <MSDDemoUpdateStatusDelegate> {

	NSObject<OS_xpc_object>* _connection;

}

@property (__weak) NSObject<OS_xpc_object> * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(void)demoUpdateCompleted:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 ;
-(void)demoUpdateFailed:(id)arg1 ;
-(void)demoUpdateProgress:(id)arg1 ;
-(BOOL)hasEntitlementEnableDemo;
-(void).cxx_destruct;
-(id)connection;
-(void)setConnection:(id)arg1 ;
@end
