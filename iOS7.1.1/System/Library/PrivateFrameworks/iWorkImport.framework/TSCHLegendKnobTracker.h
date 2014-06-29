/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:34 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHKnobTracker.h>

@interface TSCHLegendKnobTracker : TSCHKnobTracker {

	CGPoint mDragStartPoint;
	CGPoint mLastDragDelta;
	CGPoint mLastDragPoint;
	CGPoint mAnimationPoint;
	CGRect mDragStartLegendFrameInChartLayoutSpace;
	CGRect mDragStartLegendFrameInNaturalSpace;

}

@property (nonatomic,readonly) bool isPositionRelative; 
@property (assign,nonatomic) CGPoint lastDragDelta; 
-(id)initWithRep:(id)arg1 knob:(id)arg2 ;
-(void)beginMovingKnob;
-(void)p_updateDrawableLayoutValues;
-(void)endMovingKnob;
-(bool)isPositionRelative;
-(CGPoint)knobDragPosition;
-(CGRect)priorLegendFrameInChartLayoutSpace;
-(void)p_hideHUDToPoint:(CGPoint)arg1 ;
-(void)p_hideHUD;
-(bool)shouldHideSelectionHighlight;
-(void)moveKnobToRepPosition:(CGPoint)arg1 ;
-(CGPoint)p_dragPoint;
-(CGPoint)p_constrainedKnobDragPosition;
-(id)p_legendKnob;
-(CGPoint)p_currentDragDelta;
-(bool)p_isResizeKnob;
-(void)p_updateHUDWithPoint:(CGPoint)arg1 delta:(CGPoint)arg2 shouldHide:(bool)arg3 ;
-(bool)shouldHideOtherKnobs;
-(CGPoint)lastDragDelta;
-(void)setLastDragDelta:(CGPoint)arg1 ;
-(void)dealloc;
-(double)delay;
@end
