/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKVectorTile.h"


@class NSArray, NSData, NSMutableArray, VKTileKeyMap;



__attribute__((visibility("hidden")))

@interface VKTrafficTile : VKVectorTile

{

    struct _GEOTileKey _dataKey;

    NSData *_data;

    VKTileKeyMap *_dynamicTiles;

    NSMutableArray *_incidents;

    struct TrafficSkeletonTile _trafficData;

    struct vector<VKRibbonMultiPolylineSegment, vk_allocator<VKRibbonMultiPolylineSegment>> _ribbonSegments;

    vector_012c76ef _tileBoundaryDesignators;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (_Bool)_buildStartOffset:(float *)arg1 endOffset:(float *)arg2 forLine:(CDStruct_02d551b3 *)arg3 forSkeleton:(const struct Record *)arg4 forRange:(struct _NSRange)arg5 forFlow:(const struct Flow *)arg6 forPoints:(Vec2Imp_1782d7e3 *)arg7;

- (void)buildConnectionDesignators;

- (void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2 styleSession:(id)arg3;

- (void)buildSkeletonMap;

- (void)buildSkeletonMeshForDebug:(id)arg1;

- (void)buildTrafficMeshWithRoadData:(id)arg1;

- (void)buildTrafficMeshWithRoadData:(id)arg1 dynamicTile:(id)arg2 ribbonMaker:(struct VKRibbonMakerData *)arg3 trafficAccum:(struct TrafficAccum *)arg4 styleSession:(id)arg5;

@property(nonatomic) const struct _GEOTileKey *dataKey;

- (void)dealloc;

@property(readonly, nonatomic) VKTileKeyMap *dynamicTiles; // @synthesize dynamicTiles=_dynamicTiles;

- (void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const function_21f69ee7 *)arg2;

@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;

- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3;

@property(nonatomic) vector_012c76ef *tileBoundaryDesignators; // @synthesize tileBoundaryDesignators=_tileBoundaryDesignators;



@end


