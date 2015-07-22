/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {

	NSString* _identifier;
	unsigned _version;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                   //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(unsigned)version;
-(void)handleInfo:(id)arg1 updatedManifest:(BOOL)arg2 ;
-(void)handleError:(id)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 version:(unsigned)arg2 ;
@end
