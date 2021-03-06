/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, PKPrinter, UINavigationController, UIPopoverController, UIPrintInteractionController, UIPrintPanelTableViewController, UIPrintPaper, UIViewController, UIWindow;



__attribute__((visibility("hidden")))

@interface UIPrintPanelViewController : NSObject

{

    UIPrintInteractionController *_printInteractionController;

    UINavigationController *_navigationController;

    UIPrintPanelTableViewController *_tableViewController;

    UIViewController *_parentController;

    UIPopoverController *_poverController;

    UIWindow *_window;

    PKPrinter *_printer;

    _Bool _dismissed;

    _Bool _animated;

    _Bool _observingRotation;

    _Bool _parentHasNoPopover;

}



- (void)_keyWindowWillRotate:(id)arg1;

- (void)_presentInParentAnimated:(_Bool)arg1;

- (void)_presentWindow;

- (void)cancelPrinting;

- (void)controllerDidDisappear;

@property(nonatomic) long long copies;

- (void)dealloc;

- (void)dismissAnimated:(_Bool)arg1;

- (void)dismissPrintPanel:(_Bool)arg1 animated:(_Bool)arg2;

@property(nonatomic) _Bool duplex;

- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;

@property(readonly, nonatomic) long long pageCount;

@property(nonatomic) struct _NSRange pageRange;

@property(retain, nonatomic) UIPrintPaper *paper;

@property(readonly, nonatomic) NSArray *paperList;

- (void)popoverControllerDidDismissPopover:(id)arg1;

- (void)presentPrintPanelAnimated:(_Bool)arg1;

- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;

- (void)presentPrintPanelFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;

@property(retain, nonatomic) PKPrinter *printer; // @synthesize printer=_printer;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@property(readonly, nonatomic) _Bool showCopies;

@property(readonly, nonatomic) _Bool showDuplex;

@property(readonly, nonatomic) _Bool showPageRange;

@property(readonly, nonatomic) _Bool showPaper;

- (void)startPrinting;

- (unsigned long long)supportedInterfaceOrientations;



@end


