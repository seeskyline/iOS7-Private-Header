/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEOLatLng, NSString;



@interface GEORouteIncident : PBCodable <NSCopying>

{

    long long _endTime;

    long long _startTime;

    long long _updateTime;

    NSString *_crossStreet;

    NSString *_incidentId;

    NSString *_info;

    unsigned int _laneClosureCount;

    int _laneClosureType;

    GEOLatLng *_position;

    NSString *_street;

    int _type;

    _Bool _endTimeReliable;

    struct {

        unsigned int endTime:1;

        unsigned int startTime:1;

        unsigned int updateTime:1;

        unsigned int laneClosureCount:1;

        unsigned int laneClosureType:1;

        unsigned int type:1;

        unsigned int endTimeReliable:1;

    } _has;

}



- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) NSString *crossStreet; // @synthesize crossStreet=_crossStreet;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;

@property(nonatomic) _Bool endTimeReliable; // @synthesize endTimeReliable=_endTimeReliable;

@property(readonly, nonatomic) _Bool hasCrossStreet;

@property(nonatomic) _Bool hasEndTime;

@property(nonatomic) _Bool hasEndTimeReliable;

@property(readonly, nonatomic) _Bool hasIncidentId;

@property(readonly, nonatomic) _Bool hasInfo;

@property(nonatomic) _Bool hasLaneClosureCount;

@property(nonatomic) _Bool hasLaneClosureType;

@property(readonly, nonatomic) _Bool hasPosition;

@property(nonatomic) _Bool hasStartTime;

@property(readonly, nonatomic) _Bool hasStreet;

@property(nonatomic) _Bool hasType;

@property(nonatomic) _Bool hasUpdateTime;

- (unsigned long long)hash;

@property(retain, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;

@property(retain, nonatomic) NSString *info; // @synthesize info=_info;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) unsigned int laneClosureCount; // @synthesize laneClosureCount=_laneClosureCount;

@property(nonatomic) int laneClosureType; // @synthesize laneClosureType=_laneClosureType;

@property(retain, nonatomic) GEOLatLng *position; // @synthesize position=_position;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;

@property(retain, nonatomic) NSString *street; // @synthesize street=_street;

@property(nonatomic) int type; // @synthesize type=_type;

@property(nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;

- (void)writeTo:(id)arg1;



@end


