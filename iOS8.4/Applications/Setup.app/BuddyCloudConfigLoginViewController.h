/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BuddyCloudConfigController, NSError, BuddyCloudConfigurationLoginHeaderView, UITableViewCell, UIBarButtonItem, NSString;

@interface BuddyCloudConfigLoginViewController : BuddyTableViewController <UITextFieldDelegate> {

	BuddyCloudConfigController* _configController;
	NSError* _lastError;
	BuddyCloudConfigurationLoginHeaderView* _headerLabel;
	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	UIBarButtonItem* _nextButton;

}

@property (assign,nonatomic,__weak) BuddyCloudConfigController * configController;              //@synthesize configController=_configController - In the implementation block
@property (nonatomic,retain) NSError * lastError;                                               //@synthesize lastError=_lastError - In the implementation block
@property (nonatomic,retain) BuddyCloudConfigurationLoginHeaderView * headerLabel;              //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UITableViewCell * usernameCell;                                    //@synthesize usernameCell=_usernameCell - In the implementation block
@property (nonatomic,retain) UITableViewCell * passwordCell;                                    //@synthesize passwordCell=_passwordCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * nextButton;                                      //@synthesize nextButton=_nextButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableViewCell *)usernameCell;
-(UITableViewCell *)passwordCell;
-(void)setConfigController:(BuddyCloudConfigController *)arg1 ;
-(BuddyCloudConfigController *)configController;
-(void)_setupForCloudConfigurationState;
-(void)retryLogin;
-(void)setUsernameCell:(UITableViewCell *)arg1 ;
-(void)setPasswordCell:(UITableViewCell *)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(float)heightForHeaderInTableView:(id)arg1 ;
-(id)viewForHeaderInTableView:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setNextButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)nextButton;
-(void)setHeaderLabel:(BuddyCloudConfigurationLoginHeaderView *)arg1 ;
-(BuddyCloudConfigurationLoginHeaderView *)headerLabel;
-(NSError *)lastError;
-(void)setLastError:(NSError *)arg1 ;
-(void)_textChanged:(id)arg1 ;
@end
