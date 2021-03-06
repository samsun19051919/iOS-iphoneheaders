/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionView.h>

@class SBControlCenterSeparatorView, SBCCButtonLikeSectionView;

@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView {

	SBControlCenterSeparatorView* _separatorView;
	float _separatorWidth;
	BOOL _leftHidden;
	BOOL _rightHidden;
	SBCCButtonLikeSectionView* _leftSection;
	SBCCButtonLikeSectionView* _rightSection;

}

@property (assign,nonatomic) SBCCButtonLikeSectionView * leftSection;               //@synthesize leftSection=_leftSection - In the implementation block
@property (assign,nonatomic) SBCCButtonLikeSectionView * rightSection;              //@synthesize rightSection=_rightSection - In the implementation block
-(void)setLeftSection:(id)arg1 ;
-(void)setRightSection:(id)arg1 ;
-(void)setLeftSectionHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRightSectionHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateSeparatorVisibility;
-(void)_updateLabelParameters;
-(BOOL)_useLandscapeBehavior;
-(void)_relayoutAnimated:(BOOL)arg1 ;
-(CGRect)_frameForSectionSlot:(int)arg1 ;
-(id)_viewForSectionSlot:(int)arg1 ;
-(id)leftSection;
-(id)rightSection;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGRect)_separatorFrame;
@end

