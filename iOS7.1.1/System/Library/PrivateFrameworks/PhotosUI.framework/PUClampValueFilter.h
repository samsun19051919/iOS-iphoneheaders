/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PUValueFilter.h>

@interface PUClampValueFilter : PUValueFilter {

	double _minimumValue;
	double _maximumValue;

}

@property (assign,nonatomic) double minimumValue;              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;              //@synthesize maximumValue=_maximumValue - In the implementation block
-(double)minimumValue;
-(double)maximumValue;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(double)updatedValue:(double)arg1 withTargetValue:(double)arg2 ;
@end
