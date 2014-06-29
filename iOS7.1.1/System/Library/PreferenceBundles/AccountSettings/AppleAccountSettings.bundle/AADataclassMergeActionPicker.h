/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIDataclassActionPicker.h>

@class NSString;

@interface AADataclassMergeActionPicker : ACUIDataclassActionPicker {

	bool _isPerformingBatchMerge;
	bool _isTetheredSyncingEnabled;
	bool _isAnotherAccountSyncingDataclass;
	bool _isDataclassSyncingUsingExchangeOnly;
	bool _localStoreHasReadOnlyCalendars;
	NSString* _tetheredSyncingSource;

}

@property (assign,setter=setPerformingBatchMerge:,nonatomic) bool isPerformingBatchMerge;                                          //@synthesize isPerformingBatchMerge=_isPerformingBatchMerge - In the implementation block
@property (assign,setter=setTetheredSyncingEnabled:,nonatomic) bool isTetheredSyncingEnabled;                                      //@synthesize isTetheredSyncingEnabled=_isTetheredSyncingEnabled - In the implementation block
@property (assign,setter=setAnotherAccountIsSyncingDataclass:,nonatomic) bool isAnotherAccountSyncingDataclass;                    //@synthesize isAnotherAccountSyncingDataclass=_isAnotherAccountSyncingDataclass - In the implementation block
@property (assign,setter=setDataclassIsSyncingUsingExchangeOnly:,nonatomic) bool isDataclassSyncingUsingExchangeOnly;              //@synthesize isDataclassSyncingUsingExchangeOnly=_isDataclassSyncingUsingExchangeOnly - In the implementation block
@property (assign,nonatomic) bool localStoreHasReadOnlyCalendars;                                                                  //@synthesize localStoreHasReadOnlyCalendars=_localStoreHasReadOnlyCalendars - In the implementation block
@property (assign,nonatomic) NSString * tetheredSyncingSource;                                                                     //@synthesize tetheredSyncingSource=_tetheredSyncingSource - In the implementation block
-(void)setTetheredSyncingSource:(id)arg1 ;
-(void)setPerformingBatchMerge:(bool)arg1 ;
-(void)setTetheredSyncingEnabled:(bool)arg1 ;
-(void)setLocalStoreHasReadOnlyCalendars:(bool)arg1 ;
-(void)setAnotherAccountIsSyncingDataclass:(bool)arg1 ;
-(void)setDataclassIsSyncingUsingExchangeOnly:(bool)arg1 ;
-(bool)isPerformingBatchMerge;
-(bool)isTetheredSyncingEnabled;
-(id)tetheredSyncingSource;
-(bool)isDataclassSyncingUsingExchangeOnly;
-(bool)isAnotherAccountSyncingDataclass;
-(bool)localStoreHasReadOnlyCalendars;
-(id)title;
-(id)message;
-(id)descriptionForDataclassAction:(id)arg1 ;
@end
