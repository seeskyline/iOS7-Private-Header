/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVAsset.h"


@class AVAssetCache, AVAssetResourceLoader, AVURLAssetInternal, NSString, NSURL;



@interface AVURLAsset : AVAsset

{

    AVURLAssetInternal *_asset;

}



+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;

+ (id)_UTTypes;

+ (id)_avfValidationPlist;

+ (id)_figFileMIMETypes;

+ (id)_figFilePathExtensions;

+ (id)_figMIMETypes;

+ (id)_figStreamingMIMETypes;

+ (id)_fileUTTypes;

+ (id)_streamingUTTypes;

+ (id)audiovisualMIMETypes;

+ (id)audiovisualTypes;

+ (_Bool)isPlayableExtendedMIMEType:(id)arg1;

- (id)SHA1Digest;

@property(readonly, nonatomic) NSURL *URL;

- (id)_absoluteURL;

- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;

- (void)_addFigAssetNotifications;

- (id)_assetInspector;

- (id)_assetInspectorLoader;

- (id)_chapterGroupInfo;

- (id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg1 key:(struct __CFString *)arg2;

- (void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(id)arg1 context:(id)arg2;

- (struct OpaqueFigFormatReader *)_formatReader;

- (void)_handleURLRequest:(id)arg1;

- (_Bool)_hasResourceLoaderDelegate;

- (void)_removeFigAssetNotifications;

- (void)_setAssetInspectorLoader:(id)arg1;

- (_Bool)_shouldOptimizeAccessForLinearMoviePlayback;

- (id)_tracks;

- (void)_tracksDidChange;

@property(readonly, nonatomic) AVAssetCache *assetCache;

- (id)availableChapterLocales;

@property(readonly, nonatomic) NSString *cacheKey;

- (void)cancelLoading;

- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;

- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;

- (void)dealloc;

- (id)description;

- (id)downloadDestinationURL;

- (unsigned long long)downloadToken;

- (void)finalize;

- (id)init;

- (id)initWithURL:(id)arg1 options:(id)arg2;

- (id)lyrics;

- (id)resolvedURL;

@property(readonly, nonatomic) AVAssetResourceLoader *resourceLoader;

@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLPathComponentOnly;

@property(readonly, nonatomic) _Bool shouldMatchDataInCacheByURLWithoutQueryComponent;

- (id)tracks;



@end


