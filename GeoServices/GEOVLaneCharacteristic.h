/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface GEOVLaneCharacteristic : PBCodable

{

    NSMutableArray *_laneDirections;

    NSMutableArray *_laneDividers;

    NSMutableArray *_laneTypes;

    unsigned int _roadLaneCount;

    struct {

        unsigned int roadLaneCount:1;

    } _has;

}



- (void)addLaneDirection:(id)arg1;

- (void)addLaneDivider:(id)arg1;

- (void)addLaneType:(id)arg1;

- (void)clearLaneDirections;

- (void)clearLaneDividers;

- (void)clearLaneTypes;

- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasRoadLaneCount;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (id)laneDirectionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *laneDirections; // @synthesize laneDirections=_laneDirections;

- (unsigned long long)laneDirectionsCount;

- (id)laneDividerAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *laneDividers; // @synthesize laneDividers=_laneDividers;

- (unsigned long long)laneDividersCount;

- (id)laneTypeAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *laneTypes; // @synthesize laneTypes=_laneTypes;

- (unsigned long long)laneTypesCount;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) unsigned int roadLaneCount; // @synthesize roadLaneCount=_roadLaneCount;

- (void)writeTo:(id)arg1;



@end


