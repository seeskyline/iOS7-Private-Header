/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIRemoteViewController.h"



#import "GKServiceViewControllerDelegate.h"



@class GKGame, GKHostedViewController, NSMutableDictionary, UIColor;



@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate>

{

    _Bool _didSetRemoteGame;

    _Bool _viewDidAppear;

    GKHostedViewController *_managingViewControllerWeak;

    GKGame *_game;

    NSMutableDictionary *_dirtyProperties;

    UIColor *_previousStatusBarColor;

    id _blockToPerformAfterViewDidAppear;

}



+ (id)exportedInterface;

+ (id)serviceViewControllerInterface;

+ (_Bool)shouldPropagateAppearanceCustomizations;

- (long long)_desiredStatusBarStyle;

- (_Bool)_dismissSelfAfterGettingShouldCancel;

- (_Bool)_dismissSelfAfterGettingShouldFinish;

- (void)_performBlockAfterViewDidAppearIfNeeded;

- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;

@property(copy, nonatomic) id blockToPerformAfterViewDidAppear; // @synthesize blockToPerformAfterViewDidAppear=_blockToPerformAfterViewDidAppear;

- (void)dealloc;

@property(nonatomic) _Bool didSetRemoteGame; // @synthesize didSetRemoteGame=_didSetRemoteGame;

@property(retain, nonatomic) NSMutableDictionary *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;

@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;

@property(nonatomic) GKHostedViewController *managingViewController; // @synthesize managingViewController=_managingViewControllerWeak;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (id)observedKeyPaths;

- (void)populateInitialStateForRemoteView:(id)arg1;

@property(retain, nonatomic) UIColor *previousStatusBarColor; // @synthesize previousStatusBarColor=_previousStatusBarColor;

- (void)readyToPresentInController:(id)arg1;

- (void)remoteViewControllerIsCanceling;

- (void)remoteViewControllerIsFinishing;

@property(readonly, nonatomic) _Bool serviceNeedsCurrentGame;

@property(readonly, nonatomic) _Bool serviceNeedsLocalPlayer;

- (_Bool)serviceNeedsStatusBarHeightHack;

- (void)setValue:(id)arg1 forKeyPath:(id)arg2;

@property(nonatomic) _Bool viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;

- (void)setupRemoteView;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;



@end

