/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRenderBufferAllocator.h>

@class TSCH3DRenderBufferStorage, NSString;

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator> {

	TSCH3DRenderBufferStorage* mStorage;

}

@property (nonatomic,readonly) char isTexturable; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocator;
+(id)allocatorWithStorage:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(char)isTexturable;
-(id)colorbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
-(id)depthbufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 ;
-(id)bufferWithAllocatorInfo:(const RenderbufferAllocatorInfo*)arg1 internalFormat:(unsigned)arg2 attachment:(unsigned)arg3 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
@end
