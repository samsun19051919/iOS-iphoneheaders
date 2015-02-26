/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneRotationTransform : FBSceneTransform {

	long long _degrees;
	double _radians;

}

@property (assign,nonatomic) long long degrees;              //@synthesize degrees=_degrees - In the implementation block
@property (assign,nonatomic) double radians;                 //@synthesize radians=_radians - In the implementation block
-(void)_updateTransform;
-(id)description;
-(id)initWithRadians:(double)arg1 ;
-(id)initWithDegrees:(long long)arg1 ;
-(void)setRadians:(double)arg1 ;
-(double)radians;
-(long long)degrees;
-(void)setDegrees:(long long)arg1 ;
@end
