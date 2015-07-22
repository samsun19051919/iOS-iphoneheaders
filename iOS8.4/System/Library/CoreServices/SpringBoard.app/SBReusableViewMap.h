/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBReusableViewMapDelegate;
@class NSMapTable;

@interface SBReusableViewMap : NSObject {

	NSMapTable* _recycledViewsByClass;
	BOOL _invalidated;
	id<SBReusableViewMapDelegate> _delegate;

}

@property (assign,nonatomic) id<SBReusableViewMapDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)viewOfClass:(Class)arg1 ;
-(void)recycleView:(id)arg1 ;
-(void)purgeViewsForClass:(Class)arg1 ;
-(id)newViewOfClass:(Class)arg1 ;
-(void)purgeAllViews;
-(void)dealloc;
-(void)setDelegate:(id<SBReusableViewMapDelegate>)arg1 ;
-(id)init;
-(id<SBReusableViewMapDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
@end
