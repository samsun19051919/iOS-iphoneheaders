/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSConditionLock;

@interface _SCRCThreadTask : NSObject {

	id _target;
	SEL _selector;
	unsigned _count;
	void** _objects[6];
	NSConditionLock* _waitLock;
	unsigned _mask;

}
-(void)fire;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)setWaitLock:(id)arg1 ;
@end
