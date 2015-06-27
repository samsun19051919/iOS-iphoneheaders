/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLSlideshowPluginDelegate;
#import <PhotoLibrary/PhotoLibrary-Structs.h>
@class NSArray, PLManagedAsset;

@interface PLSlideshowPlugin : NSObject {

	id<PLSlideshowPluginDelegate> _delegate;
	NSObject* _album;
	NSArray* _albumAssets;
	double _secondsPerSlide;
	char _shuffleAlbum;
	char _shouldRepeat;

}

@property (assign,nonatomic) id<PLSlideshowPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album; 
@property (nonatomic,retain) NSArray * albumAssets;                               //@synthesize albumAssets=_albumAssets - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPhotos; 
@property (nonatomic,readonly) PLManagedAsset * currentPhoto; 
@property (assign,nonatomic) double secondsPerSlide;                              //@synthesize secondsPerSlide=_secondsPerSlide - In the implementation block
@property (assign,nonatomic) char shuffleAlbum;                                   //@synthesize shuffleAlbum=_shuffleAlbum - In the implementation block
@property (assign,nonatomic) char shouldRepeat;                                   //@synthesize shouldRepeat=_shouldRepeat - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<PLSlideshowPluginDelegate>)arg1 ;
-(id<PLSlideshowPluginDelegate>)delegate;
-(double)secondsPerSlide;
-(void)slideshowViewDidDisappear;
-(void)stopSlideshow;
-(char)shouldRepeat;
-(id)newSlideshowView;
-(void)slideshowViewWillAppear;
-(void)slideshowViewDidAppear;
-(void)pauseSlideshow;
-(void)setSecondsPerSlide:(double)arg1 ;
-(void)setShuffleAlbum:(char)arg1 ;
-(void)setShouldRepeat:(char)arg1 ;
-(void)setAlbumAssets:(NSArray *)arg1 ;
-(PLManagedAsset *)currentPhoto;
-(NSArray *)displayedPhotos;
-(void)resumeSlideshow;
-(NSArray *)albumAssets;
-(char)shuffleAlbum;
-(NSObject*<PLAlbumProtocol>)album;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
@end
