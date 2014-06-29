/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,retain) SASource * groupSource; 
+(id)contactGroup;
+(id)contactGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)groupSource;
-(void)setGroupSource:(id)arg1 ;
@end
