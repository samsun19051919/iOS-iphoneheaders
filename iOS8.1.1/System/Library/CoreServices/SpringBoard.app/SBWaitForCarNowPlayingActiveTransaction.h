/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class SBStarkScreenController;

@interface SBWaitForCarNowPlayingActiveTransaction : BSTransaction {

	SBStarkScreenController* _screenController;
	double _timeout;

}
-(id)initWithScreenController:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
-(void)_begin;
@end
