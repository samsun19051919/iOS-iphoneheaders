/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:04 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, SCRCTargetSelectorTimer, VOTKeyInfo, SCRCThread;

@interface VOTKeyboardManager : NSObject {

	NSDictionary* _keyboardCommandsTable;
	NSDictionary* _singleLetterCommandsTable;
	NSString* _lastLayout;
	NSDictionary* _layoutToKeyboardMap;
	NSDictionary* _keyboardMap;
	unsigned _currentModifiers;
	char _controlKeyDown;
	NSString* _lastCommand;
	SCRCTargetSelectorTimer* _keyRepeatTimer;
	unsigned _keyboardHelpMask;
	char _isQuickNavOn;
	SCRCTargetSelectorTimer* _quickNavRepostTimer;
	SCRCTargetSelectorTimer* _quickNavKeyTimer;
	unsigned long long _quickNavStateMask;
	unsigned long long _quickNavLastDownState;
	char _quickNavDidSendDown;
	char _capsLockOn;
	char _captureModeEnabled;
	char _explictlyEnabledQuickNav;
	VOTKeyInfo* _keyDownInfo;
	SCRCThread* _keyboardThread;
	char _controlKeyToggleSpeakingAllowed;
	/*^block*/id _testingEventDispatchTap;

}

@property (nonatomic,readonly) char isQuickNavOn;                               //@synthesize isQuickNavOn=_isQuickNavOn - In the implementation block
@property (assign,nonatomic) char captureModeEnabled;                           //@synthesize captureModeEnabled=_captureModeEnabled - In the implementation block
@property (assign,nonatomic) char explictlyEnabledQuickNav;                     //@synthesize explictlyEnabledQuickNav=_explictlyEnabledQuickNav - In the implementation block
@property (nonatomic,copy) id testingEventDispatchTap;                          //@synthesize testingEventDispatchTap=_testingEventDispatchTap - In the implementation block
@property (assign,nonatomic) char controlKeyToggleSpeakingAllowed;              //@synthesize controlKeyToggleSpeakingAllowed=_controlKeyToggleSpeakingAllowed - In the implementation block
+(id)keyboardManager;
+(void)initialize;
-(void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(int)arg2 ;
-(void)updateQuickNavState:(char)arg1 ;
-(void)setCaptureModeEnabled:(char)arg1 ;
-(id)singleLetterCommandForKeyInfo:(id)arg1 ;
-(char)isQuickNavOn;
-(void)setExplictlyEnabledQuickNav:(char)arg1 ;
-(void)loadKeyboardMap;
-(void)_initializeQuickNav;
-(void)_initializeThread;
-(void)_keyRepeat:(id)arg1 ;
-(void)setControlKeyToggleSpeakingAllowed:(char)arg1 ;
-(void)_handleKeyboardKeyEvent:(id)arg1 ;
-(id)_localizeKeyboardString:(id)arg1 ;
-(void)_postEvent:(id)arg1 ;
-(void)setKeyDownInfo:(id)arg1 ;
-(char)controlKeyToggleSpeakingAllowed;
-(char)_handleArrowKeyEvent:(id)arg1 ;
-(id)_voiceOverCommandForKeyInfo:(id)arg1 ;
-(void)_sendEventForCommand:(id)arg1 withKeyInfo:(id)arg2 arrowInfo:(id)arg3 ;
-(void)_handleQuickNavPressTimer:(id)arg1 ;
-(void)_handleQuickNavDownArrowRepostPress:(id)arg1 ;
-(void)_handleQuickNavPress:(id)arg1 ;
-(void)_postKeyboardKey:(id)arg1 keyCode:(unsigned short)arg2 eventFlags:(unsigned)arg3 keyFlags:(unsigned short)arg4 keyDown:(char)arg5 source:(unsigned short)arg6 ;
-(void)_updateEventFlags:(id)arg1 ;
-(void)_handleAnnouncementsForKeyInfo:(id)arg1 ;
-(char)_dispatchCommandForKeyInfo:(id)arg1 ;
-(id)testingEventDispatchTap;
-(id)keyboardCommandForKeyInfo:(id)arg1 ;
-(id)keyDownInfo;
-(char)captureModeEnabled;
-(char)explictlyEnabledQuickNav;
-(void)setTestingEventDispatchTap:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)postEvent:(id)arg1 ;
@end

