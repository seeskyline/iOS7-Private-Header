/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"


@class UIActivityIndicatorView, UILabel;



__attribute__((visibility("hidden")))

@interface UIPrintStatusTableViewCell : UITableViewCell

{

    UIActivityIndicatorView *_activityIndicator;

    UILabel *_titleLabel;

    UILabel *_hostLabel;

}



- (void)dealloc;

@property(retain, nonatomic) UILabel *hostLabel; // @synthesize hostLabel=_hostLabel;

- (id)initWithReuseIdentifier:(id)arg1;

- (void)layoutSubviews;

@property(nonatomic) _Bool showActive;

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;



@end

