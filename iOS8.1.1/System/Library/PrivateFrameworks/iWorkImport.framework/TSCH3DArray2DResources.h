/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DMutable2DResources.h>

@class TSCH3DArray2D;

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources {

	TSCH3DArray2D* mResources;

}
+(id)resourcesWithSize:(const tvec2<int>*)arg1 ;
+(id)resourcesWithResource:(id)arg1 ;
+(id)mResources;
-(id)firstResource;
-(void)setResource:(id)arg1 atIndex:(const tvec2<int>*)arg2 ;
-(BOOL)hasResourceAtIndex:(const tvec2<int>*)arg1 ;
-(void)dealloc;
-(tvec2<int>)size;
-(id)initWithSize:(const tvec2<int>*)arg1 ;
-(id)resourceAtIndex:(const tvec2<int>*)arg1 ;
-(void)resize:(const tvec2<int>*)arg1 ;
@end
