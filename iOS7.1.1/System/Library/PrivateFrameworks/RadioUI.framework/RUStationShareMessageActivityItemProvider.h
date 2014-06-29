/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class NSLock, NSString, RUStationShareInformationProvider;

@interface RUStationShareMessageActivityItemProvider : UIActivityItemProvider {

	NSLock* _lock;
	NSString* _shareMessage;
	NSString* _shareMessageSubject;
	RUStationShareInformationProvider* _shareInformationProvider;

}

@property (nonatomic,readonly) RUStationShareInformationProvider * shareInformationProvider;              //@synthesize shareInformationProvider=_shareInformationProvider - In the implementation block
-(id)item;
-(void).cxx_destruct;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)initWithShareInformationProvider:(id)arg1 ;
-(id)shareInformationProvider;
-(bool)_isActivityTypeAllowed:(id)arg1 ;
@end
