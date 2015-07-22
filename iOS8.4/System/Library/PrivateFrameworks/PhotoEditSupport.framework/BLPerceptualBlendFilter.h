/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface BLPerceptualBlendFilter : CIFilter {

	CIImage* _inputImage;
	CIImage* _inputBackgroundImage;
	CIImage* _inputMaskImage;

}

@property (retain) CIImage * inputImage;                        //@synthesize inputImage=_inputImage - In the implementation block
@property (retain) CIImage * inputBackgroundImage;              //@synthesize inputBackgroundImage=_inputBackgroundImage - In the implementation block
@property (retain) CIImage * inputMaskImage;                    //@synthesize inputMaskImage=_inputMaskImage - In the implementation block
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputBackgroundImage;
-(void)setInputBackgroundImage:(CIImage *)arg1 ;
-(CIImage *)inputMaskImage;
-(void)setInputMaskImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
@end
