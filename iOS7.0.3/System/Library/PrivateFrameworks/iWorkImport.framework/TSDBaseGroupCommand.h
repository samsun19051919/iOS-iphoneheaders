/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@protocol TSDSubcommandProvider;
@class NSArray, TSDGroupInfo;

@interface TSDBaseGroupCommand : TSKCommand {

	NSArray* mDrawables;
	TSDGroupInfo* mGroup;
	<TSDSubcommandProvider>* mSubcommandProvider;

}

@property (nonatomic,readonly) NSArray * drawables; 
@property (nonatomic,readonly) TSDGroupInfo * group; 
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)dealloc;
-(id)group;
-(id)drawables;
-(BOOL)process;
@end

