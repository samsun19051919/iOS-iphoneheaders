/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoPassKit/NSCopying.h>

@class NSData;

@interface NPKProtoBitmap : PBCodable <NSCopying> {

	unsigned long long _bitsPerComponent;
	unsigned long long _bitsPerPixel;
	unsigned long long _bytesPerRow;
	unsigned long long _height;
	unsigned long long _width;
	NSData* _bitmapData;
	unsigned _bitmapInfo;

}

@property (assign,nonatomic) unsigned long long width;                         //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;                        //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long bitsPerComponent;              //@synthesize bitsPerComponent=_bitsPerComponent - In the implementation block
@property (assign,nonatomic) unsigned long long bitsPerPixel;                  //@synthesize bitsPerPixel=_bitsPerPixel - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                   //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned bitmapInfo;                              //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
@property (nonatomic,retain) NSData * bitmapData;                              //@synthesize bitmapData=_bitmapData - In the implementation block
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerRow;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)bitsPerComponent;
-(unsigned long long)width;
-(unsigned long long)height;
-(id)dictionaryRepresentation;
-(void)setBitsPerComponent:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setBitmapData:(NSData *)arg1 ;
-(unsigned long long)bitsPerPixel;
-(void)setBitsPerPixel:(unsigned long long)arg1 ;
-(void)setBitmapInfo:(unsigned)arg1 ;
-(NSData *)bitmapData;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)bitmapInfo;
@end
