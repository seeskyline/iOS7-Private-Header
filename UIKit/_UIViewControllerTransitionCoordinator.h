/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIViewControllerTransitionCoordinator.h"



@class NSMutableArray, _UIViewControllerTransitionContext;



__attribute__((visibility("hidden")))

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator>

{

    _UIViewControllerTransitionContext *__mainContext;

    NSMutableArray *__alongsideAnimations;

    NSMutableArray *__alongsideAnimationViews;

    NSMutableArray *__alongsideCompletions;

    NSMutableArray *__interactiveChangeHandlers;

}



@property(retain, nonatomic, setter=_setAlongsideAnimationViews:) NSMutableArray *_alongsideAnimationViews; // @synthesize _alongsideAnimationViews=__alongsideAnimationViews;

@property(retain, nonatomic, setter=_setAlongsideAnimations:) NSMutableArray *_alongsideAnimations; // @synthesize _alongsideAnimations=__alongsideAnimations;

- (id)_alongsideAnimations:(_Bool)arg1;

@property(retain, nonatomic, setter=_setAlongsideCompletions:) NSMutableArray *_alongsideCompletions; // @synthesize _alongsideCompletions=__alongsideCompletions;

- (id)_alongsideCompletions:(_Bool)arg1;

- (void)_applyBlocks:(id)arg1 releaseBlocks:(id)arg2;

@property(retain, nonatomic, setter=_setInteractiveChangeHandlers:) NSMutableArray *_interactiveChangeHandlers; // @synthesize _interactiveChangeHandlers=__interactiveChangeHandlers;

- (id)_interactiveChangeHandlers:(_Bool)arg1;

@property(nonatomic, setter=_setMainContext:) _UIViewControllerTransitionContext *_mainContext; // @synthesize _mainContext=__mainContext;

- (_Bool)animateAlongsideTransition:(id)arg1 completion:(void)arg2;

- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(id)arg2 completion:(void)arg3;

- (long long)completionCurve;

- (double)completionVelocity;

- (id)containerView;

- (void)dealloc;

- (void)handlerToInvokeOnInteractivityChanges:(id)arg1;

- (id)initWithMainContext:(id)arg1;

- (_Bool)initiallyInteractive;

- (_Bool)isAnimated;

- (_Bool)isCancelled;

- (_Bool)isCompleting;

- (_Bool)isInteractive;

- (void)notifyWhenInteractionEndsUsingBlock:(id)arg1;

- (double)percentComplete;

- (long long)presentationStyle;

- (double)transitionDuration;

- (id)viewControllerForKey:(id)arg1;



@end

