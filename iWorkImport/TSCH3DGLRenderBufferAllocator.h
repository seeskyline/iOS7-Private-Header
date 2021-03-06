/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DRenderBufferAllocator.h"



@class TSCH3DRenderBufferStorage;



__attribute__((visibility("hidden")))

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator>

{

    TSCH3DRenderBufferStorage *mStorage;

}



+ (id)allocator;

+ (id)allocatorWithStorage:(id)arg1;

- (id)bufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1 internalFormat:(unsigned int)arg2 attachment:(unsigned int)arg3;

- (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;

- (void)dealloc;

- (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;

- (id)initWithStorage:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool isTexturable;



@end


