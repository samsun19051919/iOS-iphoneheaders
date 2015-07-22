/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBPanGestureRecognizer.h>
#import <SpringBoard/_UIScreenEdgePanRecognizerDelegate.h>

@class _UIScreenEdgePanRecognizer, _UIScreenEdgePanRecognizerSettings, NSString;

@interface SBOffscreenSwipeGestureRecognizer : SBPanGestureRecognizer <_UIScreenEdgePanRecognizerDelegate> {

	unsigned long long m_offscreenEdge;
	BOOL m_shouldUseUIKitHeuristics;
	double m_edgeMargin;
	double m_falseEdge;
	int m_touchesChecked;
	CGPoint m_firstTouch;
	double m_edgeCenter;
	double m_allowableDistanceFromEdgeCenter;
	BOOL m_requiresSecondTouchInRange;
	_UIScreenEdgePanRecognizer* m_recognizer;

}

@property (assign,nonatomic) BOOL shouldUseUIKitHeuristics; 
@property (assign,nonatomic) double edgeMargin; 
@property (assign,nonatomic) double falseEdge; 
@property (assign,nonatomic) double allowableDistanceFromEdgeCenter; 
@property (assign,nonatomic) BOOL requiresSecondTouchInRange; 
@property (nonatomic,retain) _UIScreenEdgePanRecognizerSettings * settings; 
@property (assign,nonatomic) double edgeCenter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)reloadDefaults;
-(void)setAllowableDistanceFromEdgeCenter:(double)arg1 ;
-(void)updateForBeganOrMovedTouches:(SBGestureContextRef)arg1 ;
-(BOOL)_firstTouchInRange:(const SCD_Struct_SB32*)arg1 ;
-(void)setEdgeCenter:(double)arg1 ;
-(void)_updateAnimationDistanceAndEdgeCenter;
-(BOOL)firstTouchQualifies:(const SCD_Struct_SB32*)arg1 ;
-(BOOL)secondTouchQualifies:(const SCD_Struct_SB32*)arg1 ;
-(id)initForOffscreenEdge:(unsigned long long)arg1 ;
-(BOOL)isHandlingLongPress;
-(void)setFalseEdge:(double)arg1 ;
-(CGRect)activeScreenBounds;
-(BOOL)shouldUseUIKitHeuristics;
-(void)setShouldUseUIKitHeuristics:(BOOL)arg1 ;
-(double)edgeMargin;
-(void)setEdgeMargin:(double)arg1 ;
-(double)falseEdge;
-(double)allowableDistanceFromEdgeCenter;
-(BOOL)requiresSecondTouchInRange;
-(void)setRequiresSecondTouchInRange:(BOOL)arg1 ;
-(double)edgeCenter;
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(_UIScreenEdgePanRecognizerSettings *)settings;
-(void)reset;
-(void)screenEdgePanRecognizerStateDidChange:(id)arg1 ;
-(void)setSettings:(_UIScreenEdgePanRecognizerSettings *)arg1 ;
@end
