/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGradient.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDTransformGradient : TSDGradient <TSDMixing> {

	CGPoint mStart;
	CGPoint mEnd;
	CGSize mBaseNaturalSize;
	CGAffineTransform mTransformBeforeUpgrade;

}

@property (assign,nonatomic) CGPoint startPoint; 
@property (assign,nonatomic) CGPoint endPoint; 
@property (assign,nonatomic) CGSize baseNaturalSize; 
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(char)arg4 ;
-(id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2 ;
-(int)mixingTypeWithObject:(id)arg1 ;
-(id)initWithGradientStops:(id)arg1 type:(unsigned)arg2 ;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 type:(unsigned)arg3 ;
-(char)isAdvancedGradientIgnoringFlag;
-(char)isEqualIgnoringTransform:(id)arg1 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 atAngle:(float)arg3 ;
-(CGPoint)startPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(CGPoint)endPointForPath:(id)arg1 andBounds:(CGRect)arg2 ;
-(float)gradientAngleInDegrees;
-(void)p_setDefaultValues;
-(CGSize)baseNaturalSizeForBounds:(CGRect)arg1 ;
-(CGSize)baseNaturalSize;
-(void)setBaseNaturalSize:(CGSize)arg1 ;
-(CGAffineTransform)transformForSize:(CGSize)arg1 ;
-(void)p_drawQuartzShadingInContext:(CGContextRef)arg1 withGradientNaturalSize:(CGSize)arg2 baseNaturalSize:(CGSize)arg3 start:(CGPoint)arg4 end:(CGPoint)arg5 ;
-(CGPoint)normalizedPointForSize:(CGSize)arg1 endPoint:(char)arg2 ;
-(id)initWithGradient:(id)arg1 inPath:(id)arg2 andBounds:(CGRect)arg3 ;
-(CGPoint)p_scalePoint:(CGPoint)arg1 toShapeWithNaturalSize:(CGSize)arg2 ;
-(CGPoint)p_scalePoint:(CGPoint)arg1 fromShapeWithNaturalSize:(CGSize)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CGPoint)startPoint;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGPoint)endPoint;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
@end
