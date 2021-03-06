/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSCopying.h>

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {

	int innerShadowBlendMode;
	int outerShadowBlendMode;
	UIColor* embossHighlightColor;
	UIColor* embossShadowColor;
	double embossSize;
	UIColor* innerShadowColor;
	double innerShadowBlur;
	UIColor* outerShadowColor;
	double outerShadowBlur;
	UIColor* topGradientColor;
	UIColor* bottomGradientColor;
	double innerOpacity;
	CGPoint innerShadowOffset;
	CGPoint outerShadowOffset;

}

@property (nonatomic,retain) UIColor * embossHighlightColor; 
@property (nonatomic,retain) UIColor * embossShadowColor; 
@property (assign,nonatomic) double embossSize; 
@property (nonatomic,retain) UIColor * innerShadowColor; 
@property (assign,nonatomic) CGPoint innerShadowOffset; 
@property (assign,nonatomic) double innerShadowBlur; 
@property (assign,nonatomic) int innerShadowBlendMode; 
@property (nonatomic,retain) UIColor * outerShadowColor; 
@property (assign,nonatomic) CGPoint outerShadowOffset; 
@property (assign,nonatomic) double outerShadowBlur; 
@property (assign,nonatomic) int outerShadowBlendMode; 
@property (nonatomic,retain) UIColor * topGradientColor; 
@property (nonatomic,retain) UIColor * bottomGradientColor; 
@property (assign,nonatomic) double innerOpacity; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
+(id)old2xLetterpressStyle;
+(id)defaultLetterpressStyle;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEmbossHighlightColor:(UIColor *)arg1 ;
-(void)setEmbossShadowColor:(UIColor *)arg1 ;
-(void)setEmbossSize:(double)arg1 ;
-(void)setInnerShadowColor:(UIColor *)arg1 ;
-(void)setInnerShadowOffset:(CGPoint)arg1 ;
-(void)setInnerShadowBlur:(double)arg1 ;
-(void)setInnerShadowBlendMode:(int)arg1 ;
-(void)setOuterShadowColor:(UIColor *)arg1 ;
-(void)setOuterShadowOffset:(CGPoint)arg1 ;
-(void)setOuterShadowBlur:(double)arg1 ;
-(void)setOuterShadowBlendMode:(int)arg1 ;
-(void)setTopGradientColor:(UIColor *)arg1 ;
-(void)setBottomGradientColor:(UIColor *)arg1 ;
-(void)setInnerOpacity:(double)arg1 ;
-(UIColor *)embossHighlightColor;
-(UIColor *)embossShadowColor;
-(double)embossSize;
-(UIColor *)innerShadowColor;
-(CGPoint)innerShadowOffset;
-(double)innerShadowBlur;
-(int)innerShadowBlendMode;
-(UIColor *)outerShadowColor;
-(CGPoint)outerShadowOffset;
-(double)outerShadowBlur;
-(int)outerShadowBlendMode;
-(UIColor *)topGradientColor;
-(UIColor *)bottomGradientColor;
-(double)innerOpacity;
-(UIEdgeInsets)edgeInsets;
@end

