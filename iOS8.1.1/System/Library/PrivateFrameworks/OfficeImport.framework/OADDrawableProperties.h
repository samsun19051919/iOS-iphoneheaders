/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class OADOrientedBounds, OADHyperlink, NSString;

@interface OADDrawableProperties : OADProperties {

	OADOrientedBounds* mOrientedBounds;
	OADHyperlink* mClickHyperlink;
	OADHyperlink* mHoverHyperlink;
	NSString* mTitle;
	NSString* mDescription;
	unsigned mHasAspectRatioLocked : 1;
	unsigned mAspectRatioLocked : 1;
	unsigned mHasWrdInline : 1;
	unsigned mWrdInline : 1;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)clickHyperlink;
-(id)orientedBounds;
-(void)setOrientedBounds:(id)arg1 ;
-(void)setAltDescription:(id)arg1 ;
-(id)hoverHyperlink;
-(void)setClickHyperlink:(id)arg1 ;
-(void)setHoverHyperlink:(id)arg1 ;
-(void)setAspectRatioLocked:(BOOL)arg1 ;
-(void)setWrdInline:(BOOL)arg1 ;
-(void)setAltTitle:(id)arg1 ;
-(BOOL)hasAspectRatioLocked;
-(BOOL)isAspectRatioLocked;
-(BOOL)hasClickHyperlink;
-(BOOL)hasHoverHyperlink;
-(BOOL)hasWrdInline;
-(BOOL)isWrdInline;
-(id)altTitle;
-(BOOL)hasAltTitle;
-(id)altDescription;
-(BOOL)hasAltDescription;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(BOOL)hasOrientedBounds;
@end
