/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoardUIServices/TPNumberPadButtonProtocol.h>

@class NSString;

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol> {

	unsigned _char;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character;                              //@synthesize char=_char - In the implementation block
-(CGSize)intrinsicContentSize;
-(unsigned)character;
-(void)setCharacter:(unsigned)arg1 ;
-(id)initForCharacter:(unsigned)arg1 ;
@end
