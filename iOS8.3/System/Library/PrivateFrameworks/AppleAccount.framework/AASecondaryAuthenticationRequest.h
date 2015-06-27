/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:40:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest {

	NSString* _primaryToken;
	NSString* _dsid;

}
+(Class)responseClass;
-(id)urlString;
-(id)initWithDSID:(id)arg1 primaryToken:(id)arg2 ;
-(id)urlRequest;
@end
