/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@interface SBLockOverlayViewController : UIViewController {

	id<SBLockOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBLockOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)overlayView;
-(void)setDelegate:(id<SBLockOverlayViewControllerDelegate>)arg1 ;
-(id<SBLockOverlayViewControllerDelegate>)delegate;
@end
