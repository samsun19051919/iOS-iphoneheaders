/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTSetting.h>

@class MTOptionsDescription, NSString;

@interface MTOptionSetting : MTSetting {

	MTOptionsDescription* _options;
	NSString* _headerTitle;

}

@property (nonatomic,retain) MTOptionsDescription * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
-(id)currentShortTitle;
-(void)setOptions:(MTOptionsDescription *)arg1 ;
-(MTOptionsDescription *)options;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end
