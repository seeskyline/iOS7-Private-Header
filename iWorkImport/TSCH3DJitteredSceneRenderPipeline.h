/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DSceneRenderPipeline.h"


#import "TSCH3DMultipassRenderPipeline.h"



@class TSCH3DFramebufferAccumulationPipeline, TSCH3DGLFramebuffer;



__attribute__((visibility("hidden")))

@interface TSCH3DJitteredSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline>

{

    TSCH3DGLFramebuffer *mRenderingFBO;

    TSCH3DFramebufferAccumulationPipeline *mAccumulationPipeline;

    long long mJitter;

    long long mTotalJitters;

    long long mRefinementJitters;

}



@property(retain, nonatomic) TSCH3DFramebufferAccumulationPipeline *accumulationPipeline; // @synthesize accumulationPipeline=mAccumulationPipeline;

- (void)dealloc;

- (id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3;

- (_Bool)isActivePass;

- (id)jitterCamera:(id)arg1;

- (_Bool)multipassRenderingIsDone;

- (_Bool)refinementIsReady;

- (void)releaseResources;

- (_Bool)render;

@property(retain, nonatomic) TSCH3DGLFramebuffer *renderingFBO; // @synthesize renderingFBO=mRenderingFBO;

- (id)renderingFBOResource;

- (void)resetMultipassRendering;

- (void)setFramebuffer:(id)arg1;

- (void)skipLowQualityPass;

- (_Bool)updatesTargetFramebuffer;



@end


