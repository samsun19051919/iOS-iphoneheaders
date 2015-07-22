/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class IMTimer, NSRecursiveLock, NSMutableDictionary, NSDate;

@interface IDSIDStatusQueryController : NSObject {

	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	NSMutableDictionary* _idStatusCache;
	NSMutableDictionary* _completionBlocks;
	NSDate* _startQueryDate;
	/*^block*/id _purgeCancelBlock;
	/*^block*/id _purgeEnqueueBlock;
	BOOL _loaded;
	int _numQueriesThisHour;

}
+(id)sharedInstance;
-(void)addCompletionBlock:(/*^block*/id)arg1 forUniqueIdentifier:(id)arg2 ;
-(void)removeCompletionBlockForUniqueIdentifier:(id)arg1 ;
-(void)_loadIfNeeded;
-(void)_updateCacheWithStatusUpdates:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 success:(BOOL)arg4 hadError:(BOOL)arg5 ;
-(void)_sendIDStatusChanges:(id)arg1 forService:(id)arg2 URI:(id)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(unsigned)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(unsigned)_IDStatusForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(id)_lookupDateForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(id)_cachedResultsForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(void)_lookupIDStatusForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(BOOL)arg5 allowQuery:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)requestIDStatusForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(BOOL)arg5 allowQuery:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_saveCache;
-(void)_loadCache;
-(void)requestIDStatusForID:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(BOOL)arg5 allowQuery:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)setCachedIDStatus:(unsigned)arg1 ForID:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 ;
-(id)currentCache;
-(id)currentCacheForService:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)_setPurgeTimer;
-(void)_flush;
@end
