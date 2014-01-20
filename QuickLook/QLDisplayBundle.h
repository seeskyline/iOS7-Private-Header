/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class NSString, NSTimer, UIView;



@interface QLDisplayBundle : UIViewController

{

    id <QLPreviewItemInteractionDelegate> _delegate;

    id <QLPreviewItem> _previewItem;

    _Bool _overlayHidden;

    int _previewMode;

    _Bool _loaded;

    _Bool _loading;

    NSString *_password;

    NSTimer *_refreshTimer;

    long long _index;

    CDStruct_0109ef53 clientContext;

}



+ (double)allowedLoadingDelay;

+ (_Bool)needsAVControls;

- (void)_notifyDidLoadWithError:(id)arg1;

- (void)_performCancelLoad;

- (_Bool)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;

@property(readonly) UIView *accessoryView;

@property(readonly) int airPlayMode;

@property(readonly) UIView *airplayView;

- (void)beginScrubbing;

- (void)beginTrackingViewUpdates;

- (_Bool)canBeCached;

- (_Bool)canCopyToPasteboard;

- (void)cancelLoad;

- (void)cancelLoadIfNeeded;

@property CDStruct_0109ef53 clientContext; // @synthesize clientContext;

@property(readonly) struct CGRect contentFrame;

- (void)dealloc;

@property id <QLPreviewItemInteractionDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

- (void)didFailLoadingWithError:(id)arg1;

- (void)didLoad;

- (void)didReceiveMemoryWarning;

- (void)discardAirPlayView;

- (void)endScrubbing;

- (void)endTrackingViewUpdates;

- (void)enterBackground;

- (id)gestureRecognizersForFullScreenDisplay;

@property long long index; // @synthesize index=_index;

- (id)init;

- (void)loadIfNeededWithHints:(id)arg1;

- (void)loadWithHints:(id)arg1;

@property _Bool loaded; // @synthesize loaded=_loaded;

@property _Bool loading; // @synthesize loading=_loading;

- (long long)modalPresentationStyle;

- (_Bool)overlayIsHidden;

@property(retain) NSString *password;

- (id)pdfPreviewData;

@property(retain) id <QLPreviewItem> previewItem;

@property int previewMode;

- (id)printPageHelper;

- (id)printPageRenderer;

- (void)requiresDisplayBundle:(id)arg1 withHints:(id)arg2;

- (void)scrubToValue:(double)arg1;

- (void)setNavigationBarVerticalOffset:(double)arg1;

- (void)setOverlayHidden:(_Bool)arg1 duration:(double)arg2;

- (void)setupAirPlayView;

- (void)togglePlayState;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidUpdate;



@end

