/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface IDSStatusQueryQueue : NSObject {

	NSMutableArray* _queue;

}
-(void)_callStateChanged;
-(void)enqueueQueryBlock:(/*^block*/id)arg1 cleanup:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
@end
