/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBasePlayerCell.h"


@class UILabel;



@interface GKFriendRecommendationCell : GKBasePlayerCell

{

    UILabel *_reasonLabel;

}



- (void)dealloc;

- (void)didUpdateModel;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)prepareForReuse;

@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;

- (void)setRepresentedItem:(id)arg1;

- (void)updateLineLayoutConstraints;



@end


