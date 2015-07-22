/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage {

	unsigned _sequenceNumber;
	unsigned short _streamID;
	unsigned long long _payloadOffset;
	unsigned long long _payloadLength;
	NSData* _data;
	BOOL _expectsPeerResponse;
	BOOL _wantsAppAck;
	BOOL _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (assign,nonatomic) unsigned sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) unsigned short streamID;                               //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL expectsPeerResponse;                              //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (nonatomic,readonly) BOOL wantsAppAck;                                      //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) BOOL compressed;                                         //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,retain,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (assign,nonatomic) NSDate * expiryDate;                                     //@synthesize expiryDate=_expiryDate - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(NSData *)data;
-(BOOL)expectsPeerResponse;
-(unsigned short)streamID;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(BOOL)wantsAppAck;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(BOOL)arg3 wantsAppAck:(BOOL)arg4 compressed:(BOOL)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 data:(id)arg8 expiryDate:(id)arg9 ;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(NSString *)messageUUID;
-(NSString *)peerResponseIdentifier;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
@end
