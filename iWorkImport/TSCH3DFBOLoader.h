/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DResourceLoader.h"


__attribute__((visibility("hidden")))

@interface TSCH3DFBOLoader : TSCH3DResourceLoader

{

    tvec2_3b141483 mSize;

    struct FramebufferAttributes mFramebufferAttributes;

    id <TSCH3DRenderBufferAllocator> mColorAllocator;

    id <TSCH3DRenderBufferAllocator> mDepthAllocator;

}



+ (id)loaderWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(const tvec2_3b141483 *)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;

- (id).cxx_construct;

- (void)bindHandle:(id)arg1 config:(void *)arg2;

@property(readonly, nonatomic) id <TSCH3DRenderBufferAllocator> colorAllocator; // @synthesize colorAllocator=mColorAllocator;

- (void)deactivateHandle:(id)arg1 insideContext:(id)arg2;

- (void)dealloc;

@property(readonly, nonatomic) id <TSCH3DRenderBufferAllocator> depthAllocator; // @synthesize depthAllocator=mDepthAllocator;

- (id)description;

@property(readonly, nonatomic) struct FramebufferAttributes framebufferAttributes; // @synthesize framebufferAttributes=mFramebufferAttributes;

- (id)generateHandleWithConfig:(void *)arg1;

- (unsigned long long)hash;

- (id)initWithFramebufferAttributes:(const struct FramebufferAttributes *)arg1 size:(const tvec2_3b141483 *)arg2 colorAllocator:(id)arg3 depthAllocator:(id)arg4;

- (_Bool)isEqual:(id)arg1;

- (struct SessionLoadResourceResult)loadResource:(id)arg1 insideSession:(id)arg2;

@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;

- (unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void *)arg4;



@end


