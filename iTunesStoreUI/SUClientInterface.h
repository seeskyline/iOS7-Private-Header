/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SUPreviewOverlayViewController, SUPurchaseManager, SUQueueSessionManager, SUTabBarController, SUUIAppearance, SUViewControllerFactory, UIColor;



@interface SUClientInterface : NSObject

{

    SUUIAppearance *_appearance;

    NSString *_clientIdentifier;

    UIColor *_darkKeyColor;

    id <SUClientInterfaceDelegatePrivate> _delegate;

    NSObject<OS_dispatch_queue> *_dispatchQueue;

    _Bool _ignoresExpectedClientsProtocol;

    UIColor *_lightKeyColor;

    NSString *_localStoragePath;

    SUPurchaseManager *_purchaseManager;

    SUQueueSessionManager *_queueSessionManager;

    NSMutableDictionary *_urlBagKeys;

    NSString *_userAgent;

    SUViewControllerFactory *_viewControllerFactory;

    _Bool _wasLaunchedFromLibrary;

}



- (id)URLBagKeyForIdentifier:(id)arg1;

- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;

- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;

- (void)_exitStoreWithReason:(long long)arg1;

- (void)_hidePreviewOverlayAnimated:(_Bool)arg1;

@property(getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) _Bool _ignoresExpectedClientsProtocol;

- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(_Bool)arg2;

- (id)_newScriptInterface;

- (void)_presentDialog:(id)arg1;

- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;

- (void)_returnToLibrary;

- (void)_setStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2;

- (void)_setStatusBarStyle:(long long)arg1 animated:(_Bool)arg2;

- (void)_showPreviewOverlayAnimated:(_Bool)arg1;

@property(copy) SUUIAppearance *appearance;

@property(copy) NSString *clientIdentifier;

@property(copy, nonatomic) UIColor *darkKeyColor; // @synthesize darkKeyColor=_darkKeyColor;

- (void)dealloc;

@property(nonatomic) id <SUClientInterfaceDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

@property(copy, nonatomic) UIColor *lightKeyColor; // @synthesize lightKeyColor=_lightKeyColor;

@property(copy) NSString *localStoragePath;

@property(readonly, nonatomic) SUPreviewOverlayViewController *previewOverlay;

@property(retain) SUPurchaseManager *purchaseManager;

@property(retain) SUQueueSessionManager *queueSessionManager;

- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;

@property(copy) NSString *userAgent;

@property(retain) SUViewControllerFactory *viewControllerFactory; // @synthesize viewControllerFactory=_viewControllerFactory;

@property _Bool wasLaunchedFromLibrary;

@property(readonly, nonatomic) SUTabBarController *tabBarController;



@end


