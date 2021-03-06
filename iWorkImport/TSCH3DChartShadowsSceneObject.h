/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DSceneObject.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartShadowsSceneObject : TSCH3DSceneObject

{

}



+ (void)invalidateShadowsForScene:(id)arg1;

+ (void)setShadowPlanePadding:(box_a3bd9649)arg1 forScene:(id)arg2;

- (id)TSDShadowFromScene:(id)arg1;

- (_Bool)animationTextureSceneDelegateShouldSkipForRep:(id)arg1 finalElements:(_Bool)arg2 chunkStage:(long long)arg3;

- (tvec3_17f03ce0)calculateShadowCameraPosition:(float)arg1 center:(tvec3_17f03ce0)arg2 shadowQuality:(float)arg3;

- (id)effects;

- (void)getBounds:(id)arg1;

- (float)p_chartOpacityForScene:(id)arg1;

- (box_a3bd9649)p_shadowPlanePaddingForScene:(id)arg1;

- (void)prerender:(id)arg1;

- (void)prerenderShadows:(id)arg1 blurslack:(float)arg2 angle:(float)arg3 quality:(float)arg4 targetFBO:(id)arg5;

- (id)propertiesForScene:(id)arg1;

- (void)render:(id)arg1;

- (void)renderShadowScene:(id)arg1;

- (void)renderShadows:(id)arg1;



@end


