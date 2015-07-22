/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:22 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryViewConfiguration.h>

@class MusicLibraryViewConfiguration;

@interface MusicLibraryAdaptiveViewConfiguration : MusicLibraryViewConfiguration {

	MusicLibraryViewConfiguration* _compactWidthConfiguration;
	MusicLibraryViewConfiguration* _regularWidthConfiguration;

}

@property (nonatomic,readonly) MusicLibraryViewConfiguration * compactWidthConfiguration; 
@property (nonatomic,readonly) MusicLibraryViewConfiguration * regularWidthConfiguration; 
-(id)init;
-(MusicLibraryViewConfiguration *)compactWidthConfiguration;
-(MusicLibraryViewConfiguration *)regularWidthConfiguration;
-(void)enumerateContentViewConfigurationsUsingBlock:(/*^block*/id)arg1 ;
-(id)loadCompactWidthConfiguration;
-(id)loadRegularWidthConfiguration;
@end
