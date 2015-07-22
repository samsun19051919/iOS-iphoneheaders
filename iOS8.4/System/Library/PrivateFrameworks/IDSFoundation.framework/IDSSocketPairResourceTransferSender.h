/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString, NSDictionary;

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {

	NSString* _resourcePath;
	NSDictionary* _metadata;
	NSDictionary* _resourceAttributes;
	BOOL _sentFirstMessage;
	unsigned long long _totalBytes;
	unsigned long long _nextByte;
	BOOL _done;
	int _fileDescriptor;
	unsigned _maxChunkSize;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;

}

@property (nonatomic,readonly) BOOL sentFirstMessage;                      //@synthesize sentFirstMessage=_sentFirstMessage - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                //@synthesize done=_done - In the implementation block
@property (assign,nonatomic) unsigned maxChunkSize;                        //@synthesize maxChunkSize=_maxChunkSize - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,retain,readonly) NSString * messageUUID;              //@synthesize messageUUID=_messageUUID - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(id)description;
-(void)reset;
-(id)nextMessage;
-(BOOL)isDone;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(NSString *)messageUUID;
-(id)readNextBytes;
-(id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(BOOL)arg5 wantsAppAck:(BOOL)arg6 compressed:(BOOL)arg7 peerResponseIdentifier:(id)arg8 messageUUID:(id)arg9 ;
-(BOOL)sentFirstMessage;
-(unsigned)maxChunkSize;
-(void)setMaxChunkSize:(unsigned)arg1 ;
@end
