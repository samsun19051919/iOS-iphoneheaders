/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDBlock.h>

@class WDParagraphProperties, NSMutableArray;

@interface WDParagraph : WDBlock {

	WDParagraphProperties* mProperties;
	NSMutableArray* mRuns;

}
-(BOOL)isTextFrame;
-(BOOL)isContinuationOf:(id)arg1 ;
-(void)clearProperties;
-(id)addAnnotation:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(id)initWithText:(id)arg1 ;
-(id)properties;
-(unsigned long long)runCount;
-(id)runAt:(unsigned long long)arg1 ;
-(int)blockType;
-(id)runs;
-(id)addBookmark:(id)arg1 type:(int)arg2 ;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(id)addCharacterRun;
-(void)addRun:(id)arg1 ;
-(id)addSpecialCharacter;
-(id)addSymbol;
-(id)addFootnote;
-(id)addEndnote;
-(id)addFieldMarker;
-(id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(id)addHyperlinkFieldMarker;
-(id)initWithText:(id)arg1 string:(id)arg2 ;
-(void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)clearRuns;
-(id)addBookmark;
-(id)addDateTime:(id)arg1 ;
-(float)maxReflectionDistance;
-(id)runIterator;
-(id)newRunIterator;
-(void)removeRun:(id)arg1 ;
-(id)addHyperlinkFieldMarker:(int)arg1 ;
-(id)addFieldMarker:(int)arg1 ;
@end

