/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {

	NSMutableDictionary* _storeLinksDirs;
	NSMutableDictionary* _filesToCleanUp;

}
+(id)defaultInstance;
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
-(id)_init__;
-(void)_deleteIfNecessary:(id)arg1 ;
-(void)_doCleanupForDir:(id)arg1 exceptURLs:(id)arg2 ;
-(bool)registerURLForCleanup:(id)arg1 ;
-(id)temporaryLinksDirectoryForStore:(id)arg1 ;
-(void)doCleanupForURL:(id)arg1 ;
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(unsigned long long)retainCount;
-(bool)_tryRetain;
-(bool)_isDeallocating;
@end
