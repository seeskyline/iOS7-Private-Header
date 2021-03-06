/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartLayoutItem.h"


@class NSValue;



__attribute__((visibility("hidden")))

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem

{

    NSValue *mLegendGeoemtryFrame;

}



- (struct CGRect)calcDrawingRect;

- (struct CGSize)calcMinSize;

- (void)clearAll;

- (void)clearLayoutSize;

- (void)dealloc;

- (id)initWithParent:(id)arg1;

@property(nonatomic) struct CGRect legendModelGeometryFrame;

- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;

- (struct CGAffineTransform)p_transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 rangePtr:(struct _NSRange *)arg4 outElementSize:(struct CGSize *)arg5 outClipRect:(struct CGRect *)arg6;

- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(id)arg2;

- (id)renderersWithRep:(id)arg1;

- (void)resetLayoutSize;

- (void)setLayoutSize:(struct CGSize)arg1;

- (struct CGAffineTransform)transformForRenderingBadge:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;

- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(struct CGSize *)arg3 outClipRect:(struct CGRect *)arg4;

- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 range:(struct _NSRange)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;

- (struct CGAffineTransform)transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 range:(struct _NSRange)arg4 outElementSize:(struct CGSize *)arg5 outClipRect:(struct CGRect *)arg6;

- (void)updateLegendGeometryFrameFromLegendModelCache;



@end


