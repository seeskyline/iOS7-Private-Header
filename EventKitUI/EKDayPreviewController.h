/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "EKDayViewDataSource.h"

#import "EKEditItemViewControllerProtocol.h"



@class EKDayView, EKEvent;



@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol>

{

    EKDayView *_dayView;

    EKEvent *_event;

}



- (void).cxx_destruct;

- (id)_eventsForStartDate:(id)arg1 endDate:(id)arg2;

- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;

- (id)initWithEvent:(id)arg1;

- (void)loadView;

- (struct CGSize)preferredContentSize;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;



// Remaining properties

@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;



@end


