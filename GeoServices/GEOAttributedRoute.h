/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEORoute, NSArray;



@interface GEOAttributedRoute : NSObject

{

    GEORoute *_route;

    NSArray *_maneuverDisplaySteps;

    _Bool _maneuverDisplayEnabled;

    unsigned long long _currentDisplayStep;

    unsigned int _maneuverDisplayCount;

    double *_pointLengths;

    CDStruct_6b42e521 *_currentManeuverDisplayEndPoints;

}



- (_Bool)_needsCornerOffsetAt:(unsigned int)arg1;

- (void)attributedRouteHasChanged;

- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned int)arg2;

@property(nonatomic) unsigned long long currentDisplayStep; // @synthesize currentDisplayStep=_currentDisplayStep;

- (void)dealloc;

- (id)description;

- (id)initWithRoute:(id)arg1;

@property(readonly, nonatomic) unsigned int maneuverDisplayCount; // @synthesize maneuverDisplayCount=_maneuverDisplayCount;

@property(nonatomic) _Bool maneuverDisplayEnabled; // @synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled;

- (CDStruct_6b42e521)maneuverDisplayEndpointsAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSArray *maneuverDisplaySteps; // @synthesize maneuverDisplaySteps=_maneuverDisplaySteps;

@property(readonly, nonatomic) GEORoute *route; // @synthesize route=_route;

- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;

- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;



@end

