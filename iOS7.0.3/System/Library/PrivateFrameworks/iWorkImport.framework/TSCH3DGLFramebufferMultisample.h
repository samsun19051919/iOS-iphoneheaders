/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@protocol TSCH3DGLResolveFramebuffer;
@class TSCH3DGLFBO;

@interface TSCH3DGLFramebufferMultisample : NSObject <TSCHUnretainedParent> {

	<TSCH3DGLResolveFramebuffer>* mParent;
	FramebufferAttributes mAttributes;
	TSCH3DGLFBO* mMultisampleFBO;
	BOOL mResolved;
	BOOL mMultisampleDisabled;

}

@property (nonatomic,readonly) BOOL usingMultisample; 
@property (nonatomic,readonly) BOOL resolved; 
@property (nonatomic,readonly) FramebufferAttributes attributes; 
+(id)multisampleWithParent:(id)arg1 framebufferAttributes:(const FramebufferAttributes*)arg2 ;
-(void)clearParent;
-(BOOL)activateInsideSession:(id)arg1 ;
-(void)disableSamplingInSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(id)initWithParent:(id)arg1 framebufferAttributes:(const FramebufferAttributes*)arg2 ;
-(BOOL)p_supportsMultisample;
-(id)multisampleFBOResource;
-(FramebufferAttributes)p_clampedAttributes;
-(SessionLoadResourceResult)p_loadFramebufferInSession:(id)arg1 ;
-(BOOL)usingMultisample;
-(BOOL)p_createMultisampleFBOOnDemandInsideSession:(id)arg1 returningResolveFramebufferActivated:(BOOL*)arg2 ;
-(void)resolveInSession:(id)arg1 ;
-(BOOL)resolved;
-(void)dealloc;
-(id).cxx_construct;
-(FramebufferAttributes)attributes;
@end
