/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSManagedObject, NSDictionary, PFUbiquityKnowledgeVector, NSDate, NSNumber, NSArray, PFUbiquityImportContext, NSMutableDictionary;

@interface PFUbiquityRecordImportConflict : NSObject {

	NSString* _conflictingObjectGlobalIDStr;
	NSManagedObject* _sourceObject;
	NSDictionary* _conflictingLogContent;
	PFUbiquityKnowledgeVector* _conflictingLogKnowledgeVector;
	PFUbiquityKnowledgeVector* _currentKnowledgeVector;
	int _conflictingLogTransactionType;
	NSDate* _conflictLogDate;
	NSNumber* _conflictingLogTransactionNumber;
	NSArray* _transactionHistory;
	NSDictionary* _globalIDIndexToLocalIDURIMap;
	PFUbiquityImportContext* _importContext;
	NSMutableDictionary* _relationshipsToObjectIDsToCheck;

}

@property (nonatomic,retain) NSString * conflictingObjectGlobalIDStr;                                //@synthesize conflictingObjectGlobalIDStr=_conflictingObjectGlobalIDStr - In the implementation block
@property (nonatomic,retain) NSManagedObject * sourceObject;                                         //@synthesize sourceObject=_sourceObject - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictingLogContent;                                   //@synthesize conflictingLogContent=_conflictingLogContent - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * conflictingLogKnowledgeVector;              //@synthesize conflictingLogKnowledgeVector=_conflictingLogKnowledgeVector - In the implementation block
@property (nonatomic,retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;                     //@synthesize currentKnowledgeVector=_currentKnowledgeVector - In the implementation block
@property (assign,nonatomic) int conflictingLogTransactionType;                                      //@synthesize conflictingLogTransactionType=_conflictingLogTransactionType - In the implementation block
@property (nonatomic,retain) NSDate * conflictLogDate;                                               //@synthesize conflictLogDate=_conflictLogDate - In the implementation block
@property (nonatomic,retain) NSNumber * conflictingLogTransactionNumber;                             //@synthesize conflictingLogTransactionNumber=_conflictingLogTransactionNumber - In the implementation block
@property (nonatomic,retain) NSArray * transactionHistory;                                           //@synthesize transactionHistory=_transactionHistory - In the implementation block
@property (nonatomic,retain) NSDictionary * globalIDIndexToLocalIDURIMap;                            //@synthesize globalIDIndexToLocalIDURIMap=_globalIDIndexToLocalIDURIMap - In the implementation block
@property (nonatomic,retain) PFUbiquityImportContext * importContext;                                //@synthesize importContext=_importContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * relationshipToObjectIDsToCheck;                        //@synthesize relationshipsToObjectIDsToCheck=_relationshipsToObjectIDsToCheck - In the implementation block
+(int)resolvedTypeForConflictingLogType:(int)arg1 andLatestTransactionEntry:(id)arg2 skipObject:(bool*)arg3 ;
+(id)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg1 withExportingPeerID:(id)arg2 fromPeerSnapshotCollection:(id)arg3 ;
+(id)createSnapshotFromManagedObject:(id)arg1 withSourceObject:(id)arg2 ;
+(id)createTransactionLogForTransactionEntry:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
+(void)initialize;
-(bool)resolveConflict:(id*)arg1 ;
-(id)importContext;
-(void)setCurrentKnowledgeVector:(id)arg1 ;
-(void)setConflictLogDate:(id)arg1 ;
-(void)setSourceObject:(id)arg1 ;
-(void)setConflictingLogTransactionType:(int)arg1 ;
-(void)setConflictingLogKnowledgeVector:(id)arg1 ;
-(id)currentKnowledgeVector;
-(void)setConflictingLogTransactionNumber:(id)arg1 ;
-(void)setTransactionHistory:(id)arg1 ;
-(void)setGlobalIDIndexToLocalIDURIMap:(id)arg1 ;
-(void)setImportContext:(id)arg1 ;
-(id)createSnapshotFromLogContent:(id)arg1 withTransactionLog:(id)arg2 ;
-(void)setConflictingLogContent:(id)arg1 ;
-(id)relationshipToObjectIDsToCheck;
-(void)setConflictingObjectGlobalIDStr:(id)arg1 ;
-(void)addObjectIDsForDiff:(id)arg1 forRelationship:(id)arg2 ;
-(void)addObjectID:(id)arg1 forRelationship:(id)arg2 ;
-(id)_newNormalizedSnapshot:(id)arg1 forObject:(id)arg2 ;
-(id)transactionHistory;
-(id)createSnapshotDictionaryFromLogEntry:(id)arg1 withError:(id*)arg2 ;
-(id)conflictingLogKnowledgeVector;
-(bool)resolveMergeConflictForLogContent:(id)arg1 previousSnapshot:(id)arg2 andAncestorSnapshot:(id)arg3 withOldVersion:(unsigned)arg4 andNewVersion:(unsigned)arg5 error:(id*)arg6 ;
-(id)createSnapshotFromBaselineForEntry:(id)arg1 error:(id*)arg2 ;
-(id)createSnapshotDictionaryForObjectWithEntry:(id)arg1 inTransactionLog:(id)arg2 withError:(id*)arg3 ;
-(id)globalIDIndexToLocalIDURIMap;
-(id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4 ;
-(id)conflictingObjectGlobalIDStr;
-(id)conflictingLogContent;
-(int)conflictingLogTransactionType;
-(id)conflictLogDate;
-(id)conflictingLogTransactionNumber;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)sourceObject;
@end

