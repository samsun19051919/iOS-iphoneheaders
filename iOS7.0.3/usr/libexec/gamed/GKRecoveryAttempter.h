/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface GKRecoveryAttempter : NSObject {

	/*^block*/ id _attemptRecovery;

}
+(id)recoveryAttempterUsingHandler:(/*^block*/ id)arg1 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned)arg2 ;
@end
