/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class UIColor;



__attribute__((visibility("hidden")))

@interface UITextFieldBackgroundView : UIView

{

    _Bool _active;

    _Bool _enabled;

    float _progress;

    UIColor *_fillColor;

}



- (void)_updateImages;

- (void)dealloc;

@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;

- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;

- (void)setActive:(_Bool)arg1;

- (void)setBounds:(struct CGRect)arg1;

- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setFrame:(struct CGRect)arg1;

- (void)setProgress:(float)arg1;



@end

