/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBFDeviceBlockTimer, NSString;

@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController {

	SBFDeviceBlockTimer* _blockTimer;

}

@property (nonatomic,readonly) NSString * slideToUnlockText; 
@property (nonatomic,retain) SBFDeviceBlockTimer * blockTimer;              //@synthesize blockTimer=_blockTimer - In the implementation block
-(SBFDeviceBlockTimer *)blockTimer;
-(void)setBlockTimer:(SBFDeviceBlockTimer *)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(NSString *)slideToUnlockText;
@end
