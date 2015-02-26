/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
@class NSMutableDictionary;

@interface PLProcessPortMap : NSObject {

	NSMutableDictionary* processFDs;
	socket_fdinfo si;
	int NbPids;
	int NbFds;
	int* Pids;
	proc_fdinfo* Fds;

}
-(void)dealloc;
-(id)init;
-(int)getPids;
-(int)getFds:(proc_taskallinfo)arg1 withPid:(int)arg2 ;
-(id)buildPortMap;
@end
