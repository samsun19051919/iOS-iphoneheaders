/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject {

	NSMutableArray* _dismissalDictionariesAndFeeds;
	NSMutableDictionary* _dismissalIDToFeeds;

}

@property (nonatomic,retain,readonly) NSMutableArray * dismissalDictionariesAndFeeds;              //@synthesize dismissalDictionariesAndFeeds=_dismissalDictionariesAndFeeds - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * dismissalIDToFeeds;                    //@synthesize dismissalIDToFeeds=_dismissalIDToFeeds - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)findBulletinMatch:(id)arg1 ;
-(void)removeBulletinMatch:(id)arg1 ;
-(void)cacheDismissalDictionaries:(id)arg1 dismissalIDs:(id)arg2 forFeeds:(unsigned long long)arg3 ;
-(id)purgeExpired;
-(NSMutableArray *)dismissalDictionariesAndFeeds;
-(NSMutableDictionary *)dismissalIDToFeeds;
@end
