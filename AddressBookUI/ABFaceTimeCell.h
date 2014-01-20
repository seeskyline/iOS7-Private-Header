/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABContactCell.h"


@class ABTransportButton, NSDictionary, UILabel;



@interface ABFaceTimeCell : ABContactCell

{

    _Bool _displayConstraintsActive;

    _Bool _isFaceTimeAudioAvailable;

    UILabel *_faceTimeLabel;

    ABTransportButton *_transportIcon1;

    ABTransportButton *_transportIcon2;

    id <ABPropertyCellDelegate> _delegate;

    NSDictionary *_labelTextAttributes;

}



+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;

@property(nonatomic) id <ABPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) _Bool displayConstraintsActive; // @synthesize displayConstraintsActive=_displayConstraintsActive;

@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property(nonatomic) _Bool isFaceTimeAudioAvailable; // @synthesize isFaceTimeAudioAvailable=_isFaceTimeAudioAvailable;

@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;

- (void)performDefaultAction;

- (void)setNeedsUpdateDisplayConstraints;

- (void)transportButtonClicked:(id)arg1;

@property(readonly, nonatomic) ABTransportButton *transportIcon1; // @synthesize transportIcon1=_transportIcon1;

@property(readonly, nonatomic) ABTransportButton *transportIcon2; // @synthesize transportIcon2=_transportIcon2;

- (void)updateConstraints;



@end

