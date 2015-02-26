/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputInternal_FigRecorder, NSArray;

@interface AVCaptureInput_FigRecorder : NSObject {

	AVCaptureInputInternal_FigRecorder* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(id)notReadyError;
-(NSArray *)ports;
-(void)willStartForSession:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(OpaqueCMClockRef)clock;
@end
