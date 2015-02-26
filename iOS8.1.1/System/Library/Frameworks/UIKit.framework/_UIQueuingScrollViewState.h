/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UITransitionState.h>

@class UIView, UIViewController;

@interface _UIQueuingScrollViewState : _UITransitionState {

	UIView* _view;
	UIViewController* _viewController;
	BOOL _manual;

}

@property (nonatomic,readonly) UIView * view;                            //@synthesize view=_view - In the implementation block
@property (getter=isManual,nonatomic,readonly) BOOL manual;              //@synthesize manual=_manual - In the implementation block
-(void)dealloc;
-(id)description;
-(UIView *)view;
-(BOOL)isCompatibleWithTransitionInDirection:(long long)arg1 ;
-(id)initWithTransitionDirection:(long long)arg1 view:(id)arg2 manual:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isManual;
@end
