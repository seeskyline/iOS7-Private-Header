/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MKOverlay.h"



@class NSString;



@interface MKTileOverlay : NSObject <MKOverlay>

{

    NSString *_URLTemplate;

    struct CGSize _tileSize;

    _Bool _geometryFlipped;

    long long _minimumZ;

    long long _maximumZ;

    _Bool _canReplaceMapContent;

    unsigned int _providerID;

}



- (id).cxx_construct;

- (id)URLForTilePath:(CDStruct_cbb88d5e)arg1;

@property(readonly) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;

- (void)_assignProviderID;

- (void)_flushCaches;

- (struct _GEOTileKey)_keyForPath:(CDStruct_cbb88d5e)arg1;

- (void)_loadTile:(id)arg1 result:(id)arg2;

- (id)_tilesInMapRect:(CDStruct_90e2a262)arg1 zoomScale:(double)arg2 contentScale:(double)arg3;

- (int)_zoomLevelForScale:(double)arg1;

@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;

@property(nonatomic) _Bool canReplaceMapContent; // @synthesize canReplaceMapContent=_canReplaceMapContent;

@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

- (void)dealloc;

- (id)init;

- (id)initWithURLTemplate:(id)arg1;

@property(getter=isGeometryFlipped) _Bool geometryFlipped; // @synthesize geometryFlipped=_geometryFlipped;

- (void)loadTileAtPath:(CDStruct_cbb88d5e)arg1 result:(id)arg2;

@property long long maximumZ; // @synthesize maximumZ=_maximumZ;

@property long long minimumZ; // @synthesize minimumZ=_minimumZ;

@property struct CGSize tileSize; // @synthesize tileSize=_tileSize;



// Remaining properties

@property(readonly, nonatomic) NSString *subtitle;

@property(readonly, nonatomic) NSString *title;



@end


