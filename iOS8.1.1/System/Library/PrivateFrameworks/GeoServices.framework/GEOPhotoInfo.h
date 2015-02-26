/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString;

@interface GEOPhotoInfo : PBCodable <NSCopying> {

	int _size;
	NSString* _url;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) BOOL hasSize; 
@property (assign,nonatomic) int size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;              //@synthesize url=_url - In the implementation block
-(id)initWithPlaceDataPhotoContent:(id)arg1 ;
-(void)dealloc;
-(int)size;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(int)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasUrl;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasSize;
-(void)setHasSize:(BOOL)arg1 ;
@end
