/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:06:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/VimeoSettings.bundle/VimeoSettings
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <FacebookSettings/ACUIAppInstallerDelegate.h>

@class ACAccountType, ACAccount, NSString, ACUIAppInstaller, PSSpecifier, NSArray, SLNetworkReachabilityWarning, UIAlertView;

@interface SLVimeoSettingsViewController : ACUIViewController <ACUIAppInstallerDelegate> {

	ACAccountType* _vimeoAccountType;
	ACAccount* _account;
	NSString* _username;
	NSString* _password;
	ACUIAppInstaller* _vimeoAppInstaller;
	PSSpecifier* _signInButtonSpecifier;
	NSArray* _accountStateDependentSpecifiers;
	SLNetworkReachabilityWarning* _networkWarning;
	UIAlertView* _appInstallAlert;

}
-(void)_showAlertForError:(id)arg1 ;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(id)_vimeoAccountType;
-(id)_vimeoAppInstaller;
-(id)_installVimeoCellSpecifier;
-(id)_vimeoApp;
-(id)_networkWarning;
-(id)_loginSpecifiers;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_updateInstallCell:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(void)_installButtonTapped:(id)arg1 ;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(id)_specifiersForExistingAccount;
-(id)_specifiersForNoAccounts;
-(void)_signInButtonTapped:(id)arg1 ;
-(void)_updateUsernameAndPasswordKeysWithValuesFromTextFields;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_updateSignInButton;
-(void)setUsername:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
-(void).cxx_destruct;
@end

