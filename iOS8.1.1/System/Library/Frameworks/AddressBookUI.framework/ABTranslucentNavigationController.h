/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol ABStyleProvider;
@interface ABTranslucentNavigationController : UINavigationController {

	BOOL _overridesNavigationBarInset;
	id<ABStyleProvider> _styleProvider;

}

@property (assign,nonatomic) BOOL overridesNavigationBarInset;               //@synthesize overridesNavigationBarInset=_overridesNavigationBarInset - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(BOOL)overridesNavigationBarInset;
-(void)setOverridesNavigationBarInset:(BOOL)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(BOOL)_shouldNavigationBarInsetViewController:(id)arg1 ;
@end

