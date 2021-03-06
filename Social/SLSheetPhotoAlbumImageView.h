/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SLSheetImagePreviewView.h"


@class CALayer, NSMutableArray, NSString, UILabel;



@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView

{

    CALayer *_frameLayer;

    CALayer *_glossLayer;

    NSMutableArray *_frameViews;

    long long _frameQuantity;

    long long _imageQuantity;

    long long _numPreviewImagesAdded;

    UILabel *_imageCountLabel;

    NSString *_forcedItemCountString;

    _Bool _updateLayout;

}



+ (unsigned long long)displayedFrameMaximum;

- (void).cxx_destruct;

- (struct CGSize)_currentSize;

- (id)_itemCountString;

- (_Bool)_shouldDisplayImageCountLabel;

- (void)addPreviewImage:(id)arg1;

- (struct UIEdgeInsets)alignmentRectInsets;

- (void)barMetricsDidChange;

- (id)initWithPrincipalAttachments:(id)arg1;

- (struct CGSize)intrinsicContentSize;

- (void)layoutSubviews;

- (void)setItemCountString:(id)arg1;

- (void)setPreviewImage:(id)arg1 forAttachment:(id)arg2;

- (void)sizeToFit;



@end


