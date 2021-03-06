/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOTrafficIncident : PBCodable <NSCopying> {

	double _endTime;
	double _lastUpdated;
	double _startTime;
	long long _uID;
	NSString* _info;
	NSString* _location;
	NSString* _title;
	int _type;
	int _vertexCount;
	int _vertexOffset;
	SCD_Struct_GE59 _has;

}

@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) long long uID;                     //@synthesize uID=_uID - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasInfo; 
@property (nonatomic,retain) NSString * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) NSString * location;               //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasVertexOffset; 
@property (assign,nonatomic) int vertexOffset;                  //@synthesize vertexOffset=_vertexOffset - In the implementation block
@property (assign,nonatomic) BOOL hasVertexCount; 
@property (assign,nonatomic) int vertexCount;                   //@synthesize vertexCount=_vertexCount - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL hasLastUpdated; 
@property (assign,nonatomic) double lastUpdated;                //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                          //@synthesize type=_type - In the implementation block
-(void)setEndTime:(double)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)info;
-(NSString *)location;
-(id)dictionaryRepresentation;
-(double)startTime;
-(BOOL)hasTitle;
-(void)setInfo:(NSString *)arg1 ;
-(void)setUID:(long long)arg1 ;
-(void)setHasUID:(BOOL)arg1 ;
-(BOOL)hasUID;
-(void)setVertexOffset:(int)arg1 ;
-(void)setVertexCount:(int)arg1 ;
-(BOOL)hasInfo;
-(void)setHasVertexOffset:(BOOL)arg1 ;
-(BOOL)hasVertexOffset;
-(void)setHasVertexCount:(BOOL)arg1 ;
-(BOOL)hasVertexCount;
-(void)setHasEndTime:(BOOL)arg1 ;
-(void)setLastUpdated:(double)arg1 ;
-(void)setHasLastUpdated:(BOOL)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setLocation:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)vertexCount;
-(long long)uID;
-(BOOL)hasLocation;
-(BOOL)hasStartTime;
-(BOOL)hasEndTime;
-(double)endTime;
-(BOOL)hasLastUpdated;
-(double)lastUpdated;
-(int)vertexOffset;
@end

