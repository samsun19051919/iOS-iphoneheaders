/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIModalItemBackgroundView.h>

@class _UIBackdropView, UIImageView;

@interface _UIModalItemAlertBackgroundView : _UIModalItemBackgroundView {

	_UIBackdropView* _effectView;
	UIImageView* _fillingView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_gradientImageForBoundsSize:(CGSize)arg1 withInnerColor:(id)arg2 outerColor:(id)arg3 ;
@end
