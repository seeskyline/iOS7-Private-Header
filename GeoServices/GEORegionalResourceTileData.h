/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSMutableArray;



@interface GEORegionalResourceTileData : PBCodable <NSCopying>

{

    NSMutableArray *_attributions;

    NSMutableArray *_icons;

}



- (void)addAttribution:(id)arg1;

- (void)addIcon:(id)arg1;

- (id)attributionAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;

- (unsigned long long)attributionsCount;

- (void)clearAttributions;

- (void)clearIcons;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (unsigned long long)hash;

- (id)iconAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;

- (unsigned long long)iconsCount;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end

