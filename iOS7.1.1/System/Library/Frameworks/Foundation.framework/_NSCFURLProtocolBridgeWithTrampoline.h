/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/_NSCFURLProtocolBridge.h>

@class NSMutableArray, NSCountedSet, NSThread;

@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge {

	NSMutableArray* _workQueue;
	NSCountedSet* _runloops;
	bool _canSignalDirectly;
	NSThread* _processThread;

}
-(id)initWithCFURLProtocol:(CFURLProtocolRef)arg1 request:(id)arg2 protocolClass:(Class)arg3 ;
-(void)releaseWorkQueue;
-(bool)shouldSignalDirectly;
-(void)processEventQ;
-(void)schedule:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unschedule:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)pushEvent:(/*^block*/ id)arg1 from:(const char*)arg2 ;
-(void)dealloc;
-(void)finalize;
@end
