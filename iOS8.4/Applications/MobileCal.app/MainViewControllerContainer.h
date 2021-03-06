/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileCal/MainViewController.h>
#import <UIKit/UITraitEnvironment.h>

@protocol MainViewController;
@class UITraitCollection, UIViewController, CalendarModel, NSString;

@interface MainViewControllerContainer : UIViewController <MainViewController, UITraitEnvironment> {

	UIViewController*<MainViewController> _currentChildViewController;
	UIViewController*<MainViewController> _emptyChildViewController;
	char _animatingViewTransition;
	CalendarModel* _model;

}

@property (assign,nonatomic) char animatingViewTransition;                                     //@synthesize animatingViewTransition=_animatingViewTransition - In the implementation block
@property (nonatomic,retain) CalendarModel * model;                                            //@synthesize model=_model - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char shouldPresentEventDetailsForSelectedOccurrence; 
@property (nonatomic,readonly) UITraitCollection * traitCollection; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 ;
-(void)selectDate:(id)arg1 animated:(char)arg2 ;
-(void)updateBackButtonToDate:(id)arg1 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 ;
-(char)allowsOverriddenRightNavigationBarItems;
-(char)allowsOverriddenToolbarItems;
-(char)isTodayVisible;
-(char)shouldPushNextLevelViewControllerWhenTodayIsVisible;
-(void)presentDetailsViewWhenReady:(id)arg1 animated:(char)arg2 ;
-(void)enableGestureRecognizers;
-(void)disableGestureRecognizers;
-(float)leftBarButtonBlankFixedSpaceWidth;
-(void)updatePalette:(id)arg1 ;
-(id)bestDateForNewEvent;
-(char)showEventDetailsWhenNewEventAdded;
-(id)toolBarTintColor;
-(int)supportedToggleMode;
-(id)navigationBarDisplayedDateString;
-(void)updateNavigationBarDisplayedDateString;
-(void)invalidateBackButtonDate;
-(char)shouldUpdateOwnBackButtonWhenTopViewController;
-(id)updateBackButtonWhileTopViewControllerToDate:(id)arg1 ;
-(id)popoverSourceViewForEventDetails:(id)arg1 ;
-(CGRect)popoverSourceRectForEventDetails:(id)arg1 ;
-(char)shouldRespondToApplicationDidBecomeActiveStateChange;
-(void)setShouldRespondToApplicationDidBecomeActiveStateChange:(char)arg1 ;
-(void)showNowAnimated:(char)arg1 ;
-(char)shouldPresentEventDetailsForSelectedOccurrence;
-(id)currentChildViewController;
-(id)childViewControllerForCompactWidthRegularHeight;
-(id)pushedNextLevelMainViewControllerContainerAnimated:(char)arg1 ;
-(id)childViewControllerForUnknownTraits;
-(id)childViewControllerForRegularWidthCompactHeight;
-(id)childViewControllerForRegularWidthRegularHeight;
-(Class)childViewControllerClassForTraits:(id)arg1 ;
-(char)childViewControllerNeedsToBeInsettedFromNavigationElements;
-(void)_updateForCurrentTraits;
-(void)setupForViewAppearance;
-(char)currentChildViewControllerIsLoaded;
-(char)animatingViewTransition;
-(id)_childViewControllerForTraitCollection:(id)arg1 ;
-(id)emptyChildViewController;
-(char)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
-(void)_removeChildViewControllerForCurrentTraits;
-(void)_addChildViewControllerForCurrentTraits;
-(id)childViewControllerForCompactWidthCompactHeight;
-(id)_todaysDate;
-(void)showTodayAnimated:(char)arg1 ;
-(void)setAnimatingViewTransition:(char)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(UITraitCollection *)traitCollection;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(CalendarModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(CalendarModel *)arg1 ;
-(id)navigationBarTintColor;
@end

