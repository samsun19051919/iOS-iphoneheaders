/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIApplicationExtensionActivity.h>

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity {

	NSString* _builtinActivityType;
	SLComposeViewController* _socialComposeViewController;

}

@property (nonatomic,copy) NSString * builtinActivityType;                                       //@synthesize builtinActivityType=_builtinActivityType - In the implementation block
@property (nonatomic,retain) SLComposeViewController * socialComposeViewController;              //@synthesize socialComposeViewController=_socialComposeViewController - In the implementation block
+(int)activityCategory;
-(void)dealloc;
-(id)debugDescription;
-(void)_cleanup;
-(id)activityType;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(id)activityViewController;
-(id)initWithActivityType:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(char)_canBeExcludedByActivityViewController:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(char)_presentActivityOnViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)_dismissActivityFromViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBuiltinActivityType:(NSString *)arg1 ;
-(NSString *)builtinActivityType;
-(void)setSocialComposeViewController:(SLComposeViewController *)arg1 ;
-(SLComposeViewController *)socialComposeViewController;
@end
