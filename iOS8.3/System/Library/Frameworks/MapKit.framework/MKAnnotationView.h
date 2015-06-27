/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <MapKit/MKAnnotationRepresentation.h>
#import <MapKit/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, MKAnnotationManager, UICalloutView, UIView, NSString, UIImage, VKAnchorWrapper;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {

	char _customTransformApplied;
	char _internalTransformApplied;
	char _animatingToCoordinate;
	char _tracking;
	SCD_Struct_MK1 _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	float _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	float _mapRotationRadians;
	char _explicitlyHidden;
	char _hiddenForOffscreen;
	char _hiddenForInvalidPoint;
	float _mapPitchRadians;
	unsigned _mapDisplayStyle;
	MKAnnotationManager* _annotationManager;
	id<MKAnnotation> _annotation;
	UICalloutView* _calloutView;
	UIView* _leftCalloutAccessoryView;
	UIView* _rightCalloutAccessoryView;
	UIView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	UIImage* _image;
	unsigned _mapType;
	unsigned _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	unsigned _dragState;
	/*^block*/id _calloutHitTest;
	struct {
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
	}  _flags;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;

}

@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,nonatomic) char canShowCallout; 
@property (nonatomic,retain) UIView * leftCalloutAccessoryView;                                                                          //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) UIView * rightCalloutAccessoryView;                                                                         //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) char draggable; 
@property (assign,nonatomic) unsigned dragState; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (nonatomic,retain) UIView * detailCalloutAccessoryView;                                                                        //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) SCD_Struct_MK1 _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                  //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                  //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) char _animatingToCoordinate;              //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) char _tracking;                                                     //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) unsigned mapDisplayStyle;                               //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                  //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                 //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) float mapRotationRadians;                         //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) float mapPitchRadians;                                  //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (nonatomic,copy) id _calloutHitTest;                                                                                           //@synthesize calloutHitTest=_calloutHitTest - In the implementation block
@property (assign,setter=_setAnnotationManager:,nonatomic,__weak) MKAnnotationManager * _annotationManager;                              //@synthesize annotationManager=_annotationManager - In the implementation block
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (assign,setter=_setHiddenForInvalidPoint:,getter=_isHiddenForInvalidPoint,nonatomic) char hiddenForInvalidPoint;               //@synthesize hiddenForInvalidPoint=_hiddenForInvalidPoint - In the implementation block
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                         //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
+(char)_followsTerrain;
+(id)currentLocationTitle;
+(id)droppedPinTitle;
+(id)_disclosureCalloutButton;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned)_zIndex;
+(unsigned)_selectedZIndex;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(id)_vkMarker;
-(unsigned)_mapDisplayStyle;
-(void)_setMapDisplayStyle:(unsigned)arg1 ;
-(MKAnnotationManager *)_annotationManager;
-(id)_annotationContainer;
-(unsigned)_mapType;
-(SCD_Struct_MK1)_presentationCoordinate;
-(void)_setRouteMatch:(id)arg1 ;
-(void)_setAnnotationManager:(id)arg1 ;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)leftCalloutAccessoryView;
-(UIView *)rightCalloutAccessoryView;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)detailCalloutAccessoryView;
-(void)_setHiddenForOffscreen:(char)arg1 ;
-(void)_setCalloutView:(id)arg1 ;
-(void)set_calloutHitTest:(id)arg1 ;
-(id)_calloutView;
-(CGPoint)leftCalloutOffset;
-(void)_setHiddenForInvalidPoint:(char)arg1 ;
-(void)_updateFromMap;
-(void)_didUpdatePosition;
-(void)_setMapRotationRadians:(float)arg1 ;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)_setMapType:(unsigned)arg1 ;
-(void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2 ;
-(id)_contentLayer;
-(void)_resetZIndex;
-(void)_setZIndex:(unsigned)arg1 ;
-(CGPoint)_draggingDropOffset;
-(CGRect)_significantBounds;
-(id)_presentationCoordinateChangedCallback;
-(void)_setZIndex:(unsigned)arg1 notify:(char)arg2 ;
-(void)_userTrackingModeDidChange:(id)arg1 ;
-(unsigned)_orientationCount;
-(char)_hasAlternateOrientation;
-(void)_setPresentationCoordinate:(SCD_Struct_MK1)arg1 ;
-(void)_setAnimatingToCoordinate:(char)arg1 ;
-(CGRect)_mapkit_visibleRect;
-(CGRect)_significantFrame;
-(char)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(char)arg1 ;
-(char)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(char)arg1 ;
-(void)_resetZIndexNotify:(char)arg1 ;
-(void)_enableRotationForHeadingMode:(float)arg1 ;
-(void)_transitionFrom:(int)arg1 to:(int)arg2 duration:(double)arg3 ;
-(char)_canChangeOrientation;
-(float)_pointsForDistance:(double)arg1 ;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(double)_presentationCourse;
-(void)_setPresentationCourse:(double)arg1 ;
-(char)_isAnimatingToCoordinate;
-(char)_isTracking;
-(id)_calloutHitTest;
-(CGPoint)rightCalloutOffset;
-(GEORouteMatch *)_routeMatch;
-(float)_mapRotationRadians;
-(float)_mapPitchRadians;
-(void)_setMapPitchRadians:(float)arg1 ;
-(char)_isHiddenForInvalidPoint;
-(void)_setTracking:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHidden:(char)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(UIImage *)image;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(NSString *)reuseIdentifier;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(char)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(char)arg1 ;
-(id)_containerView;
-(char)isPersistent;
-(VKAnchorWrapper *)anchor;
-(id<MKAnnotation>)annotation;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(unsigned)_zIndex;
-(SCD_Struct_MK1)coordinate;
-(void)setDragState:(unsigned)arg1 animated:(char)arg2 ;
-(CGPoint)calloutOffset;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDragState:(unsigned)arg1 ;
-(char)canShowCallout;
-(void)setCanShowCallout:(char)arg1 ;
-(unsigned)dragState;
-(char)isDraggable;
-(void)setDraggable:(char)arg1 ;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(CGPoint)centerOffset;
@end
