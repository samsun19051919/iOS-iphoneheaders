/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface SoftwareLibraryLookupOperation : ISOperation {

	NSArray* _bundleIDs;
	NSArray* _itemIDs;
	NSArray* _softwareLibraryItems;

}

@property (readonly) NSArray * bundleIdentifiers; 
@property (readonly) NSArray * itemIdentifiers; 
@property (readonly) NSArray * softwareLibraryItems; 
-(id)initWithItemIdentifiers:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(NSArray *)softwareLibraryItems;
-(void)_loadFromItemIdentifiers;
-(void)_loadFromBundleIdentifiers;
-(id)_newSoftwareLibraryItemWithApplication:(id)arg1 ;
-(id)_newSoftwareLibraryItemWithContainerPath:(id)arg1 ;
-(void)dealloc;
-(NSArray *)bundleIdentifiers;
-(void)run;
-(NSArray *)itemIdentifiers;
@end
