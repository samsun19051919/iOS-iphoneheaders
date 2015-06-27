/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MapKit/MKStackingViewControllerPreferredSizeUse.h>

@protocol MKPlaceSharedAttributionDelegate;
@class NSAttributedString, NSString;

@interface MKSharedAttributionViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse> {

	NSAttributedString* _attribution;
	id<MKPlaceSharedAttributionDelegate> _delegate;

}

@property (nonatomic,copy) NSAttributedString * attribution;                                    //@synthesize attribution=_attribution - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceSharedAttributionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char requiresPreferredContentSizeInStackingView; 
-(void)contentSizeDidChange;
-(char)requiresPreferredContentSizeInStackingView;
-(void)dealloc;
-(void)setDelegate:(id<MKPlaceSharedAttributionDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<MKPlaceSharedAttributionDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(NSAttributedString *)attribution;
-(void)setAttribution:(NSAttributedString *)arg1 ;
@end
