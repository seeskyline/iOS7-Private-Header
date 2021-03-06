/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIItemState, SSLookupItemOffer, UIButton, UIControl, UIImage, UIImageView, UILabel;



@interface SKUIBannerView : UIView

{

    UILabel *_artistNameLabel;

    UIView *_bottomBorderView;

    SKUIClientContext *_clientContext;

    UIButton *_closeButton;

    UIImageView *_iconImageView;

    SSLookupItemOffer *_itemOffer;

    UIButton *_itemOfferButton;

    SKUIItemState *_itemState;

    UILabel *_itemStateLabel;

    NSMutableArray *_screenshotImageViews;

    UIView *_separatorView;

    UILabel *_titleLabel;

    float _userRating;

    UIImageView *_userRatingStarImageView;

}



- (void).cxx_destruct;

- (id)_newDefaultLabel;

- (void)_reloadItemState;

@property(copy, nonatomic) NSString *artistName;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

@property(readonly, nonatomic) UIControl *closeButton; // @synthesize closeButton=_closeButton;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@property(retain, nonatomic) UIImage *iconImage;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) SSLookupItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;

@property(readonly, nonatomic) UIControl *itemOfferButton;

@property(retain, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;

- (void)layoutSubviews;

@property(copy, nonatomic) NSArray *screenshotImages;

@property(copy, nonatomic) NSString *title;

@property(nonatomic) float userRating; // @synthesize userRating=_userRating;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


