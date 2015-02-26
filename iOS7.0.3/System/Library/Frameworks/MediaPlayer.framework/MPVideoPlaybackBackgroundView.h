/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, MPAVController;

@interface MPVideoPlaybackBackgroundView : UIView {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIEdgeInsets _edgeInsets;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(id)_imageNamed:(id)arg1 ;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_videoViewDidMoveToWindow:(id)arg1 ;
-(void)_updateDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
