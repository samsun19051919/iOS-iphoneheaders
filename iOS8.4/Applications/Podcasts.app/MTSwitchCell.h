/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSettingsTableViewCell.h>

@class UISwitch;

@interface MTSwitchCell : MTSettingsTableViewCell {

	UISwitch* _toggle;
	/*^block*/id _toggleChanged;

}

@property (nonatomic,retain) UISwitch * toggle;              //@synthesize toggle=_toggle - In the implementation block
@property (nonatomic,copy) id toggleChanged;                 //@synthesize toggleChanged=_toggleChanged - In the implementation block
+(id)titleFont;
-(void)setupCell;
-(void)toggleChanged:(id)arg1 ;
-(id)toggleChanged;
-(void)setToggleChanged:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(UISwitch *)toggle;
-(void)setToggle:(UISwitch *)arg1 ;
@end
