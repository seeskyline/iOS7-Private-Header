/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIStatusBarIndicatorItemView.h"


__attribute__((visibility("hidden")))

@interface UIStatusBarQuietModeItemView : UIStatusBarIndicatorItemView

{

    _Bool _hideForAction;

    _Bool _registeredForNotifications;

    _Bool _inactive;

}



- (void)_triggerAction:(id)arg1;

- (double)_visibleAlpha;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

- (void)dealloc;

- (void)setVisible:(_Bool)arg1;

- (void)setVisible:(_Bool)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;

- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;



@end

