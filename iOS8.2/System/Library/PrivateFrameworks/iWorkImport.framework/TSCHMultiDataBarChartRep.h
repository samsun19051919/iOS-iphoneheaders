/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHMultiDataChartRep.h>

@interface TSCHMultiDataBarChartRep : TSCHMultiDataChartRep
-(id)createMultiDataElementShapeLayerForSeriesIndex:(unsigned)arg1 ;
-(void)updateAppearanceForElementLayer:(id)arg1 seriesIndex:(unsigned)arg2 ;
-(CGRect)currentRepElementBoundsInNaturalSpace;
-(void)updateElementFrame:(CGRect)arg1 forElementLayer:(id)arg2 series:(id)arg3 addingAnimationsToAnimationInfo:(id)arg4 ;
-(void)updateElementLayerLayoutForCurrentRepElementIndexAnimationInfo:(id)arg1 ;
-(unsigned)p_currentSeriesIndex;
-(id)p_barElementsRenderer;
-(unsigned)p_currentGroupIndex;
-(id)p_currentBarSeriesModelCache;
-(CGRect)p_clampRenderingElementFrame:(CGRect)arg1 barElementFrame:(CGRect)arg2 ;
-(CGRect)p_renderingElementFrameForBarElementFrame:(CGRect)arg1 ;
-(char)p_repElementIsAboveInterceptForSeriesIndex:(unsigned)arg1 groupIndex:(unsigned)arg2 ;
-(void)p_calculateInterceptForElementFrame:(CGRect)arg1 elementLayer:(id)arg2 animationInfo:(id)arg3 ;
@end
