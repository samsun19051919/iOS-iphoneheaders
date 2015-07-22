/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>

@class UIBarButtonItem;

@interface SafariAutoFillListController : SafariSettingsListController {

	UIBarButtonItem* _deleteBarButtonItem;
	UIBarButtonItem* _editBarButtonItem;
	UIBarButtonItem* _cancelBarButtonItem;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_toggleEditing:(id)arg1 ;
-(void)_updateEditButton;
-(id)_cancelBarButtonItem;
-(BOOL)keychainSyncIsEnabled;
-(id)passcodePrompt;
-(id)deleteConfirmationTitle;
-(id)deleteConfirmationMessage;
-(void)deleteItemsForSpecifiers:(id)arg1 ;
-(BOOL)isSpecifierForAutoFillItem:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(id)_deleteBarButtonItem;
-(id)_editBarButtonItem;
-(void)_showDeleteConfirmationAlert:(id)arg1 ;
-(unsigned long long)_autoFillItemCount;
-(void)_deleteSelectedItems;
-(BOOL)canBeShownFromSuspendedState;
-(void)pushController:(id)arg1 animate:(BOOL)arg2 ;
-(void)_updateDeleteButton;
@end
