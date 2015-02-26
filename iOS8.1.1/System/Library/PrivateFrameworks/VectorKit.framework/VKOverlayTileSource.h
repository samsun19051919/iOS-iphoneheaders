/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTileSource.h>

@class VKTileSource, NSMutableArray, NSArray;

@interface VKOverlayTileSource : VKTileSource {

	VKTileSource* _tileSourceToMatch;
	NSMutableArray* _overlays;

}

@property (nonatomic,readonly) NSArray * overlays;              //@synthesize overlays=_overlays - In the implementation block
-(void)dealloc;
-(long long)tileSize;
-(long long)minimumZoomLevel;
-(long long)maximumZoomLevel;
-(NSArray *)overlays;
-(void)removeOverlay:(id)arg1 ;
-(void)addOverlay:(id)arg1 ;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
-(void)matchTilesFromSource:(id)arg1 ;
-(id)tileForData:(id)arg1 downloadKey:(const GEOTileKey*)arg2 sourceKey:(const VKTileKey*)arg3 ;
-(unsigned)minimumDownloadZoomLevel;
-(void)fetchTileForKey:(const VKTileKey*)arg1 ;
-(id)tileForKey:(const VKTileKey*)arg1 ;
-(BOOL)canFetchTileForKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)arg1 ;
-(unsigned)maximumDownloadZoomLevel;
-(long long)zEquivalenceClass;
-(GEOTileKey)downloadKeyAtX:(unsigned)arg1 y:(unsigned)arg2 z:(unsigned)arg3 ;
-(VKTileKey)nativeKeyForRenderKey:(const VKTileKey*)arg1 ;
-(VKTileKey)sourceKeyForDownloadKey:(const GEOTileKey*)arg1 ;
-(void)_overlayBoundingMapRegionChanged:(id)arg1 ;
@end
