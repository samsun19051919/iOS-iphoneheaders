/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:26:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <XPCObjects/NSSecureCoding.h>

@interface XPCMachSendRight : NSObject <NSSecureCoding> {

	unsigned _sendRight;

}
+(char)supportsSecureCoding;
+(id)wrapSendRight:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)sendRight;
@end
