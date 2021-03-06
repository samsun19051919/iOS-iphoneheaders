/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:22:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDGradientOpacityStop.h>
#import <CoreUI/NSCoding.h>

@interface CUIPSDGradientDoubleOpacityStop : CUIPSDGradientOpacityStop <NSCoding> {

	float leadOutOpacity;

}
+(void)initialize;
+(id)doubleOpacityStopWithLocation:(float)arg1 leadInOpacity:(float)arg2 leadOutOpacity:(float)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)leadOutOpacity;
-(char)isDoubleStop;
-(id)initWithLocation:(float)arg1 leadInOpacity:(float)arg2 leadOutOpacity:(float)arg3 ;
-(float)leadInOpacity;
@end

