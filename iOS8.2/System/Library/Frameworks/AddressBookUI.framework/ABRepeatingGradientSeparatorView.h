/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSArray;

@interface ABRepeatingGradientSeparatorView : UIView {

	UIColor* _startColor;
	UIColor* _endColor;
	int _lineCount;

}

@property (nonatomic,retain) UIColor * startColor;                    //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,retain) UIColor * endColor;                      //@synthesize endColor=_endColor - In the implementation block
@property (assign,nonatomic) int lineCount;                           //@synthesize lineCount=_lineCount - In the implementation block
@property (nonatomic,readonly) NSArray * gradientColors; 
-(int)lineCount;
-(void)setLineCount:(int)arg1 ;
-(void)_updateGradients;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(NSArray *)gradientColors;
-(void)setStartColor:(UIColor *)arg1 ;
-(void)setEndColor:(UIColor *)arg1 ;
-(UIColor *)startColor;
-(UIColor *)endColor;
@end
