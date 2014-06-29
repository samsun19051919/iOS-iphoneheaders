/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:16 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface GuidedAccessController : PSListController {

	bool _detailItemsHidden;
	NSArray* _detailItems;

}

@property (nonatomic,retain) NSArray * detailItems;               //@synthesize detailItems=_detailItems - In the implementation block
@property (assign,nonatomic) bool detailItemsHidden;              //@synthesize detailItemsHidden=_detailItemsHidden - In the implementation block
-(bool)detailItemsHidden;
-(void)setDetailItemsHidden:(bool)arg1 ;
-(id)detailItems;
-(void)setDetailItems:(id)arg1 ;
-(void)_unsetPasscode;
-(id)accessibilityPreferenceForSpecifier:(id)arg1 ;
-(void)accessibilitySetPreference:(id)arg1 specifier:(id)arg2 ;
-(void)_orientationChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)updateLayout;
-(id)specifiers;
-(void)willBecomeActive;
@end
