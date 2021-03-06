/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCHChartSeries, NSData;

@interface TSCHPointArrayCache : NSObject {

	TSCHChartSeries* mSeries;
	CGRect mAreaFrame;
	unsigned long long mStart;
	unsigned long long mEnd;
	bool mCull;
	NSData* mData;

}
+(id)p_getCacheCreate:(bool)arg1 ;
+(SCD_Struct_TS456*)cachedPointsForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(bool)arg5 outCount:(unsigned long long*)arg6 ;
+(void)setCachedPointsForSeries:(id)arg1 inAreaFrame:(CGRect)arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(bool)arg5 points:(SCD_Struct_TS456*)arg6 count:(unsigned long long)arg7 ;
+(void)clearCache;
-(bool)matchesSeries:(id)arg1 areaFrame:(CGRect)arg2 start:(unsigned long long)arg3 end:(unsigned long long)arg4 cull:(bool)arg5 ;
-(void)dealloc;
-(id).cxx_construct;
@end

