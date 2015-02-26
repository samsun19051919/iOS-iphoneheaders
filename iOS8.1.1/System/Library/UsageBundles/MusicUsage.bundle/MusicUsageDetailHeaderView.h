/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MusicUsage/PSHeaderFooterView.h>

@class PSSpecifier, MusicUsageItem, UIImageView, UILabel, UIView, NSArray, NSLayoutConstraint;

@interface MusicUsageDetailHeaderView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	MusicUsageItem* _usageItem;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _sizeLabel;
	UILabel* _bottomLabel;
	UIView* _leadingView;
	NSArray* _imageSizeConstraints;
	NSLayoutConstraint* _leadingViewConstraint;
	NSLayoutConstraint* _subtitleLeadingConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;

}
-(void)configureForSpecifier:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(void)_updateContents;
-(void)dealloc;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(double)preferredHeightForWidth:(double)arg1 ;
@end
