/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUViewController.h"



#import "SKUIComposeReviewViewDelegate.h"



@class SKUIComposeReviewView, SKUIReviewMetadata;



@interface SKUIComposeReviewFormViewController : SUViewController <SKUIComposeReviewViewDelegate>

{

    SKUIComposeReviewView *_composeView;

    id <SKUIComposeReviewFormDelegate> _delegate;

    SKUIReviewMetadata *_review;

}



- (void).cxx_destruct;

- (void)_cancel;

- (void)_submit;

- (void)composeReviewViewValidityChanged:(id)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIComposeReviewFormDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) SKUIReviewMetadata *editedReviewMetadata;

- (id)initWithReviewMetadata:(id)arg1;

- (void)loadView;

- (void)setRating:(float)arg1;

- (void)viewWillAppear:(_Bool)arg1;



@end

