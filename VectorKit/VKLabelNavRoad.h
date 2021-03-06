/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VKLabelNavFeature.h"



@class NSString, VKLabelNavJunction, VKLabelNavRoadLabel, VKLabelTile;



__attribute__((visibility("hidden")))

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature>

{

    VKLabelTile *_tile;

    CDStruct_02d551b3 *_data;

    int _vertexIndexA;

    int _vertexIndexB;

    CDStruct_dde70fb6 *_junctionA;

    CDStruct_dde70fb6 *_junctionB;

    VKLabelNavJunction *_navJunctionA;

    vector_d5845d09 _simplifiedPoints;

    Vec2Imp_1782d7e3 _direction;

    _Bool _isRoadLabelUnique;

    _Bool _isOnRoute;

    _Bool _isStartOfRoadName;

    _Bool _isInGuidance;

    _Bool _isGuidanceStepStart;

    _Bool _areLabelsDisabled;

    struct PolylineCoordinate _routeOffset;

    float _routeCrossProduct;

    long long _intraRoadPriority;

    double _length;

    NSString *_name;

    NSString *_shieldDisplayGroup;

    NSString *_shieldGroup;

    VKLabelNavRoadLabel *_roadSign;

    VKLabelNavRoadLabel *_roadShield;

    _Bool _areNavStylesInitialized;

    _Bool _hasVisibleSigns;

    _Bool _hasVisibleShields;

    _Bool _suppressRoadSignIfShieldPresent;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (_Bool)_findLabelAnchorPoint:(struct VKPoint *)arg1 isShieldLabel:(_Bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;

- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct VKPoint)arg2 rayVector:(Vec2Imp_1782d7e3)arg3 roadGraph:(id)arg4;

- (id)_newLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(_Bool)arg2 worldPoint:(struct VKPoint)arg3 alignment:(long long)arg4;

- (_Bool)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct VKPoint *)arg2;

- (void)_worldRoadPoints:(vector_d5845d09 *)arg1;

- (void)appendSimplifiedWorldRoadPoints:(vector_d5845d09 *)arg1;

@property(nonatomic) _Bool areLabelsDisabled; // @synthesize areLabelsDisabled=_areLabelsDisabled;

- (void)clearRoadSign;

- (void)createLabelWithNavContext:(struct NavContext *)arg1 isShieldLabel:(_Bool)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7;

@property(readonly, nonatomic) const char *cstrName;

- (void)dealloc;

- (id)description;

@property(nonatomic) Vec2Imp_1782d7e3 direction; // @synthesize direction=_direction;

- (void)getRoadEdge:(CDStruct_91f75a7f *)arg1;

- (_Bool)hasShield;

- (_Bool)hasVisibleShields;

- (_Bool)hasVisibleSigns;

- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(id)arg4;

@property(nonatomic) long long intraRoadPriority; // @synthesize intraRoadPriority=_intraRoadPriority;

@property(readonly, nonatomic) _Bool isAwayFromRoute;

@property(nonatomic) _Bool isGuidanceStepStart; // @synthesize isGuidanceStepStart=_isGuidanceStepStart;

@property(nonatomic) _Bool isInGuidance; // @synthesize isInGuidance=_isInGuidance;

@property(nonatomic) _Bool isOnRoute; // @synthesize isOnRoute=_isOnRoute;

@property(readonly, nonatomic) _Bool isOnewayToJunction;

@property(readonly, nonatomic) _Bool isRamp;

@property(nonatomic) _Bool isRoadLabelUnique; // @synthesize isRoadLabelUnique=_isRoadLabelUnique;

@property(nonatomic) _Bool isStartOfRoadName; // @synthesize isStartOfRoadName=_isStartOfRoadName;

@property(readonly, nonatomic) CDStruct_dde70fb6 *junctionB; // @synthesize junctionB=_junctionB;

- (id)labelWithType:(_Bool)arg1;

- (double)length;

- (_Bool)matchesRoad:(id)arg1;

- (_Bool)matchesRoadEdge:(const CDStruct_91f75a7f *)arg1;

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;

@property(readonly, nonatomic) VKLabelNavJunction *navJunctionA; // @synthesize navJunctionA=_navJunctionA;

- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;

- (void)recreateRoadSignWithAlignment:(long long)arg1 navContext:(struct NavContext *)arg2;

@property(readonly, nonatomic) int roadClass;

@property(readonly, nonatomic) long long roadSignAlignment;

@property(nonatomic) float routeCrossProduct; // @synthesize routeCrossProduct=_routeCrossProduct;

@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;

@property(readonly, nonatomic) NSString *shieldDisplayGroup;

@property(readonly, nonatomic) NSString *shieldGroup;

@property(readonly, nonatomic) _Bool suppressRoadSignIfShieldPresent; // @synthesize suppressRoadSignIfShieldPresent=_suppressRoadSignIfShieldPresent;

@property(readonly, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;



@end


