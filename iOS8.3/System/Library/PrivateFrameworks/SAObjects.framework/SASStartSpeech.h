/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSNumber;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * audioSource; 
@property (assign,nonatomic) char clearContext; 
@property (assign,nonatomic) int codec; 
@property (nonatomic,copy) NSString * deviceIdentifier; 
@property (nonatomic,copy) NSString * deviceModel; 
@property (assign,nonatomic) char disableAutoEndpointing; 
@property (nonatomic,copy) NSString * dspStatus; 
@property (assign,nonatomic) char enablePartialResults; 
@property (nonatomic,copy) NSString * headsetAddress; 
@property (nonatomic,copy) NSString * headsetId; 
@property (nonatomic,copy) NSString * headsetName; 
@property (nonatomic,copy) NSNumber * isCarryDevice; 
@property (nonatomic,copy) NSString * motionActivity; 
@property (nonatomic,copy) NSNumber * motionConfidence; 
@property (nonatomic,copy) NSNumber * noiseReductionLevel; 
@property (nonatomic,copy) NSString * origin; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)startSpeech;
+(id)startSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)_ad_isRetryableCommand;
-(id)ad_languageModel;
-(void)setAFSpeechRequestOptions:(id)arg1 ;
-(void)setADRecordingInfo:(id)arg1 ;
-(char)ad_needsLocation;
-(void)setAFSpeechEvent:(int)arg1 ;
-(id)groupIdentifier;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)audioSource;
-(void)setAudioSource:(NSString *)arg1 ;
-(char)clearContext;
-(void)setClearContext:(char)arg1 ;
-(int)codec;
-(void)setCodec:(int)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(char)disableAutoEndpointing;
-(void)setDisableAutoEndpointing:(char)arg1 ;
-(NSString *)dspStatus;
-(void)setDspStatus:(NSString *)arg1 ;
-(char)enablePartialResults;
-(void)setEnablePartialResults:(char)arg1 ;
-(NSString *)headsetAddress;
-(void)setHeadsetAddress:(NSString *)arg1 ;
-(NSString *)headsetId;
-(void)setHeadsetId:(NSString *)arg1 ;
-(NSString *)headsetName;
-(void)setHeadsetName:(NSString *)arg1 ;
-(NSNumber *)isCarryDevice;
-(void)setIsCarryDevice:(NSNumber *)arg1 ;
-(NSString *)motionActivity;
-(void)setMotionActivity:(NSString *)arg1 ;
-(NSNumber *)motionConfidence;
-(void)setMotionConfidence:(NSNumber *)arg1 ;
-(NSNumber *)noiseReductionLevel;
-(void)setNoiseReductionLevel:(NSNumber *)arg1 ;
@end
