/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBLockScreenSlideUpAppSettings : _UISettings {

	long long _slideUpAppSelection;

}

@property (assign) long long slideUpAppSelection;              //@synthesize slideUpAppSelection=_slideUpAppSelection - In the implementation block
+(id)settingsControllerModule;
-(void)setSlideUpAppSelection:(long long)arg1 ;
-(long long)slideUpAppSelection;
-(id)bundleIdentifierForCurrentSelection;
-(id)imageNameForCurrentSelection;
-(void)setDefaultValues;
@end
