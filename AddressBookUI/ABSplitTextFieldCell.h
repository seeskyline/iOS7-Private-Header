/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"



@class ABRepeatingGradientSeparatorView, UITextField, UIView;



@interface ABSplitTextFieldCell : UITableViewCell

{

    UITextField *_textFieldLeft;

    UITextField *_textFieldRight;

    ABRepeatingGradientSeparatorView *_separator;

    UIView *_spacer;

}



+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(retain, nonatomic) ABRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;

- (void)setNeedsUpdateConstraints;

@property(retain, nonatomic) UIView *spacer; // @synthesize spacer=_spacer;

@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;

@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;

- (void)updateConstraints;



@end

