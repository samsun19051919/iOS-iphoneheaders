/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/VoiceServices/PlugIns/iPod.vsplugin/iPod
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceServices/VSRecognitionAction.h>

@interface iPodControlSimpleAction : VSRecognitionAction
-(id)perform;
-(int)completionType;
-(id)performSimpleAction;
-(void)_completeThreadedPerform:(id)arg1 ;
-(BOOL)requiresThreadedPerform;
-(void)_performThreaded;
@end
