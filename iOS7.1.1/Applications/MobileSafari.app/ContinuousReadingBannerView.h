/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UIView, ContinuousReadingItem, UILabel, UIImageView, NSString, UIImage;

@interface ContinuousReadingBannerView : UIView {

	UIView* _topHairline;
	UIView* _bottomHairline;
	ContinuousReadingItem* _continuousReadingItem;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _extraTitleLabel;
	UIImageView* _imageView;

}

@property (nonatomic,readonly) ContinuousReadingItem * continuousReadingItem;              //@synthesize continuousReadingItem=_continuousReadingItem - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * extraTitleInfo; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * extraTitleLabel;                                    //@synthesize extraTitleLabel=_extraTitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                      //@synthesize imageView=_imageView - In the implementation block
+(id)makeHairlineSeparator;
-(id)continuousReadingItem;
-(id)initWithContinuousReadingItem:(id)arg1 ;
-(void)_setUpImage;
-(void)_updateImage;
-(float)_textBaseline;
-(id)extraTitleLabel;
-(id)_topHairline;
-(id)_bottomHairline;
-(float)_bannerHeight;
-(id)extraTitleInfo;
-(void)setExtraTitleInfo:(id)arg1 ;
-(CGSize)_scaledImageSize;
-(BOOL)_hasExtraLine;
-(void)setExtraTitleLabel:(id)arg1 ;
-(void)setSubtitleLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)image;
-(id)title;
-(id)titleLabel;
-(id)subtitleLabel;
-(id)imageView;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setImageView:(id)arg1 ;
-(void)setTitleLabel:(id)arg1 ;
-(void)_updateLabels;
@end
