/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:41:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/MFContactsSearchConsumer.h>

@protocol AAUIContactsSearchDelegate;
@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber, NSString;

@interface AAUIContactsSearchController : NSObject <MFContactsSearchConsumer> {

	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	int _countOfPendingResultBatches;
	char _didFindResults;
	NSNumber* _searchTaskID;
	id<AAUIContactsSearchDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cancelSearchAndNotify:(char)arg1 ;
-(void)consumeSearchResults:(id)arg1 type:(unsigned)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)_endSearch;
-(void)beginSearchWithString:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)cancelSearch;
@end
