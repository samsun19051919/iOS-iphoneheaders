/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/MobileTimer.axbundle/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UILabel;

@interface UIAccessibilityElementStopwatchTime : UIAccessibilityElement {

	UILabel* _label;
	int _timeType;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int timeType;                 //@synthesize timeType=_timeType - In the implementation block
-(int)timeType;
-(void)setTimeType:(int)arg1 ;
-(void)dealloc;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
@end
