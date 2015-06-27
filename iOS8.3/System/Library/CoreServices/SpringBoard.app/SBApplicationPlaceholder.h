/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:39 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/FBApplicationPlaceholderObserver.h>
#import <SpringBoard/SBLeafIconDataSource.h>

@class FBApplicationPlaceholder, NSString, NSMutableDictionary, NSMutableSet;

@interface SBApplicationPlaceholder : NSObject <FBApplicationPlaceholderObserver, SBLeafIconDataSource> {

	FBApplicationPlaceholder* _placeholderProxy;
	NSString* _applicationBundleID;
	NSString* _applicationDisplayName;
	double _fractionProgress;
	char _installing;
	char _isNewsstand;
	char _observingKVO;
	unsigned _installType;
	char _invalidated;
	NSMutableDictionary* _generatedIconImagesByKey;
	NSMutableSet* _formatsPendingGeneration;

}

@property (nonatomic,retain) FBApplicationPlaceholder * placeholderProxy;              //@synthesize placeholderProxy=_placeholderProxy - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;                             //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                          //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundQueue;
-(id)icon:(id)arg1 imageWithFormat:(int)arg2 ;
-(id)iconFormattedAccessoryString:(id)arg1 ;
-(unsigned)iconPriority:(id)arg1 ;
-(id)icon:(id)arg1 defaultImageWithFormat:(int)arg2 ;
-(char)iconCanEllipsizeLabel:(id)arg1 ;
-(char)iconCanTightenLabel:(id)arg1 ;
-(char)iconAppearsInNewsstand:(id)arg1 ;
-(int)iconProgressState:(id)arg1 ;
-(float)iconProgressPercent:(id)arg1 ;
-(char)iconProgressIsPaused:(id)arg1 ;
-(id)iconBadgeNumberOrString:(id)arg1 ;
-(int)iconAccessoryType:(id)arg1 ;
-(char)iconIsRecentlyUpdated:(id)arg1 ;
-(char)iconIsBeta:(id)arg1 ;
-(char)iconAllowsUninstall:(id)arg1 ;
-(char)iconCompleteUninstall:(id)arg1 ;
-(char)iconAllowsLaunch:(id)arg1 ;
-(char)icon:(id)arg1 launchFromLocation:(int)arg2 context:(id)arg3 ;
-(id)fetchIconImageWithFormat:(int)arg1 ;
-(void)setPlaceholderProxy:(FBApplicationPlaceholder *)arg1 ;
-(FBApplicationPlaceholder *)placeholderProxy;
-(char)isInstalling;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(void)_progressChanged;
-(void)_reloadThumbnailImage;
-(id)_getOrGenerateIconImageWithFormat:(int)arg1 ;
-(id)_iconImageKeyForBundleID:(id)arg1 format:(int)arg2 ;
-(void)_generateIconImageWithFormat:(int)arg1 ;
-(int)_newsstandImageOptions;
-(void)_generatePendingIconFormats;
-(char)_shouldDisplayAppName;
-(id)_downloadingLabel;
-(id)_defaultIconImageWithFormat:(int)arg1 ;
-(void)_prioritize;
-(id)initWithPlaceholderProxy:(id)arg1 ;
-(void)iconChanged;
-(id)iconDisplayName:(id)arg1 ;
-(char)isFailed;
-(char)isPausable;
-(unsigned)installType;
-(void)cancel;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(char)isActive;
-(void)invalidate;
-(void)resume;
-(void)pause;
-(NSString *)applicationBundleID;
-(NSString *)applicationDisplayName;
-(void)setApplicationBundleID:(NSString *)arg1 ;
-(char)isDone;
-(void)placeholderPercentCompleteDidChange:(id)arg1 ;
-(void)placeholderCancellabilityDidChange:(id)arg1 ;
-(void)placeholderPausabilityDidChange:(id)arg1 ;
-(void)placeholderInstallStateDidChange:(id)arg1 ;
-(void)placeholderInstallPhaseDidChange:(id)arg1 ;
-(void)placeholderDidChangeSignificantly:(id)arg1 ;
-(char)isNewsstand;
-(char)isCancelable;
-(char)isPaused;
-(char)isDownloading;
-(char)isContentRestricted;
@end
