/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:02 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class NSString, SCRCIndexMap, VOTKeyInfo;

@interface VOTEvent : NSObject {

	double _time;
	int _origin;
	NSString* _command;
	SCRCIndexMap* _info;
	CGPoint _touchPoint;
	float _touchVelocity;
	unsigned _fingerCount;
	char _bypassHelp;

}

@property (assign,nonatomic) int origin;                        //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSString * command;                //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) CGPoint touchPoint;                //@synthesize touchPoint=_touchPoint - In the implementation block
@property (assign,nonatomic) unsigned fingerCount;              //@synthesize fingerCount=_fingerCount - In the implementation block
@property (assign,nonatomic) float touchVelocity;               //@synthesize touchVelocity=_touchVelocity - In the implementation block
@property (nonatomic,retain) VOTKeyInfo * keyInfo; 
@property (assign,nonatomic) char bypassHelp; 
+(id)externalDeviceEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)keyEventWithCommand:(id)arg1 keyInfo:(id)arg2 ;
+(id)touchEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)internalEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)systemServerEventWithCommand:(id)arg1 info:(id)arg2 ;
+(id)brailleEventWithCommand:(id)arg1 info:(id)arg2 ;
-(char)isKeyEvent;
-(char)isTouchEvent;
-(char)isExternalDeviceEvent;
-(char)isBrailleEvent;
-(char)bypassHelp;
-(void)setBypassHelp:(char)arg1 ;
-(CGPoint)touchPoint;
-(void)setTouchPoint:(CGPoint)arg1 ;
-(void)setFingerCount:(unsigned)arg1 ;
-(float)touchVelocity;
-(void)setTouchVelocity:(float)arg1 ;
-(VOTKeyInfo *)keyInfo;
-(NSString *)command;
-(void)dealloc;
-(id)description;
-(id)initWithType:(int)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(double)time;
-(void)setInfo:(id)arg1 ;
-(void)setKeyInfo:(VOTKeyInfo *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(id)objectForIndex:(unsigned long)arg1 ;
-(void)setObject:(id)arg1 forIndex:(unsigned long)arg2 ;
-(unsigned)fingerCount;
@end
