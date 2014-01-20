/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"



@class GKHairlineView, GKLabel, NSString;



@interface GKComposeHeaderField : UIImageView

{

    GKLabel *_nameLabel;

    GKLabel *_valueLabel;

    GKHairlineView *_separatorView;

    unsigned long long _maxLineCount;

    SEL _actionWhenTouched;

}



@property(nonatomic) SEL actionWhenTouched; // @synthesize actionWhenTouched=_actionWhenTouched;

- (_Bool)canBecomeFirstResponder;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

@property(nonatomic) unsigned long long maxLineCount; // @synthesize maxLineCount=_maxLineCount;

- (id)metricsForConstraints;

@property(retain, nonatomic) GKLabel *nameLabel; // @synthesize nameLabel=_nameLabel;

@property(retain, nonatomic) NSString *nameText;

@property(retain, nonatomic) GKHairlineView *separatorView; // @synthesize separatorView=_separatorView;

@property(retain, nonatomic) GKLabel *valueLabel; // @synthesize valueLabel=_valueLabel;

@property(retain, nonatomic) NSString *valueText;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)updateConstraints;

@property(readonly, nonatomic) struct CGRect valueFrame;

- (id)viewForBaselineLayout;

- (id)viewsForConstraints;



@end

