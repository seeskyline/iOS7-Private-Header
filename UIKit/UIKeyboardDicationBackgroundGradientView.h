/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "_UIBasicAnimationFactory.h"



@class UIDictationView, UIKBRenderConfig;



__attribute__((visibility("hidden")))

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory>

{

    UIKBRenderConfig *_renderConfig;

    UIDictationView *_dictationView;

}



- (struct CGRect)_backgroundFillFrame;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

- (id)_timingFunctionForAnimation;

- (id)backgroundColorForCurrentRenderConfig;

- (void)dealloc;

@property(nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;

- (void)startColorTransitionIn;

- (void)startColorTransitionOut;



@end

