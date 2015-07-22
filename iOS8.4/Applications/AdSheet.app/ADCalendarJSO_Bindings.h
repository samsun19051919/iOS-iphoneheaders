/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary, JSValue;


@protocol ADCalendarJSO_Bindings <JSExport>
@property (nonatomic,retain) NSDictionary * event; 
@property (nonatomic,retain) JSValue * listener; 
@property (assign,nonatomic) JSValue * rect; 
@optional
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3 __JS_EXPORT_AS__presentComposer:(id)arg4;

@required
-(void)presentComposerWithEventProperties:(id)arg1 listener:(id)arg2 popoverRect:(id)arg3;
-(JSValue *)rect;
-(void)setRect:(id)arg1;
-(void)setEvent:(id)arg1;
-(NSDictionary *)event;
-(JSValue *)listener;
-(void)setListener:(id)arg1;

@end
