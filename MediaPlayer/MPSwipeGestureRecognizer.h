/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIGestureRecognizer.h"



@class UITouch;



@interface MPSwipeGestureRecognizer : UIGestureRecognizer

{

    struct CGPoint _startLocation;

    double _startTime;

    UITouch *_trackingTouch;

    long long _swipeDirection;

}



- (void).cxx_destruct;

- (void)dealloc;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

- (void)reset;

@property(readonly, nonatomic) long long swipeDirection; // @synthesize swipeDirection=_swipeDirection;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;



@end

