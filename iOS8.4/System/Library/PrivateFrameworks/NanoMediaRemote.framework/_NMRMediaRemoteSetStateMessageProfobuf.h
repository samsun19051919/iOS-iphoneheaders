/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _applicationInfo;
	NSData* _digest;
	NSData* _nowPlayingInfo;
	NSData* _payload;
	int _state;
	NSData* _supportedCommands;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasDigest; 
@property (nonatomic,retain) NSData * digest;                          //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) NSData * nowPlayingInfo;                  //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationInfo; 
@property (nonatomic,retain) NSData * applicationInfo;                 //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommands; 
@property (nonatomic,retain) NSData * supportedCommands;               //@synthesize supportedCommands=_supportedCommands - In the implementation block
-(NSData *)digest;
-(void)setDigest:(NSData *)arg1 ;
-(NSData *)nowPlayingInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSData *)payload;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)hasPayload;
-(NSData *)applicationInfo;
-(void)setSupportedCommands:(NSData *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setApplicationInfo:(NSData *)arg1 ;
-(BOOL)hasDigest;
-(BOOL)hasApplicationInfo;
-(BOOL)hasSupportedCommands;
-(BOOL)hasNowPlayingInfo;
-(NSData *)supportedCommands;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setNowPlayingInfo:(NSData *)arg1 ;
@end

