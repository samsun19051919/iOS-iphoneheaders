/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSKImportExportDelegate <NSObject>
@property (nonatomic,readonly) BOOL importingDesignDemoDoc; 
@property (nonatomic,readonly) BOOL isBrowsingVersions; 
@optional
-(BOOL)isBrowsingVersions;
-(void)addIncompatibleMovieInfo:(id)arg1 withCompatibilityLevel:(long long)arg2;
-(void)showDownloadPermissionAlertIfNeededForDownloadingAssetsWithEstimatedDownloadSize:(long long)arg1 isPrecise:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(BOOL)importingDesignDemoDoc;

@required
-(void)removeWarning:(id)arg1;
-(void)addWarning:(id)arg1;
-(id)warnings;

@end
