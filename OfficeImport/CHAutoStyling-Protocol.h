/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol CHAutoStyling <NSObject>

- (id)autoAxisStroke;

- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;

- (void)resolveAxisGraphicProperties:(id)arg1;

- (void)resolveChartAreaGraphicProperties:(id)arg1;

- (void)resolveFloorGraphicProperties:(id)arg1;

- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2 colorMap:(id)arg3 colorScheme:(id)arg4;

- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 colorMap:(id)arg3 colorScheme:(id)arg4;

- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3 colorMap:(id)arg4 colorScheme:(id)arg5;

- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;

- (void)resolveLegendGraphicProperties:(id)arg1;

- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;

- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3;

- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;

- (void)resolvePlotAreaGraphicProperties:(id)arg1;

- (void)resolveWallGraphicProperties:(id)arg1;

@end


