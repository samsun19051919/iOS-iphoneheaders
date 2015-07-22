/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <MobileSafari/_UINavigationInteractiveTransitionBaseDelegate.h>

@protocol NavigationSnapshotControllerDelegate;
@class UIView, UIImageView, NSTimer, NSDate, _UINavigationInteractiveTransitionBase, NSString;

@interface NavigationSnapshotController : NSObject <UIGestureRecognizerDelegate, _UINavigationInteractiveTransitionBaseDelegate> {

	UIView* _webContentView;
	UIView* _parentView;
	UIImageView* _leftShadow;
	UIView* _dimmingView;
	UIView* _transitionContainerView;
	UIView* _presentedSnapshot;
	NSTimer* _snapshotExpirationTimer;
	NSTimer* _snapshotDelayDuringLoadTimer;
	NSDate* _startTimeOfDelayDuringLoadTimer;
	NSTimer* _samePageNavigationExpirationTimer;
	NSDate* _startTimeOfSamePageNavigation;
	char _showWebContentAfterNavigationAnimation;
	_UINavigationInteractiveTransitionBase* _backTransitionController;
	_UINavigationInteractiveTransitionBase* _forwardTransitionController;
	char _navigationGestureActive;
	char _webContentHidden;
	id<NavigationSnapshotControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NavigationSnapshotControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isNavigationGestureActive,nonatomic,readonly) char navigationGestureActive;              //@synthesize navigationGestureActive=_navigationGestureActive - In the implementation block
@property (getter=isWebContentHidden,nonatomic,readonly) char webContentHidden;                            //@synthesize webContentHidden=_webContentHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSnapshotParentView:(id)arg1 webContentView:(id)arg2 gestureRecognizerView:(id)arg3 ;
-(char)isNavigationGestureActive;
-(char)isWebContentHidden;
-(void)setSnapshot:(id)arg1 forTabDocument:(id)arg2 ;
-(void)showWebContentHiddenBySamePageNavigation;
-(void)showWebContentHiddenByNavigationAnimated:(char)arg1 ;
-(void)snapshotDocumentDidFinishLoading;
-(void)showWebContentHiddenByNavigationWithDelayHeuristics;
-(void)_invalidateAllSnapshotTimers;
-(void)_showWebContentHidingPresentedSnapshotAnimated:(char)arg1 ;
-(char)_shouldStartSnapshotDelayDuringLoadTimer;
-(void)_startSnapshotDelayDuringLoadTimer;
-(void)_invalidateSamePageNavigationExpirationTimer;
-(void)_startSamePageNavigationExpirationTimer;
-(void)_samePageNavigationExpirationTimerFired:(id)arg1 ;
-(void)_removeNavigationSnapshot:(id)arg1 ;
-(void)_invalidateSnapshotDelayDuringLoadTimer;
-(void)_snapshotDelayDuringLoadTimerFired:(id)arg1 ;
-(void)_invalidateSnapshotExpirationTimer;
-(void)_snapshotExpirationTimerFired:(id)arg1 ;
-(int)_historyPositionForTransitionController:(id)arg1 ;
-(id)_toViewForTransitionToPosition:(int)arg1 ;
-(id)_topViewBeforeGestureBegan;
-(void)transitionDidComplete:(char)arg1 toPosition:(int)arg2 fromView:(id)arg3 toView:(id)arg4 ;
-(id)_snapshotForPosition:(int)arg1 ;
-(float)_screenCenterX;
-(void)_startSnapshotExpirationTimer;
-(void)dealloc;
-(void)setDelegate:(id<NavigationSnapshotControllerDelegate>)arg1 ;
-(id<NavigationSnapshotControllerDelegate>)delegate;
-(id)gestureRecognizerForInteractiveTransition:(id)arg1 WithTarget:(id)arg2 action:(SEL)arg3 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(char)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg3 ;
-(char)shouldBeginInteractiveTransition:(id)arg1 ;
-(char)interactiveTransition:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
@end
