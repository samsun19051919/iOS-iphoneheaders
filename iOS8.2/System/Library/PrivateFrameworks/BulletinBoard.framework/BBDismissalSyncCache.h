/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject {

	NSMutableDictionary* _cache;
	NSDate* _timeToCheck;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSDate * timeToCheck;                     //@synthesize timeToCheck=_timeToCheck - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)findBulletinMatch:(id)arg1 ;
-(void)removeBulletinMatch:(id)arg1 ;
-(void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 inSection:(id)arg3 forFeeds:(unsigned)arg4 ;
-(void)_checkCache;
-(NSDate *)timeToCheck;
-(char)_isTimeToCheck;
-(void)setTimeToCheck:(NSDate *)arg1 ;
@end
