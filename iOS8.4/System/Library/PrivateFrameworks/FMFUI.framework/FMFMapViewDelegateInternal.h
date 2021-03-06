/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMFUI/FMFUI-Structs.h>
#import <FMFUI/MKMapViewDelegate.h>

@protocol FMFMapViewDelegateInternalDelegate;
@class FMFWildcardGestureRecognizer, NSString;

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate> {

	BOOL _respondingToUserTouch;
	id<FMFMapViewDelegateInternalDelegate> _delegate;
	FMFWildcardGestureRecognizer* _gr;

}

@property (assign,nonatomic,__weak) id<FMFMapViewDelegateInternalDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL respondingToUserTouch;                                          //@synthesize respondingToUserTouch=_respondingToUserTouch - In the implementation block
@property (nonatomic,retain) FMFWildcardGestureRecognizer * gr;                                   //@synthesize gr=_gr - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)setDelegate:(id<FMFMapViewDelegateInternalDelegate>)arg1 ;
-(id<FMFMapViewDelegateInternalDelegate>)delegate;
-(void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3 ;
-(id)initWithDelegate:(id)arg1 mapView:(id)arg2 ;
-(void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2 ;
-(void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2 ;
-(void)setGr:(FMFWildcardGestureRecognizer *)arg1 ;
-(void)setRespondingToUserTouch:(BOOL)arg1 ;
-(void)endTouches;
-(id)accuracyCircleForLocation:(id)arg1 ;
-(void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2 ;
-(BOOL)respondingToUserTouch;
-(id)fmfOverlayColorSatellite;
-(id)fmfOverlayColor;
-(void)_moveCenterByOffset:(CGPoint)arg1 from:(SCD_Struct_FM0)arg2 mapView:(id)arg3 ;
-(BOOL)regionIsValid:(SCD_Struct_FM1)arg1 ;
-(UIEdgeInsets)edgeInsetsWithMinApplied:(UIEdgeInsets)arg1 ;
-(FMFWildcardGestureRecognizer *)gr;
@end

