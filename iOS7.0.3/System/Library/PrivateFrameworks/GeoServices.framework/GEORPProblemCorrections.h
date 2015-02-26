/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, GEORPCorrectedCoordinate, NSMutableArray, GEORPCorrectedLabel, GEORPMapLocation, GEORPCorrectedSearch;

@interface GEORPProblemCorrections : PBCodable <NSCopying> {

	NSString* _comments;
	GEORPCorrectedCoordinate* _correctedCoordinate;
	NSMutableArray* _correctedFields;
	GEORPCorrectedLabel* _correctedLabel;
	GEORPMapLocation* _correctedMapLocation;
	GEORPCorrectedSearch* _correctedSearch;

}

@property (nonatomic,retain) NSMutableArray * correctedFields;                            //@synthesize correctedFields=_correctedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * correctedLabel;                        //@synthesize correctedLabel=_correctedLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedSearch; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearch;                      //@synthesize correctedSearch=_correctedSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * correctedMapLocation;                     //@synthesize correctedMapLocation=_correctedMapLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments;                                         //@synthesize comments=_comments - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasComments;
-(void)setCorrectedFields:(id)arg1 ;
-(void)setCorrectedLabel:(id)arg1 ;
-(void)setCorrectedCoordinate:(id)arg1 ;
-(void)setCorrectedSearch:(id)arg1 ;
-(void)setCorrectedMapLocation:(id)arg1 ;
-(void)addCorrectedFields:(id)arg1 ;
-(unsigned)correctedFieldsCount;
-(void)clearCorrectedFields;
-(id)correctedFieldsAtIndex:(unsigned)arg1 ;
-(BOOL)hasCorrectedLabel;
-(id)correctedLabel;
-(BOOL)hasCorrectedCoordinate;
-(id)correctedCoordinate;
-(BOOL)hasCorrectedSearch;
-(id)correctedSearch;
-(BOOL)hasCorrectedMapLocation;
-(id)correctedMapLocation;
-(id)correctedFields;
-(BOOL)readFrom:(id)arg1 ;
-(void)setComments:(id)arg1 ;
-(id)comments;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
