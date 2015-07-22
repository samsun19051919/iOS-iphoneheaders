/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:11 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicSettings/MusicSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <MusicSettings/MPTermsViewControllerDelegate.h>

@class PSSpecifier, HSCloudClient, ISSSURLBag, NSString;

@interface MusicSettingsController : PSListController <MPTermsViewControllerDelegate> {

	BOOL _overridingAccountStatus;
	SCD_Struct_Mu1 _accountStatus;
	int _lateNightModeToken;
	BOOL _lateNightModeTokenIsValid;
	PSSpecifier* _appleMusicGroupSpecifier;
	PSSpecifier* _appleMusicSwitchSpecifier;
	PSSpecifier* _appleMusicOfferSpecifier;
	PSSpecifier* _artistConnectGroupSpecifier;
	PSSpecifier* _artistConnectEnabledSpecifier;
	PSSpecifier* _resetLibraryGroupSpecifier;
	PSSpecifier* _resetLibraryButtonSpecifier;
	PSSpecifier* _libraryGroupSpecifier;
	PSSpecifier* _sortAlbumsSpecifier;
	PSSpecifier* _geniusSpecifier;
	PSSpecifier* _cloudLibrarySpecifier;
	PSSpecifier* _iTunesMatchSubscribeGroupSpecifier;
	PSSpecifier* _iTunesMatchSubscribeOfferSpecifier;
	PSSpecifier* _homeSharingGroupSpecifier;
	PSSpecifier* _homeSharingSignOutButtonSpecifier;
	PSSpecifier* _homeSharingAppleIDSpecifier;
	PSSpecifier* _homeSharingPasswordSpecifier;
	PSSpecifier* _eqSpecifier;
	HSCloudClient* _cloudClient;
	ISSSURLBag* _URLBag;

}

@property (nonatomic,readonly) PSSpecifier * appleMusicGroupSpecifier;                        //@synthesize appleMusicGroupSpecifier=_appleMusicGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * appleMusicSwitchSpecifier;                       //@synthesize appleMusicSwitchSpecifier=_appleMusicSwitchSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * appleMusicOfferSpecifier;                        //@synthesize appleMusicOfferSpecifier=_appleMusicOfferSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * artistConnectGroupSpecifier;                     //@synthesize artistConnectGroupSpecifier=_artistConnectGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * artistConnectEnabledSpecifier;                   //@synthesize artistConnectEnabledSpecifier=_artistConnectEnabledSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * resetLibraryGroupSpecifier;                      //@synthesize resetLibraryGroupSpecifier=_resetLibraryGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * resetLibraryButtonSpecifier;                     //@synthesize resetLibraryButtonSpecifier=_resetLibraryButtonSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * libraryGroupSpecifier;                           //@synthesize libraryGroupSpecifier=_libraryGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * sortAlbumsSpecifier;                             //@synthesize sortAlbumsSpecifier=_sortAlbumsSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * geniusSpecifier;                                 //@synthesize geniusSpecifier=_geniusSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * cloudLibrarySpecifier;                           //@synthesize cloudLibrarySpecifier=_cloudLibrarySpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * iTunesMatchSubscribeGroupSpecifier;              //@synthesize iTunesMatchSubscribeGroupSpecifier=_iTunesMatchSubscribeGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * iTunesMatchSubscribeOfferSpecifier;              //@synthesize iTunesMatchSubscribeOfferSpecifier=_iTunesMatchSubscribeOfferSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * homeSharingGroupSpecifier;                       //@synthesize homeSharingGroupSpecifier=_homeSharingGroupSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * homeSharingSignOutButtonSpecifier;               //@synthesize homeSharingSignOutButtonSpecifier=_homeSharingSignOutButtonSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * homeSharingAppleIDSpecifier;                     //@synthesize homeSharingAppleIDSpecifier=_homeSharingAppleIDSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * homeSharingPasswordSpecifier;                    //@synthesize homeSharingPasswordSpecifier=_homeSharingPasswordSpecifier - In the implementation block
@property (nonatomic,readonly) PSSpecifier * eqSpecifier;                                     //@synthesize eqSpecifier=_eqSpecifier - In the implementation block
@property (nonatomic,readonly) HSCloudClient * cloudClient;                                   //@synthesize cloudClient=_cloudClient - In the implementation block
@property (nonatomic,readonly) ISSSURLBag * URLBag;                                           //@synthesize URLBag=_URLBag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PSSpecifier *)homeSharingPasswordSpecifier;
-(PSSpecifier *)sortAlbumsSpecifier;
-(void)_failEnableGenius;
-(void)_attemptHomeSharingSignIn;
-(id)homeSharingAppleID;
-(void)_reloadAccountStatus;
-(void)_updateAllSpecifiers:(BOOL)arg1 ;
-(void)_cloudServiceStatusSubscriptionAvailablilityChangedNotification:(id)arg1 ;
-(void)_debugTap:(id)arg1 ;
-(void)_cloudServiceStatusMatchStatusDidChangeNotification:(id)arg1 ;
-(void)_updateSpecifiersAnimated:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(void)_cloudServiceStatusCloudLibraryEnabledChangedNotification:(id)arg1 ;
-(void)_reloadEQSpecifier;
-(void)_cloudServiceStatusSubscriptionStatusChangedNotification:(id)arg1 ;
-(void)_updateLibrarySpecifiersAnimated:(BOOL)arg1 ;
-(void)_updateAppleMusicSpecifiersAnimated:(BOOL)arg1 ;
-(void)_updateHomeSharingSpecifiersAnimated:(BOOL)arg1 ;
-(id)stringTable;
-(void)setEQ:(id)arg1 specifier:(id)arg2 ;
-(PSSpecifier *)resetLibraryGroupSpecifier;
-(PSSpecifier *)geniusSpecifier;
-(PSSpecifier *)appleMusicGroupSpecifier;
-(void)appleMusicSubscribe:(id)arg1 ;
-(PSSpecifier *)iTunesMatchSubscribeGroupSpecifier;
-(PSSpecifier *)iTunesMatchSubscribeOfferSpecifier;
-(PSSpecifier *)homeSharingSignOutButtonSpecifier;
-(id)isCloudLibraryEnabled:(id)arg1 ;
-(PSSpecifier *)libraryGroupSpecifier;
-(id)volumeLimitEnabled:(id)arg1 ;
-(PSSpecifier *)artistConnectEnabledSpecifier;
-(PSSpecifier *)eqSpecifier;
-(void)iTunesMatchSubscribe:(id)arg1 ;
-(void)resetLibrary:(id)arg1 ;
-(PSSpecifier *)appleMusicOfferSpecifier;
-(PSSpecifier *)appleMusicSwitchSpecifier;
-(PSSpecifier *)artistConnectGroupSpecifier;
-(void)setHomeSharingAppleID:(id)arg1 specifier:(id)arg2 ;
-(void)setGeniusEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)homeSharingButtonAction:(id)arg1 ;
-(id)homeSharingPassword;
-(void)setHomeSharingPassword:(id)arg1 specifier:(id)arg2 ;
-(void)setCloudLibraryEnabled:(id)arg1 specifier:(id)arg2 ;
-(PSSpecifier *)homeSharingGroupSpecifier;
-(PSSpecifier *)homeSharingAppleIDSpecifier;
-(PSSpecifier *)cloudLibrarySpecifier;
-(PSSpecifier *)resetLibraryButtonSpecifier;
-(void)termsViewControllerDidCancel:(id)arg1 ;
-(void)termsViewControllerShouldDismiss:(id)arg1 ;
-(void)termsViewController:(id)arg1 loadTermsAndConditionsWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)termsViewController:(id)arg1 acceptTermsAndConditions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(HSCloudClient *)cloudClient;
-(void)dealloc;
-(id)init;
-(void)viewDidLoad;
-(void)_enableGenius;
-(id)specifiers;
-(ISSSURLBag *)URLBag;
@end
