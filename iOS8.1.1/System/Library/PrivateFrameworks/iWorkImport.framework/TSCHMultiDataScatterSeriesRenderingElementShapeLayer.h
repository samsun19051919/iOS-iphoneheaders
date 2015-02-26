/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CALayer.h>
#import <iWorkImport/TSCHMultiDataElementShapeLayer.h>

@interface TSCHMultiDataScatterSeriesRenderingElementShapeLayer : CALayer <TSCHMultiDataElementShapeLayer>
-(id)chartRep;
-(void)updateElementFrameToNullForSeries:(id)arg1 addingAnimationsToAnimationInfo:(id)arg2 ;
-(void)updateElementFrame:(CGRect)arg1 forSeries:(id)arg2 addingAnimationsToAnimationInfo:(id)arg3 ;
-(BOOL)aboveIntercept;
-(id)currentValueLayer;
-(void)p_addAnimationsForUpdatingImage:(CGImageRef)arg1 frame:(CGRect)arg2 toAnimationInfo:(id)arg3 ;
-(void)setFill:(id)arg1 stroke:(id)arg2 withViewScale:(double)arg3 ;
@end
