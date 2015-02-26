/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVAssetTrackGroupInternal, NSArray;

@interface AVAssetTrackGroup : NSObject <NSCopying> {

	AVAssetTrackGroupInternal* _assetTrackGroup;

}

@property (nonatomic,readonly) NSArray * trackIDs; 
-(id)initWithAsset:(id)arg1 trackIDs:(id)arg2 ;
-(id)trackIDs;
-(id)_assetComparisonToken;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)finalize;
@end
