/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAConnectionPolicy;

@interface SASetConnectionHeader : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * aceHostHeader; 
@property (nonatomic,retain) SAConnectionPolicy * connectionPolicy; 
@property (assign,nonatomic) bool reconnectNow; 
+(id)setConnectionHeader;
+(id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)connectionPolicy;
-(id)aceHostHeader;
-(void)setAceHostHeader:(id)arg1 ;
-(void)setConnectionPolicy:(id)arg1 ;
-(bool)reconnectNow;
-(void)setReconnectNow:(bool)arg1 ;
@end
