/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DChartRenderCycle, TSCH3DChartRep, TSCH3DChartRepAnimationTextureSceneDelegate, TSCH3DScene;



__attribute__((visibility("hidden")))

@interface TSCH3DChartRepAnimationTextureState : NSObject

{

    TSCH3DChartRep *mRep;

    TSCH3DScene *mScene;

    TSCH3DChartRepAnimationTextureSceneDelegate *mRenderIndexDelegate;

    TSCH3DChartRenderCycle *mRenderCycle;

}



- (void)dealloc;

- (id)description;

- (id)initWithRep:(id)arg1 scene:(id)arg2 finalTexture:(_Bool)arg3 renderCycle:(id)arg4;



@end

