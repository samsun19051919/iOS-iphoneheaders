/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:15:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpeakThis/SpeakThis-Structs.h>
#import <UIKit/UIView.h>

@protocol AXSpeakOverlayControlBarDelegate;
@class UIButton, UILabel, UIView, NSArray;

@interface AXSpeakOverlayControlBar : UIView {

	UIButton* _playPauseButton;
	UIButton* _tabModeButton;
	UIButton* _slowdownButton;
	UIButton* _stopButton;
	UIButton* _rewindButton;
	UIButton* _forwardButton;
	UIButton* _speedupButton;
	UILabel* _header;
	UIView* _dragView;
	BOOL _inTabMode;
	CGPoint _panGestureAnchor;
	id<AXSpeakOverlayControlBarDelegate> _delegate;
	NSArray* _minimizedConstraints;
	NSArray* _maximizedConstraints;

}

@property (assign,nonatomic,__weak) id<AXSpeakOverlayControlBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * minimizedConstraints;                                    //@synthesize minimizedConstraints=_minimizedConstraints - In the implementation block
@property (nonatomic,retain) NSArray * maximizedConstraints;                                    //@synthesize maximizedConstraints=_maximizedConstraints - In the implementation block
+(CGSize)nubbitSize;
+(CGSize)controlBarSize;
-(void)changeToPauseButton;
-(void)_stopButtonPressed;
-(void)_addButtonConstraints:(id)arg1 ;
-(void)changeToResumeButton;
-(NSArray *)minimizedConstraints;
-(void)_tabModeButtonPressed;
-(void)setMinimizedConstraints:(NSArray *)arg1 ;
-(NSArray *)maximizedConstraints;
-(void)setMaximizedConstraints:(NSArray *)arg1 ;
-(void)_updateAccessibilityElements;
-(void)_slowDownButtonPressed;
-(void)_loadButtonsAndConstraints:(id)arg1 ;
-(void)_playPauseButtonPressed;
-(void)_rewindButtonPressed;
-(void)_speedUpButtonPressed;
-(void)_fastForwardButtonPressed;
-(void)setInTabMode:(BOOL)arg1 ;
-(void)setTitleHeader:(id)arg1 ;
-(id)_squareButtons;
-(void)_headerTapped:(id)arg1 ;
-(id)_roundButtons;
-(id)_buttons;
-(void)_updateButton:(id)arg1 withImageName:(id)arg2 accessibilityLabel:(id)arg3 ;
-(id)_addButtonWithImageName:(id)arg1 accessibilityLabel:(id)arg2 round:(BOOL)arg3 action:(SEL)arg4 ;
-(void)_handlePan:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<AXSpeakOverlayControlBarDelegate>)arg1 ;
-(id<AXSpeakOverlayControlBarDelegate>)delegate;
@end
