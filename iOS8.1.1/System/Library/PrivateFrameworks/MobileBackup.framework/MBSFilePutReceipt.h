/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface MBSFilePutReceipt : PBCodable {

	NSData* _fileID;
	NSString* _putReceipt;

}

@property (nonatomic,readonly) BOOL hasFileID; 
@property (nonatomic,retain) NSData * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) BOOL hasPutReceipt; 
@property (nonatomic,retain) NSString * putReceipt;              //@synthesize putReceipt=_putReceipt - In the implementation block
-(BOOL)hasFileID;
-(void)setPutReceipt:(NSString *)arg1 ;
-(BOOL)hasPutReceipt;
-(NSString *)putReceipt;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)fileID;
-(void)setFileID:(NSData *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
