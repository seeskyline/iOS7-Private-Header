/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class MKStarRatingView, NSString, UILabel;



@interface MKStarRatingAndLabelView : UIView

{

    MKStarRatingView *_starRatingView;

    UILabel *_reviewsLabel;

    NSString *_sourceName;

    long long _numberOfReviews;

    _Bool _displaysSourceOfReviews;

}



- (void)_mapkit_setTextColor:(id)arg1;

- (void)_setStarStyle:(int)arg1;

- (void)dealloc;

- (id)initWithStyle:(int)arg1;

- (void)layoutSubviews;

@property(nonatomic) long long numberOfReviews; // @synthesize numberOfReviews=_numberOfReviews;

@property(readonly, nonatomic) UILabel *reviewsLabel; // @synthesize reviewsLabel=_reviewsLabel;

- (void)setDisplaysSourceOfReviews:(_Bool)arg1;

@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@property(readonly, nonatomic) MKStarRatingView *starRatingView; // @synthesize starRatingView=_starRatingView;



@end

