/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class KNAnimatedSlideModel, KNAnimatedSlideView, KNPlaybackSession;



__attribute__((visibility("hidden")))

@interface KNAnimationRenderer : NSObject

{

    KNPlaybackSession *mSession;

    KNAnimatedSlideModel *mModel;

    KNAnimatedSlideView *mASV;

    _Bool mAreAnimationsPaused;

    id mPlugin;

    Class mPluginClass;

    unsigned long long mDirection;

    double mDuration;

    id <KNAnimationPluginContext> _pluginContext;

}



- (void)dealloc;

@property(nonatomic) unsigned long long direction; // @synthesize direction=mDirection;

@property(nonatomic) double duration; // @synthesize duration=mDuration;

- (void)pauseAnimations;

- (void)pauseAnimationsAtTime:(double)arg1;

@property(readonly, nonatomic) id plugin; // @synthesize plugin=mPlugin;

@property(readonly, nonatomic) Class pluginClass; // @synthesize pluginClass=mPluginClass;

@property(readonly, nonatomic) id <KNAnimationPluginContext> pluginContext; // @synthesize pluginContext=_pluginContext;

- (void)resumeAnimationsIfPaused;

- (void)resumeAnimationsIfPausedAtTime:(double)arg1;

- (void)setupPluginContext;

- (void)stopAnimations;



@end

