/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSSTheme, TSUCustomCallBackDictionary;



__attribute__((visibility("hidden")))

@interface TSSThemeAssetMapper : NSObject

{

    TSSTheme *mFromTheme;

    TSSTheme *mToTheme;

    TSUCustomCallBackDictionary *mAssetMap;

}



- (void)cacheAssetMappings:(id)arg1;

- (void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2;

- (void)clearMappingCache;

- (void)dealloc;

@property(readonly, nonatomic) TSSTheme *fromTheme; // @synthesize fromTheme=mFromTheme;

- (id)init;

- (id)initWithFromTheme:(id)arg1 toTheme:(id)arg2;

- (id)mapChartPreset:(id)arg1;

- (id)mapMaster:(id)arg1;

- (id)mapPresetsWithKindFromPreset:(id)arg1;

- (id)mapStyle:(id)arg1;

- (id)mappedAssetForAsset:(id)arg1;

- (_Bool)p_hasCachedMappingsForPresetsOfKind:(id)arg1;

@property(readonly, nonatomic) TSSTheme *toTheme; // @synthesize toTheme=mToTheme;

- (id)tsdMapColorFill:(id)arg1;

- (id)tsdMapGradient:(id)arg1;

- (id)tsdMapImageFill:(id)arg1;

- (id)tsdMapImageStylePropertyMap:(id)arg1;

- (id)tsdMapShadow:(id)arg1;

- (id)tsdMapShapeStylePropertyMap:(id)arg1;

- (id)tsdMapStroke:(id)arg1;

- (id)tswpMapParagraphStylePropertyMap:(id)arg1;



@end


