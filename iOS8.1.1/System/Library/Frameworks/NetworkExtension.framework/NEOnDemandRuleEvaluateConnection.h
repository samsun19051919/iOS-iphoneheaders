/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEOnDemandRule.h>

@class NSArray;

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule {

	NSArray* _connectionRules;

}

@property (copy) NSArray * connectionRules;              //@synthesize connectionRules=_connectionRules - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setConnectionRules:(NSArray *)arg1 ;
-(NSArray *)connectionRules;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

