/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface __NSSKGraphE : NSObject {

	edge* _edges;
	vertex* _vertices;
	unsigned long long _numV;
	unsigned long long _numE;
	unsigned long long _currE;
	unsigned long long _dump;
	unsigned long long _l_end;

}
-(id)initWithNumberOfVertices:(unsigned long long)arg1 numberOfEdges:(unsigned long long)arg2 ;
-(BOOL)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2 ;
-(unsigned long long)numOfEdges;
-(edge*)isAcyclic;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)finalize;
@end
