/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextHostLayout.h"


@class NSArray, NSDictionary, NSIndexSet, TSCH3DVector, TSCHChartInfo, TSCHChartLayout, TSCHChartModel, TSDLayoutGeometry;



__attribute__((visibility("hidden")))

@interface TSCHChartDrawableLayout : TSWPTextHostLayout

{

    struct {

        unsigned int chartLayoutState:1;

        unsigned int chartLayoutStructure:1;

    } mChartInvalidFlags;

    TSCHChartLayout *mChartLayout;

    TSDLayoutGeometry *mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;

    TSDLayoutGeometry *mLastPureGeometry;

    struct CGSize mMinSizeCache;

    _Bool mInResize;

    _Bool mSuppressChartLayoutInvalidation;

}



- (struct CGRect)alignmentFrame;

- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;

- (void)beginDynamicOperation;

- (void)beginResize;

- (struct CGRect)boundsForStandardKnobs;

- (struct CGRect)boundsInfluencingExteriorWrap;

- (_Bool)canAspectRatioLockBeChangedByUser;

- (_Bool)canRotateChildLayout:(id)arg1;

- (_Bool)changesShouldClearLayout:(id)arg1;

- (_Bool)changesShouldSetNeedsLayout:(id)arg1;

- (id)chartDrawableInfo;

@property(readonly, nonatomic) TSCHChartInfo *chartInfo;

@property(readonly, nonatomic) TSCHChartLayout *chartLayout;

- (id)computeInfoGeometryDuringResize;

- (id)computeInfoGeometryFromLayoutGeometry:(id)arg1;

- (id)computeLayoutGeometry;

@property(nonatomic) unsigned long long dataSetIndex;

- (void)dealloc;

- (void)endDynamicOperation;

- (void)endResize;

- (id)initWithInfo:(id)arg1;

- (void)invalidate;

- (void)invalidateChartLayoutState;

- (void)invalidateChartLayoutStructure;

- (void)invalidateSize;

@property(readonly, nonatomic) _Bool is3DChart;

- (id)layoutGeometryFromInfo;

- (void)layoutSearchForSpellingErrorsWithHitBlock:(id)arg1 stop:(void)arg2;

- (void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id)arg3;

@property(copy, nonatomic) TSDLayoutGeometry *legendGeometry;

@property(copy, nonatomic) TSDLayoutGeometry *legendModelGeometry;

- (struct CGSize)minimumSize;

@property(readonly, nonatomic) TSCHChartModel *model;

- (void)offsetGeometryBy:(struct CGPoint)arg1;

- (struct CGRect)p_addMultiDataControlToBounds:(struct CGRect)arg1;

- (double)p_approximateMultiDataControlUnscaledHeight;

- (struct CGSize)p_calcMinSize;

@property(readonly, nonatomic) TSCHChartLayout *p_chartLayout;

- (id)p_chartLayout2D;

@property(retain, nonatomic) TSCHChartLayout *p_chartLayoutNoCreate; // @synthesize p_chartLayoutNoCreate=mChartLayout;

- (void)p_clearChartLayout;

- (id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toShadowGeometry:(id *)arg3 toInfoGeometry:(id *)arg4;

- (void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id *)arg3 toShadowGeometry:(id *)arg4;

- (void)p_forceValidateChartLayout;

- (_Bool)p_isPrintingInBackground;

@property(copy, nonatomic) TSDLayoutGeometry *p_lastPureGeometry; // @synthesize p_lastPureGeometry=mLastPureGeometry;

- (void)p_postLayoutPropertyValueDidChangeNotification;

- (void)p_validateChartLayout;

@property(readonly, nonatomic) NSIndexSet *pieWedgeExplosionSeriesIndices;

@property(copy, nonatomic) NSArray *pieWedgeExplosions;

- (id)pieWedgeExplosionsForSeriesIndices:(id)arg1;

- (void)processChangedProperty:(int)arg1;

- (void)processChanges:(id)arg1;

- (id)propertiesThatInvalidateLayout;

- (struct CGRect)rectForSelection:(id)arg1;

- (id)renderersWithRep:(id)arg1;

- (Class)repClassOverride;

- (_Bool)resizeMayChangeAspectRatio;

@property(readonly, nonatomic) TSCH3DVector *rotation3D;

@property(copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;

- (void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2;

- (void)setRotation3D:(id)arg1;

- (_Bool)supportsParentRotation;

- (void)take3DDepth;

- (void)take3DRotationFromTracker:(id)arg1;

- (void)takeSizeFromTracker:(id)arg1;

- (void)validate;

- (int)wrapFitType;



@end

