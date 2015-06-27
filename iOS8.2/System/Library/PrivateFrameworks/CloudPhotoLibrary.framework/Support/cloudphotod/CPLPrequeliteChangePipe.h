/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineChangePipeImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe : CPLPrequeliteStorage <CPLEngineChangePipeImplementation> {

	CPLPrequeliteVariable* _pullGenerationVar;
	CPLPrequeliteVariable* _pushGenerationVar;
	CPLPrequeliteVariable* _isLockedVar;
	NSString* _countSqlCommand;
	NSString* _logDomain;
	unsigned _lastPullMarkerForCompact;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isLocked,nonatomic) char locked; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(unsigned)_pullMarker;
-(unsigned)_pushMarker;
-(char)_setPushMarker:(unsigned)arg1 error:(id*)arg2 ;
-(char)_setPullMarker:(unsigned)arg1 error:(id*)arg2 ;
-(char)isLocked;
-(void)setLocked:(char)arg1 ;
-(id)status;
-(void)writeTransactionDidFail;
-(char)deleteAllChangeBatchesWithError:(id*)arg1 ;
-(unsigned)countOfQueuedBatches;
-(char)appendChangeBatch:(id)arg1 error:(id*)arg2 ;
-(char)popChangeBatch:(id*)arg1 error:(id*)arg2 ;
-(id)nextBatch;
-(char)popNextBatchWithError:(id*)arg1 ;
-(char)compactChangeBatchesWithError:(id*)arg1 ;
-(id)allChangeBatches;
-(id)initWithAbstractObject:(id)arg1 ;
@end
