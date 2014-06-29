/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField;

@interface AXEditableTextCell : PSTableCell <UITextFieldDelegate> {

	UITextField* _nameTextField;

}

@property (nonatomic,retain) UITextField * nameTextField;              //@synthesize nameTextField=_nameTextField - In the implementation block
-(bool)_accessibilityIgnoreInternalLabels;
-(void)setTextFieldValue:(id)arg1 specifier:(id)arg2 ;
-(id)textFieldValue:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(bool)textFieldShouldReturn:(id)arg1 ;
-(void)updateText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(id)nameTextField;
-(void)setNameTextField:(id)arg1 ;
@end
