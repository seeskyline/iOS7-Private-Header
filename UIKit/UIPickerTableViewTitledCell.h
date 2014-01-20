/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPickerTableViewCell.h"


@class NSAttributedString, NSString, UIColor, UILabel;



__attribute__((visibility("hidden")))

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell

{

    UILabel *_titleLabel;

    _Bool _isAttributed;

    _Bool _usesModernStyle;

    UIColor *_textColor;

}



- (_Bool)_canBeReusedInPickerView;

@property(readonly, nonatomic) _Bool _isAttributed; // @synthesize _isAttributed;

- (void)_setIsCenterCell:(_Bool)arg1 shouldModifyAlphaOfView:(_Bool)arg2;

@property(readonly, nonatomic) UILabel *_titleLabel; // @synthesize _titleLabel;

@property(retain, nonatomic) NSAttributedString *attributedTitle;

- (void)dealloc;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isModern:(_Bool)arg3 textColor:(id)arg4;

- (void)prepareForReuse;

@property(retain, nonatomic) NSString *title;



@end

