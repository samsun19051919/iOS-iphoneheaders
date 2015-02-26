/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVPlaybackControlsViewController.h>
#import <AVKit/MPVolumeControllerDelegate.h>

@class NSArray, NSString, UIView, UIButton, UILabel, AVScrubber, AVLoadingIndicatorView, MPVolumeSlider, NSMutableArray, NSLayoutConstraint, NSTimer, MPVolumeController;

@interface AVFullScreenPlaybackControlsViewController : AVPlaybackControlsViewController <MPVolumeControllerDelegate> {

	unsigned _showsDoneButton : 1;
	unsigned _showsScaleButton : 1;
	long long _scaleButtonType;
	unsigned _showsLoadingIndicator : 1;
	unsigned _playing : 1;
	unsigned _scrubberEnabled : 1;
	NSArray* _scrubberLoadedTimeRanges;
	unsigned _scanBackwardButtonEnabled : 1;
	unsigned _playPauseButtonEnabled : 1;
	unsigned _scanForwardButtonEnabled : 1;
	unsigned _showsStreamingControls : 1;
	unsigned _skipBackwardThirtySecondsButtonEnabled : 1;
	unsigned _gotoEndOfSeekableRangesButtonEnabled : 1;
	unsigned _showsMediaSelectionButton : 1;
	unsigned _showsExitFullScreenButton : 1;
	unsigned _showsVolumeSlider : 1;
	NSString* _elapsedTimeLabelText;
	float _scrubberMinimumValue;
	float _scrubberValue;
	float _scrubberMaximumValue;
	NSString* _remainingTimeLabelText;
	float _volumeSliderValue;
	UIView* _upperControlsSubContainerView;
	UIView* _lowerControlsLeftSubContainerView;
	UIView* _lowerControlsCenterSubContainerView;
	UIView* _lowerControlsRightSubContainerView;
	UIButton* _doneButton;
	UILabel* _elapsedTimeLabel;
	AVScrubber* _scrubber;
	UILabel* _remainingTimeLabel;
	UIButton* _scaleButton;
	UILabel* _liveStreamingLabel;
	AVLoadingIndicatorView* _loadingIndicatorView;
	UILabel* _scrubInstructionsTitleLabel;
	UILabel* _scrubInstructionsSubtitleLabel;
	MPVolumeSlider* _volumeSlider;
	UIButton* _skipBackwardThirtySecondsButton;
	UIButton* _scanBackwardButton;
	UIButton* _playPauseButton;
	UIButton* _scanForwardButton;
	UIButton* _gotoEndOfSeekableRangesButton;
	UIButton* _mediaSelectionButton;
	UIButton* _fullScreenButton;
	NSMutableArray* _layoutConstraints;
	NSLayoutConstraint* _topControlsContainerViewHeightLayoutConstraint;
	NSLayoutConstraint* _bottomControlsContainerViewHeightLayoutConstraint;
	unsigned _bottomControlsSingleRowLayoutPossible : 1;
	unsigned _showsScrubInstructions : 1;
	unsigned _userDidTapScanButton : 1;
	NSTimer* _beginScanningBackwardTimer;
	NSTimer* _beginScanningForwardTimer;
	unsigned _isScanningBackward : 1;
	unsigned _isScanningForward : 1;
	unsigned _controlsVisibilityHasBeenManagedBefore : 1;
	MPVolumeController* _volumeController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)showsExitFullScreenButton;
-(void)setShowsExitFullScreenButton:(BOOL)arg1 ;
-(void)setScrubberEnabled:(BOOL)arg1 ;
-(void)updateScrubberMinimumValue:(float)arg1 ;
-(void)updateScrubberMaximumValue:(float)arg1 ;
-(void)setScrubberLoadedTimeRanges:(id)arg1 ;
-(void)setScanBackwardButtonEnabled:(BOOL)arg1 ;
-(void)setPlayPauseButtonEnabled:(BOOL)arg1 ;
-(void)setScanForwardButtonEnabled:(BOOL)arg1 ;
-(void)setShowsStreamingControls:(BOOL)arg1 ;
-(void)setShowsMediaSelectionButton:(BOOL)arg1 ;
-(void)updateElapsedTimeLabel:(id)arg1 ;
-(void)updateRemainingTimeLabel:(id)arg1 ;
-(void)setSkipBackwardThirtySecondsButtonEnabled:(BOOL)arg1 ;
-(void)setGotoEndOfSeekableRangesButtonEnabled:(BOOL)arg1 ;
-(void)updateScrubberValue:(float)arg1 ;
-(BOOL)isScrubberEnabled;
-(id)scrubberLoadedTimeRanges;
-(BOOL)isScanBackwardButtonEnabled;
-(BOOL)isPlayPauseButtonEnabled;
-(BOOL)isScanForwardButtonEnabled;
-(BOOL)showsStreamingControls;
-(BOOL)isSkipBackwardThirtySecondsButtonEnabled;
-(BOOL)isGotoEndOfSeekableRangesButtonEnabled;
-(BOOL)showsScaleButton;
-(void)setShowsScaleButton:(BOOL)arg1 ;
-(long long)scaleButtonType;
-(void)setScaleButtonType:(long long)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsMediaSelectionButton;
-(void)_manageControlsVisibility;
-(void)_scrubberBeginTracking:(id)arg1 ;
-(void)_scrubberEndTracking:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchDown:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchUpInside:(id)arg1 ;
-(void)_skipBackwardThirtySecondsButtonTouchUpOutside:(id)arg1 ;
-(void)_scanBackwardButtonTouchDown:(id)arg1 ;
-(void)_scanBackwardButtonTouchUpInside:(id)arg1 ;
-(void)_scanBackwardButtonTouchUpOutside:(id)arg1 ;
-(void)_scanForwardButtonTouchDown:(id)arg1 ;
-(void)_scanForwardButtonTouchUpInside:(id)arg1 ;
-(void)_scanForwardButtonTouchUpOutside:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchDown:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchUpInside:(id)arg1 ;
-(void)_gotoEndOfSeekableRangesButtonTouchUpOutside:(id)arg1 ;
-(void)_fireBeginScanningBackwardTimer:(id)arg1 ;
-(void)_fireBeginScanningForwardTimer:(id)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(BOOL)showsDoneButton;
-(void)_updateScaleButton;
-(void)_showScrubInstructions;
-(void)_hideScrubInstructions;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)setShowsVolumeSlider:(BOOL)arg1 ;
-(BOOL)showsVolumeSlider;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)updateViewConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(double)scrubberWidth;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
@end
