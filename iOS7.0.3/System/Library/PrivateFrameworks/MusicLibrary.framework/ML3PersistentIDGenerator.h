/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject {

	ML3DatabaseConnection* _connection;
	long long _currentPersistentID;
	long long _nextUsedPersistentID;

}
-(void)_calculateNewRun;
-(id)initWithDatabaseConnection:(id)arg1 ;
-(long long)nextPersistentID;
-(void).cxx_destruct;
@end
