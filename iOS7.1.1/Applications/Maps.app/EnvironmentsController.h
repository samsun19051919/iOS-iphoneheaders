/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EnvironmentsControllerDelegate;
@class NSArray;

@interface EnvironmentsController : NSObject {

	NSArray* _defaultEnvironmentInfos;
	NSArray* _environmentInfos;
	NSArray* _customEnvironmentInfos;
	BOOL _enableCustomEnvironments;
	<EnvironmentsControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <EnvironmentsControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initEnablingCustomEnvironments:(BOOL)arg1 ;
-(void)reloadEnvironments;
-(id)environmentInfosForSection:(int)arg1 ;
-(void)addCustomEnvironment:(id)arg1 ;
-(void)removeCustomEnvironment:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
@end

