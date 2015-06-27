/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSSpecifierGroupController.h>

@class PSListController, PSSpecifier, NSMutableArray, NSString;

@interface PSExpandableListGroupController : NSObject <PSSpecifierGroupController> {

	PSListController* _listController;
	PSSpecifier* _groupSpecifier;
	int _collaspeAfterCount;
	NSMutableArray* _specifiers;
	char _showAll;
	PSSpecifier* _showAllSpecifier;
	PSSpecifier* _spinnerSpecifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reloadSpecifier:(id)arg1 ;
-(id)specifiers;
-(int)_groupIndex;
-(id)spinnerSpecifier;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(int)arg3 ;
-(id)showAllSpecifier;
-(void)showAll;
-(id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 ;
-(void)addSpecifiers:(id)arg1 ;
-(void)removeAllSpecifiers;
@end
