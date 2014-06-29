/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:48 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBGradientView.h>

@class UIView, SBHighlightView, UIColor;

@interface SBNewsstandShelfView : SBGradientView {

	UIView* _tintView;
	float _tintAlpha;
	SBHighlightView* _highlightView;
	unsigned _shelfIndex;

}

@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) float tintAlpha; 
@property (assign,nonatomic) unsigned shelfIndex;              //@synthesize shelfIndex=_shelfIndex - In the implementation block
-(float)tintAlpha;
-(void)setTintAlpha:(float)arg1 ;
-(void)setShelfIndex:(unsigned)arg1 ;
-(unsigned)shelfIndex;
-(void)dealloc;
-(void)layoutSubviews;
-(id)tintColor;
-(void)setTintColor:(id)arg1 ;
@end
