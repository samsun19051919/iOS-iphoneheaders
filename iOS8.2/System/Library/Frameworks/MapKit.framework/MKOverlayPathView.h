/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:35 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayView.h>

@class UIColor, NSArray;

@interface MKOverlayPathView : MKOverlayView {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	float _lineWidth;
	int _lineJoin;
	int _lineCap;
	float _miterLimit;
	float _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;

}

@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) float lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) float miterLimit; 
@property (assign) float lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign) CGPathRef path; 
-(float)lineDashPhase;
-(NSArray *)lineDashPattern;
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(float)arg2 ;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(float)arg2 ;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)setLineDashPhase:(float)arg1 ;
-(void)invalidatePath;
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(void)dealloc;
-(CGPathRef)path;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)strokeColor;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(void)createPath;
-(int)lineJoin;
-(id)initWithOverlay:(id)arg1 ;
-(int)lineCap;
@end
