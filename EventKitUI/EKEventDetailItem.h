/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "EKEditItemViewControllerDelegate.h"



@class EKEvent, EKEventStore, UIViewController, UIViewController<EKEditItemViewControllerProtocol>;



__attribute__((visibility("hidden")))

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate>

{

    EKEventStore *_store;

    EKEvent *_event;

    UIViewController<EKEditItemViewControllerProtocol> *_viewController;

    _Bool _allowsEditing;

    _Bool _shouldIndent;

    int _cellPosition;

    id <EKEventDetailItemDelegate> _delegate;

}



- (void).cxx_destruct;

@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;

@property(nonatomic) int cellPosition; // @synthesize cellPosition=_cellPosition;

- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;

- (void)dealloc;

- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;

@property(nonatomic) __weak id <EKEventDetailItemDelegate> delegate; // @synthesize delegate=_delegate;

- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;

- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;

- (_Bool)editItemViewControllerCommit:(id)arg1;

- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;

- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;

- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;

- (void)notifyDidEndEditing;

- (void)notifyDidStartEditing;

- (void)notifySubitemDidCommit:(unsigned long long)arg1;

- (unsigned long long)numberOfSubitems;

- (void)reset;

- (_Bool)saveAndDismissWithForce:(_Bool)arg1;

- (_Bool)saveEvent;

- (void)setEvent:(id)arg1 store:(id)arg2;

@property(nonatomic) _Bool shouldIndent; // @synthesize shouldIndent=_shouldIndent;

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;



@end


