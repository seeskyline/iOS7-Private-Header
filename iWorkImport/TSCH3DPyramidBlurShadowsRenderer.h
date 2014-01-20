/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DShadowsRenderer.h"



@class NSArray, TSCH3DPyramidBlurFBOResource;



__attribute__((visibility("hidden")))

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>

{

    NSArray *mPyramidResources;

    TSCH3DPyramidBlurFBOResource *mFinalShadowResource;

    tvec2_3b141483 mInitialSize;

    int mRequestedSize;

    float mTargetRadiusFactor;

}



- (id).cxx_construct;

- (float)blurSlackForQuality:(float)arg1;

- (void)dealloc;

- (id)initWithSize:(int)arg1 targetRadiusFactor:(float)arg2;

- (void)invalidate;

- (id)p_allResources;

- (void)p_setupResourcesForSize:(tvec2_3b141483)arg1;

- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(id)arg3;

- (id)shadowsFBOForContext:(id)arg1;

- (void)unprotectShadowInSession:(id)arg1;



@end

