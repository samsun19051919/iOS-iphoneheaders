/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@protocol STAnimatableButtonSliceDelegate;
@interface STAnimatableButtonSlice : UIView {

	<STAnimatableButtonSliceDelegate>* _delegate;

}

@property (assign,nonatomic) <STAnimatableButtonSliceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end
