/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <Game Center~iphone/GKGameProfileHeaderView.h>

@class GKFacebookLikeButton, GKRatingControl;

@interface GKGameProfileHeaderViewOwnedPad : GKGameProfileHeaderView {

	BOOL _playerIsUnderage;
	GKFacebookLikeButton* _likeButton;
	GKRatingControl* _ratingControl;

}

@property (nonatomic,retain) GKFacebookLikeButton * likeButton;              //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) GKRatingControl * ratingControl;                //@synthesize ratingControl=_ratingControl - In the implementation block
@property (assign,nonatomic) BOOL playerIsUnderage;                          //@synthesize playerIsUnderage=_playerIsUnderage - In the implementation block
-(void)rateGame;
-(void)updateRating;
-(id)likeButton;
-(void)setLikeButton:(id)arg1 ;
-(void)setRatingControl:(id)arg1 ;
-(BOOL)playerIsUnderage;
-(void)setPlayerIsUnderage:(BOOL)arg1 ;
-(void)didUpdateModel;
-(void)applyConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)ratingControl;
@end
