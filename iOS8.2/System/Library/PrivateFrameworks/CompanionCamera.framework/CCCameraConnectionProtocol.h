/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/CompanionCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CCCameraConnectionProtocol
@required
-(void)takePhotoWithCountdown:(unsigned)arg1;
-(oneway void)xpc_setCameraMode:(int)arg1 interruptCapture:(char)arg2 completion:(/*^block*/id)arg3;
-(oneway void)xpc_beginVideo;
-(oneway void)xpc_endVideo;
-(oneway void)xpc_setPreviewEndpoint:(id)arg1;
-(oneway void)xpc_setFocusPoint:(id)arg1;
-(oneway void)xpc_fetchCurrentOrientationAndMirroring:(/*^block*/id)arg1;
-(oneway void)xpc_cancelCountdown;

@end
