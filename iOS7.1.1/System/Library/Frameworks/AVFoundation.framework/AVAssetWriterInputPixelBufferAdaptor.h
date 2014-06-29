/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVAssetWriterInputPixelBufferAdaptorInternal, AVAssetWriterInput, NSDictionary;

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject {

	AVAssetWriterInputPixelBufferAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetWriterInput * assetWriterInput; 
@property (nonatomic,readonly) NSDictionary * sourcePixelBufferAttributes; 
@property (nonatomic,readonly) CVPixelBufferPoolRef pixelBufferPool; 
+(id)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 ;
+(id)keyPathsForValuesAffectingPixelBufferPool;
-(id)sourcePixelBufferAttributes;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(bool)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(id)initWithAssetWriterInput:(id)arg1 sourcePixelBufferAttributes:(id)arg2 ;
-(id)assetWriterInput;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)finalize;
@end
