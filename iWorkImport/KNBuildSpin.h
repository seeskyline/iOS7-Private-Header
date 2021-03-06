/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNAnimationEffect.h"


#import "KNAnimationPluginArchiving.h"

#import "KNChunkableBuildAnimator.h"

#import "KNFrameBuildAnimator.h"



@class KNAnimParameterGroup, KNMotionBlurAnimationPluginWrapper;



__attribute__((visibility("hidden")))

@interface KNBuildSpin : KNAnimationEffect <KNChunkableBuildAnimator, KNFrameBuildAnimator, KNAnimationPluginArchiving>

{

    KNAnimParameterGroup *mParameterGroup;

    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (id)customAttributes;

+ (id)defaultAttributes;

+ (unsigned long long)directionType;

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;

+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;

+ (id)localizedMenuString:(int)arg1;

+ (id)supportedTypes;

+ (id)thumbnailImageNameForType:(int)arg1;

+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;

- (void)animationDidEndWithContext:(id)arg1;

- (void)animationWillBeginWithContext:(id)arg1;

- (id)animationsWithContext:(id)arg1;

- (void)dealloc;

- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

- (id)initWithAnimationContext:(id)arg1;

- (void)renderFrameWithContext:(id)arg1;



@end


