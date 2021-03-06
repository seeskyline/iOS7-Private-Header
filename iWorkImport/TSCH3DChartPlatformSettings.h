/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary;



__attribute__((visibility("hidden")))

@interface TSCH3DChartPlatformSettings : NSObject

{

    NSDictionary *mSettings;

}



+ (id)p_defaultSettingsDictionary;

+ (id)p_platformSettingsDictionary;

+ (int)p_platformSettingsType;

+ (id)sharedInstance;

- (double)backgroundLayoutContentsScaleFactor;

- (_Bool)backgroundLayoutUsesTiledRendering;

- (_Bool)buildImageDefaultAntialias;

- (unsigned long long)buildImageTileSize;

- (unsigned long long)buildMultisamples;

- (_Bool)buildShouldDiscardBuffers;

- (double)buildTargetFPS;

- (_Bool)buildsCanUseDynamicShadows;

- (_Bool)buildsUseLowDetailedGeometries;

- (void)dealloc;

- (id)description;

- (unsigned long long)highQualityShadowsSize;

- (id)initWithDictionary:(id)arg1;

- (unsigned long long)insertionIconSupersamplingSamples;

- (_Bool)interactiveCanvasCanUseHighQualityRenderer;

- (unsigned long long)interactiveCanvasMultisamples;

- (_Bool)interactiveModeUsesFastPerformanceHint;

- (_Bool)knobTrackingUsesRealTimePerformanceHint;

- (unsigned long long)labelMaxTextureSize;

- (float)normalizedLabelPickingSlackForViewScale:(double)arg1 viewport:(const tvec2_3b141483 *)arg2;

- (float)p_labelPickingSlack;

- (int)p_labelPickingSlackMethod;

- (float)prefilteredLinesFilterRadius;

- (double)printingDPI;

- (unsigned long long)printingMaxImageSize;

- (_Bool)protectCachedShaders;

- (unsigned long long)resourceCacheMemoryLimitInBytes;

- (float)rotationTrackerSpeed;

- (_Bool)shouldHandleResourceCacheOutOfMemory;

- (_Bool)skipFirstMipmapLevel;

- (unsigned long long)supersamplingSamples;

- (unsigned long long)supersamplingTileSize;

- (_Bool)useHighQualityShadows;

- (_Bool)useInteractiveModeWhileSelected;

- (_Bool)useLayoutInwardForInsertionIcons;

- (_Bool)useTiledFullSizeInteractiveLayer;



@end


