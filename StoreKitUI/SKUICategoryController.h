/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "SKUICategoryTableViewControllerDelegate.h"

#import "UIPopoverControllerDelegate.h"



@class NSArray, NSOperationQueue, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUICategoryTableViewController, SKUIClientContext, SKUISegmentedControl, SSVLoadURLOperation, UIBarButtonItem, UIPopoverController, UISegmentedControl, UIViewController;



@interface SKUICategoryController : NSObject <SKUICategoryTableViewControllerDelegate, UIPopoverControllerDelegate>

{

    SKUICategoryArtworkLoader *_artworkLoader;

    UIBarButtonItem *_button;

    SKUIClientContext *_clientContext;

    UIViewController *_contentsController;

    NSURL *_defaultURL;

    id <SKUICategoryControllerDelegate> _delegate;

    SSVLoadURLOperation *_loadOperation;

    NSOperationQueue *_operationQueue;

    UIPopoverController *_popover;

    SKUICategory *_rootCategory;

    NSURL *_selectedURL;

    SKUISegmentedControl *_segmentedControl;

    long long _segmentedControlLength;

    NSArray *_segmentedControlSegments;

    SKUICategoryTableViewController *_tableViewController;

}



- (void).cxx_destruct;

- (id)_artworkLoader;

- (id)_metricsLocationsWithIndex:(long long)arg1;

- (void)_precacheArtworkForCategory:(id)arg1;

- (void)_recordClickEventWithCategory:(id)arg1 index:(long long)arg2;

- (void)_reloadSegmentedControl;

- (void)_reloadSelectedSegment;

- (id)_rootMetricsLocations;

- (void)_setCachedResponse:(id)arg1 error:(id)arg2;

- (void)_setResponse:(id)arg1 error:(id)arg2;

- (id)_tableViewControllerWithCategory:(id)arg1;

- (void)buttonAction:(id)arg1;

@property(retain, nonatomic) SKUICategory *category; // @synthesize category=_rootCategory;

@property(readonly, nonatomic) UIBarButtonItem *categoryButton;

- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (void)dealloc;

@property(retain, nonatomic) NSURL *defaultURL; // @synthesize defaultURL=_defaultURL;

@property(nonatomic) __weak id <SKUICategoryControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void)dismiss;

- (id)initWithContentsController:(id)arg1;

@property(readonly, nonatomic) _Bool isLoading;

- (void)loadFromURL:(id)arg1 withCompletionBlock:(id)arg2;

- (id)metricsPageContextForCategoryTableView:(id)arg1;

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;

- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;

@property(readonly, nonatomic) UISegmentedControl *segmentedControl;

- (void)segmentedControlAction:(id)arg1;

@property(nonatomic) long long segmentedControlLength; // @synthesize segmentedControlLength=_segmentedControlLength;

@property(retain, nonatomic) NSURL *selectedURL; // @synthesize selectedURL=_selectedURL;



@end

