/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:00:31 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ABAssistantSyncAnchor : NSObject {

	int _sequenceNumber;
	int _recordID;

}

@property (nonatomic,readonly) int sequenceNumber; 
@property (nonatomic,readonly) int recordID; 
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL shouldResetSync; 
@property (nonatomic,readonly) BOOL shouldFullSync; 
@property (nonatomic,readonly) BOOL shouldResumePreviousFullSync; 
@property (nonatomic,readonly) BOOL shouldDeleteSyncedRecords; 
+(id)stringValueWithSequenceNumber:(int)arg1 recordID:(int)arg2 ;
+(id)anchorWithString:(id)arg1 forAddressBook:(void*)arg2 ;
+(id)stringValueForFullSyncWithRecordID:(int)arg1 ;
-(BOOL)shouldFullSync;
-(BOOL)shouldResetSync;
-(id)initWithSequenceNumber:(int)arg1 recordID:(int)arg2 ;
-(BOOL)shouldDeleteSyncedRecords;
-(BOOL)shouldResumePreviousFullSync;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(id)init;
-(id)description;
-(NSString *)stringValue;
-(int)recordID;
-(void)resetSync;
-(int)sequenceNumber;
@end
