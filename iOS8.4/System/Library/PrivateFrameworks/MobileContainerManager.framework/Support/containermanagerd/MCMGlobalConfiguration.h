/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL;

@interface MCMGlobalConfiguration : NSObject {

	NSURL* _homeDirectory;
	NSURL* _cachesDirectory;
	NSURL* _libraryDirectory;
	NSURL* _baseDirectory;
	NSURL* _tempDirectory;
	NSURL* _stagingDirectory;
	NSURL* _deathrowDirectory;
	NSURL* _replaceDirectory;

}

@property (readonly) NSURL * logDirectory; 
@property (readonly) NSURL * baseDirectory; 
@property (readonly) NSURL * tempDirectory; 
@property (readonly) NSURL * stagingDirectory; 
@property (readonly) NSURL * deathrowDirectory; 
@property (readonly) NSURL * replaceDirectory; 
+(id)sharedInstance;
-(id)containerDirectoryURLForContentClass:(long long)arg1 temporary:(BOOL)arg2 ;
-(id)libraryDirectory;
-(NSURL *)tempDirectory;
-(NSURL *)baseDirectory;
-(NSURL *)stagingDirectory;
-(NSURL *)deathrowDirectory;
-(NSURL *)replaceDirectory;
-(id)cachesDirectory;
-(NSURL *)logDirectory;
-(id)init;
@end
