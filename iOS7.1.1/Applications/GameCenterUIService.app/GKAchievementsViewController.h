/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKCollectionViewController.h>

@class GKGameRecord, NSArray;

@interface GKAchievementsViewController : GKCollectionViewController {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                 //@synthesize achievements=_achievements - In the implementation block
-(id)initWithGameRecord:(id)arg1 ;
-(void)showAchievementDetails:(id)arg1 ;
-(id)achievements;
-(void)setAchievements:(id)arg1 ;
-(void)configureDataSource;
-(id)gameRecord;
-(void)setGameRecord:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
@end
