/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface FairPlayDecryptSession : NSObject {

	NSData* _dpInfo;
	void* _decryptSession;

}
-(id)initWithDPInfo:(id)arg1 ;
-(id)decryptBytes:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end
