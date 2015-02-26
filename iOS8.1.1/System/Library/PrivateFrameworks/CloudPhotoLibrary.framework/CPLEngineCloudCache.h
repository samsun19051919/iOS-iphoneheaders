/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) BOOL hasDoneAFirstSynchronization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)discardStagedChangesWithError:(id*)arg1 ;
-(BOOL)resetSyncAnchorWithError:(id*)arg1 ;
-(id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(BOOL)arg3 withError:(id*)arg4 ;
-(BOOL)applyBatch:(id)arg1 isFinal:(BOOL)arg2 withError:(id*)arg3 ;
-(BOOL)setSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(BOOL)commitStagedChangesWithError:(id*)arg1 ;
-(id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 ;
-(BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasRecordWithIdentifier:(id)arg1 ;
-(BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasDoneAFirstSynchronization;
-(BOOL)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)syncAnchor;
-(id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2 ;
-(void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forIdentifier:(id)arg3 ;
@end
