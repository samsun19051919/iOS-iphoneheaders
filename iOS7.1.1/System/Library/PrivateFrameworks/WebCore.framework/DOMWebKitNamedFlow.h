/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString;

@interface DOMWebKitNamedFlow : DOMObject

@property (readonly) NSString * name; 
@property (readonly) bool overset; 
@property (readonly) int firstEmptyRegionIndex; 
-(void)dealloc;
-(id)name;
-(void)finalize;
-(void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3 ;
-(void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(bool)arg3 ;
-(bool)dispatchEvent:(id)arg1 ;
-(bool)overset;
-(int)firstEmptyRegionIndex;
-(id)getRegionsByContent:(id)arg1 ;
-(id)getRegions;
-(id)getContent;
@end

