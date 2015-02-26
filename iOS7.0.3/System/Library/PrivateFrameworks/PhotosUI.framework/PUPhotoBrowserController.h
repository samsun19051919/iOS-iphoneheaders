/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotoLibrary/PLPhotoBrowserControllerDelegate.h>
#import <PhotosUI/PUPhotosSharingViewControllerDelegate.h>
#import <PhotosUI/PUPhotosSharingTransitionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotosUI/PUCollectionViewLayoutProvider.h>
#import <PhotosUI/PUAvalancheReviewControllerDelegate.h>
#import <PhotoLibrary/PLDismissableViewController.h>

@protocol PUPhotoBrowserControllerDelegate;
@class PUPhotoBrowserControllerSpec, PLPhotoBrowserController, PUPhotoPinchGestureRecognizer, NSDictionary, _UINavigationControllerPalette, UIMovieScrubber, PLSlalomRegionEditor, UIView, PUPhotosSharingViewController, PUAvalancheReviewController, PLCloudSharedComment, PLManagedAsset, UIImage, PLLibraryImageDataProvider, UIColor;

@interface PUPhotoBrowserController : UIViewController <PLPhotoBrowserControllerDelegate, PUPhotosSharingViewControllerDelegate, PUPhotosSharingTransitionDelegate, UIGestureRecognizerDelegate, PUCollectionViewLayoutProvider, PUAvalancheReviewControllerDelegate, PLDismissableViewController> {

	PUPhotoBrowserControllerSpec* _spec;
	PLPhotoBrowserController* _legacyPhotoBrowserController;
	PUPhotoPinchGestureRecognizer* _photoPinchGestureRecognizer;
	NSDictionary* _toolbarButtons;
	NSDictionary* _navbarButtons;
	_UINavigationControllerPalette* _videoScrubberPalette;
	UIMovieScrubber* _videoScrubber;
	PLSlalomRegionEditor* _slalomRegionEditor;
	UIView* _videoScrubberClipView;
	BOOL _editingVideo;
	BOOL _editingComments;
	BOOL _browserIsPaging;
	BOOL _browserIsScrubbing;
	BOOL _isDeletingCurrentAsset;
	PUPhotosSharingViewController* _sharingViewController;
	PUAvalancheReviewController* _avalancheReviewController;
	BOOL _shouldShowOverlaysWhenViewAppears;
	BOOL _photoBackgroundHidden;
	BOOL _overlaysVisible;
	PLCloudSharedComment* _initialComment;
	<PUPhotoBrowserControllerDelegate>* _delegate;

}

@property (nonatomic,readonly) <PLAssetContainer> * currentAssetContainer; 
@property (nonatomic,readonly) PLManagedAsset * currentAsset; 
@property (nonatomic,readonly) <PLAssetContainerList> * assetContainerList; 
@property (assign,nonatomic) BOOL shouldShowOverlaysWhenViewAppears;                                                  //@synthesize shouldShowOverlaysWhenViewAppears=_shouldShowOverlaysWhenViewAppears - In the implementation block
@property (assign,nonatomic) BOOL shouldPlayVideoWhenViewAppears; 
@property (assign,nonatomic) BOOL deletesDuplicatesWhenNecessary; 
@property (nonatomic,retain) PLCloudSharedComment * initialComment;                                                   //@synthesize initialComment=_initialComment - In the implementation block
@property (assign,nonatomic,__weak) <PUPhotoBrowserControllerDelegate> * delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect photoFrame; 
@property (nonatomic,readonly) UIImage * photoImage; 
@property (nonatomic,readonly) PLManagedAsset * currentAssetForZoomTransition; 
@property (nonatomic,readonly) <PLAssetContainer> * currentAssetContainerForZoomTransition; 
@property (nonatomic,readonly) UIImage * photoImageForZoomTransition; 
@property (nonatomic,readonly) CGRect photoFrameForZoomTransition; 
@property (nonatomic,readonly) PLLibraryImageDataProvider * imageDataProvider; 
@property (nonatomic,readonly) UIColor * photoBackgroundColor; 
@property (assign,getter=isPhotoBackgroundHidden,nonatomic) BOOL photoBackgroundHidden;                               //@synthesize photoBackgroundHidden=_photoBackgroundHidden - In the implementation block
@property (assign,setter=_setOverlaysVisible:,getter=areOverlaysVisible,nonatomic) BOOL overlaysVisible;              //@synthesize overlaysVisible=_overlaysVisible - In the implementation block
@property (nonatomic,readonly) UIView * commentsView; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)_updateBackgroundColor;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)assetContainerDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(id)assetContainerList;
-(BOOL)deletesDuplicatesWhenNecessary;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(id)initWithSpec:(id)arg1 assetAtIndexPath:(id)arg2 inAssetContainerList:(id)arg3 ;
-(void)setDeletesDuplicatesWhenNecessary:(BOOL)arg1 ;
-(void)setDoneItem:(id)arg1 ;
-(void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1 ;
-(id)_pl_debugItems;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(void)setPhoto:(id)arg1 inCollection:(id)arg2 ;
-(BOOL)pu_wantsStatusBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)photosSharingViewControllerWillCancel:(id)arg1 ;
-(void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(BOOL)arg2 ;
-(void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(BOOL)arg3 ;
-(id)photosSharingTransition:(id)arg1 layoutForKeyAssetIndexPath:(id)arg2 inCollections:(id)arg3 ;
-(CGPoint)photosSharingTransition:(id)arg1 contentOffsetForKeyAssetIndexPath:(id)arg2 inCollections:(id)arg3 ;
-(id)photosSharingTransition:(id)arg1 viewForTransitionWithCollections:(id)arg2 ;
-(void)photosSharingTransition:(id)arg1 setVisibility:(BOOL)arg2 forKeyAssetIndexPath:(id)arg3 inCollections:(id)arg4 ;
-(id)photoImage;
-(void)_handlePhotoPinchGestureRecognizer:(id)arg1 ;
-(void)_updateVideoScrubberOffset;
-(id)_navbarButtonForIdentifier:(id)arg1 ;
-(id)currentAsset;
-(id)currentAssetForZoomTransition;
-(id)currentAssetContainer;
-(id)currentAssetContainerForZoomTransition;
-(BOOL)shouldPlayVideoWhenViewAppears;
-(void)setShouldPlayVideoWhenViewAppears:(BOOL)arg1 ;
-(CGRect)_photoFrameForTileController:(id)arg1 ;
-(id)_currentTileForZoomTransition;
-(id)_currentTile;
-(id)imageDataProvider;
-(BOOL)isPhotoBackgroundHidden;
-(id)photoBackgroundColor;
-(id)commentsView;
-(BOOL)_canShowCommentsForCurrentAsset;
-(void)_revealComments;
-(void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2 updateBarsVisibility:(BOOL)arg3 ;
-(void)_applicationWillEnterForgroundHandler:(id)arg1 ;
-(void)_setOverlaysVisibleForModalTransition:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_startSlideshow:(id)arg1 ;
-(void)_setOverlaysVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_enterReviewMode:(id)arg1 ;
-(void)_displayShareSheet:(id)arg1 ;
-(void)_deleteCurrentItem:(id)arg1 ;
-(void)_removeCurrentItem:(id)arg1 ;
-(void)_playCurrentMedia:(id)arg1 ;
-(void)_pauseCurrentMedia:(id)arg1 ;
-(void)_saveTrimmedVideo:(id)arg1 ;
-(void)_returnToCamera:(id)arg1 ;
-(void)_cancelTrimmedVideo:(id)arg1 ;
-(BOOL)_currentAssetIsMedia;
-(id)_toolbarButtonForIdentifier:(id)arg1 ;
-(id)_currentMediaItemIdentifier;
-(BOOL)_allowsEditingCurrentAsset;
-(id)_videoTrimSaveItem;
-(void)_setupStandardNavigationItem:(id)arg1 ;
-(void)_updateVideoViewAttachments:(id)arg1 ;
-(void)_animateInPalette;
-(void)_updateBarsForVideoEditingAnimated:(BOOL)arg1 ;
-(void)_updateBarsForCommentsEditingAnimated:(BOOL)arg1 ;
-(id)_standardRightNavigationItemsForCurrentAsset;
-(id)_standardToolbarItemsForCurrentAsset;
-(void)photoBrowserControllerWillBeginPaging:(id)arg1 ;
-(void)photoBrowserControllerDidEndPaging:(id)arg1 ;
-(void)_updateBarItemsAnimated:(BOOL)arg1 ;
-(void)_updateVideoScrubberToScrubberForCurrentVideoViewDelayed:(BOOL)arg1 ;
-(void)_setOverlaysVisible:(BOOL)arg1 ;
-(BOOL)_dismissLegacyPopovers;
-(void)libraryDidChange:(id)arg1 ;
-(void)_dismissSharingViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/ id)arg2 ;
-(void)_finalizeSharingViewControllerDismiss;
-(void)_prepareForSharingViewControllerDismiss:(id)arg1 ;
-(void)_showAirplayPicker:(id)arg1 ;
-(CGRect)photoFrame;
-(CGRect)_frameForItemAtIndexPath:(id)arg1 inCollections:(id)arg2 allowZoom:(BOOL)arg3 ;
-(void)didEndNavigationOperation:(int)arg1 inNavigationController:(id)arg2 ;
-(void)willBeginNavigationOperation:(int)arg1 inNavigationController:(id)arg2 ;
-(id)_collectionsForCurrentModalViewController;
-(int)_tileCountForCurrentModalViewController;
-(void)photoBrowserControllerDidScroll:(id)arg1 ;
-(id)photoBrowserControllerMakeNavigationBar:(id)arg1 ;
-(id)photoBrowserControllerMakeToolbar:(id)arg1 ;
-(void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2 ;
-(void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2 ;
-(void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(BOOL)arg2 ;
-(void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(BOOL)arg2 ;
-(void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1 ;
-(void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3 ;
-(void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2 ;
-(void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2 ;
-(void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2 ;
-(void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2 ;
-(void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2 ;
-(void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1 ;
-(void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1 ;
-(void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1 ;
-(BOOL)photoBrowserControllerOverlaysVisible:(id)arg1 ;
-(void)avalancheReviewControllerDidComplete:(id)arg1 ;
-(id)_legacyPhotoBrowserControllerForSubclassesOnly;
-(CGRect)photoFrameForZoomTransition;
-(id)photoImageForZoomTransition;
-(void)setPhotoBackgroundHidden:(BOOL)arg1 ;
-(BOOL)_currentAssetIsRemote;
-(void)photoBrowserController:(id)arg1 overlayVisibilityWillChangeTo:(BOOL)arg2 withDuration:(double)arg3 ;
-(BOOL)shouldShowOverlaysWhenViewAppears;
-(void)setShouldShowOverlaysWhenViewAppears:(BOOL)arg1 ;
-(id)initialComment;
-(void)setInitialComment:(id)arg1 ;
-(BOOL)areOverlaysVisible;
-(void).cxx_destruct;
@end
