/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPReader.h>
#import <iWorkImport/TSPDatabaseUnarchiverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPDatabase, NSHashTable, NSString;

@interface TSPDatabaseReader : TSPReader <TSPDatabaseUnarchiverDelegate> {

	NSObject*<OS_dispatch_queue> _databaseQueue;
	TSPDatabase* _database;
	unsigned long long _databaseVersion;
	hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >* _readIdentifiers;
	NSHashTable* _datas;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) char didFinishResolvingReferences; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) char isFromCopy; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
-(id)objectUUIDMap;
-(id)initWithComponent:(id)arg1 delegate:(id)arg2 ;
-(void)beginReadingWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUnarchiveObject:(id)arg1 withUnarchiver:(id)arg2 ;
-(void)unarchiveObjectWithIdentifierAsync:(long long)arg1 ;
-(id)newUnarchiverWithDatabaseObject:(id)arg1 ;
-(Message*)newDataMessageForDatabaseObject:(id)arg1 ;
-(Message*)newImageDataMessageForDatabaseObject:(id)arg1 ;
-(char)validateObjectIdentifierForObject:(id)arg1 ;
-(id)dataForOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(id)filenameFromOldDataArchive:(const DatabaseDataArchive*)arg1 ;
-(set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)filterIdentifiers:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long> >*)arg1 ;
-(id)initWithComponent:(id)arg1 finalizeHandlerQueue:(id)arg2 delegate:(id)arg3 database:(id)arg4 databaseVersion:(unsigned long long)arg5 ;
-(void)dealloc;
-(id)init;
@end
