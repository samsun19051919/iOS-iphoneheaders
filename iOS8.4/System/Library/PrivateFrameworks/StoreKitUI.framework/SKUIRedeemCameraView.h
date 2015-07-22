/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SKUIRedeemCameraViewDelegate;
@class SKUIClientContext, SKUIRedeemTextField, SKUIITunesPassConfiguration, SKUIRedeemITunesPassLockup, SKUIRedeemCameraLandingView, UIView, UIButton, UIImage, NSString;

@interface SKUIRedeemCameraView : UIView <UITextFieldDelegate> {

	SKUIClientContext* _clientContext;
	id<SKUIRedeemCameraViewDelegate> _delegate;
	SKUIRedeemTextField* _inputAccessoryTextField;
	SKUIITunesPassConfiguration* _iTunesPassConfiguration;
	SKUIRedeemITunesPassLockup* _iTunesPassLockup;
	SKUIRedeemCameraLandingView* _landingView;
	UIView* _overlay;
	UIView* _redeemerView;
	UIButton* _termsButton;
	SKUIRedeemTextField* _textField;

}

@property (assign,nonatomic,__weak) id<SKUIRedeemCameraViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIITunesPassConfiguration * ITunesPassConfiguration;              //@synthesize iTunesPassConfiguration=_iTunesPassConfiguration - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SKUIRedeemCameraViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SKUIRedeemCameraViewDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIImage *)image;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)start;
-(void)showKeyboard;
-(id)initWithClientContext:(id)arg1 ;
-(void)_termsButtonAction:(id)arg1 ;
-(SKUIITunesPassConfiguration *)ITunesPassConfiguration;
-(void)setITunesPassConfiguration:(SKUIITunesPassConfiguration *)arg1 ;
-(void)_tapGestureAction:(id)arg1 ;
-(void)_landingButtonAction:(id)arg1 ;
-(id)_newTextFieldWithClientContext:(id)arg1 placeholderColor:(id)arg2 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)textFieldTextDidChange:(id)arg1 ;
-(void)_iTunesPassLearnMoreAction:(id)arg1 ;
-(BOOL)_isShowingRedeemer;
-(void)_pauseRedeemer;
-(void)_showRedeemer:(BOOL)arg1 ;
-(void)_hideKeyboard;
-(void)_resumeRedeemer;
@end
