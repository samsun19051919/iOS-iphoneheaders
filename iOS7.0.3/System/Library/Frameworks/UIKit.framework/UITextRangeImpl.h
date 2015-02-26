/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITextRange.h>

@class DOMRange;

@interface UITextRangeImpl : UITextRange {

	DOMRange* _domRange;
	int _affinityIfCollapsed;

}

@property (nonatomic,retain) DOMRange * domRange;              //@synthesize domRange=_domRange - In the implementation block
@property (assign,nonatomic) int affinity;                     //@synthesize affinityIfCollapsed=_affinityIfCollapsed - In the implementation block
+(id)wrapDOMRange:(id)arg1 withAffinity:(int)arg2 ;
+(id)wrapDOMRange:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(id)start;
-(id)end;
-(int)affinity;
-(id)domRange;
-(void)setDomRange:(id)arg1 ;
-(void)setAffinity:(int)arg1 ;
-(void)adjustAffinityOfPosition:(id)arg1 isStart:(BOOL)arg2 ;
@end
