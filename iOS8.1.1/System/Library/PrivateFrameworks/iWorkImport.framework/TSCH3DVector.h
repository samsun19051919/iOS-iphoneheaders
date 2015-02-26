/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>
#import <iWorkImport/NSMutableCopying.h>

@interface TSCH3DVector : NSObject <NSCopying, NSMutableCopying> {

	float mX;
	float mY;
	float mZ;
	float mW;

}

@property (nonatomic,readonly) float x; 
@property (nonatomic,readonly) float y; 
@property (nonatomic,readonly) float z; 
@property (nonatomic,readonly) float w; 
+(id)instanceWithArchive:(const Chart3DVectorArchive*)arg1 unarchiver:(id)arg2 ;
+(id)x:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4 ;
+(id)x:(float)arg1 y:(float)arg2 z:(float)arg3 ;
+(unsigned long long)hashVec4:(const tvec4<float>*)arg1 ;
+(id)vectorWithVec2:(const tvec2<float>*)arg1 ;
+(id)vectorWithVec3:(const tvec3<float>*)arg1 ;
+(id)vectorWithVec4:(const tvec4<float>*)arg1 ;
+(id)vector;
-(void)saveToArchive:(Chart3DVectorArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DVectorArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3 w:(float)arg4 ;
-(id)initWithVec4:(const tvec4<float>*)arg1 ;
-(id)initWithVec2:(const tvec2<float>*)arg1 ;
-(id)initWithVec3:(const tvec3<float>*)arg1 ;
-(tvec4<float>)value4;
-(tvec3<float>)value3;
-(tvec2<float>)value2;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(tvec4<float>)value;
-(float)x;
-(float)y;
-(float)z;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(float)w;
-(id)initWithX:(float)arg1 y:(float)arg2 z:(float)arg3 ;
-(float)valueForDimension:(unsigned long long)arg1 ;
@end
