/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CenteringView : UIView {

	UIView* _contentView;
	int _contentPlacement;
	/*^block*/id _testForFindingSuperviewToCenterIn;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,retain) UIView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) int contentPlacement;                            //@synthesize contentPlacement=_contentPlacement - In the implementation block
@property (nonatomic,copy) id testForFindingSuperviewToCenterIn;              //@synthesize testForFindingSuperviewToCenterIn=_testForFindingSuperviewToCenterIn - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                       //@synthesize contentInset=_contentInset - In the implementation block
-(void)setContentPlacement:(int)arg1 ;
-(CGRect)_centeringBounds;
-(void)setTestForFindingSuperviewToCenterIn:(id)arg1 ;
-(int)contentPlacement;
-(CGRect)frameForView:(id)arg1 contentPlacement:(int)arg2 ;
-(id)testForFindingSuperviewToCenterIn;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
@end
