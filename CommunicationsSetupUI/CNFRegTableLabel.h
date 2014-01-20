/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "PSHeaderFooterView.h"



@class CNFRegLearnMoreButton, NSString, NSURL, PSSpecifier, UILabel, UITableView;



@interface CNFRegTableLabel : UIView <PSHeaderFooterView>

{

    UILabel *_label;

    PSSpecifier *_specifier;

    UITableView *_cnfreg_tableView;

    _Bool _isTopmostHeader;

    CNFRegLearnMoreButton *_urlButton;

    NSString *_URLText;

    NSURL *_URLTarget;

}



@property(copy, nonatomic) NSURL *URLTarget; // @synthesize URLTarget=_URLTarget;

@property(copy, nonatomic) NSString *URLText; // @synthesize URLText=_URLText;

- (id)_URLTarget;

- (id)_URLText;

- (double)_bottomPadding;

- (double)_labelInset;

- (id)_labelText;

- (long long)_labelTextAlignment;

- (double)_topPadding;

- (void)_urlTapped:(id)arg1;

- (void)clearSpecifier;

@property(nonatomic) UITableView *cnfreg_tableView; // @synthesize cnfreg_tableView=_cnfreg_tableView;

- (void)dealloc;

- (id)initWithSpecifier:(id)arg1;

@property(nonatomic) _Bool isTopmostHeader; // @synthesize isTopmostHeader=_isTopmostHeader;

- (void)layoutSubviews;

- (double)preferredHeightForWidth:(double)arg1;

- (void)updateLabelText;



@end

