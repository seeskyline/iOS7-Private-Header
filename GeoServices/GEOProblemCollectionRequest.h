/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequest.h"



#import "NSCopying.h"



@class NSMutableArray, NSString;



@interface GEOProblemCollectionRequest : PBRequest <NSCopying>

{

    NSString *_countryCode;

    NSString *_hwMachine;

    NSString *_inputLanguage;

    NSMutableArray *_requestElements;

}



- (void)addRequestElement:(id)arg1;

- (void)clearRequestElements;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasCountryCode;

@property(readonly, nonatomic) _Bool hasHwMachine;

@property(readonly, nonatomic) _Bool hasInputLanguage;

- (unsigned long long)hash;

@property(retain, nonatomic) NSString *hwMachine; // @synthesize hwMachine=_hwMachine;

@property(retain, nonatomic) NSString *inputLanguage; // @synthesize inputLanguage=_inputLanguage;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

- (id)requestElementAtIndex:(unsigned long long)arg1;

@property(retain, nonatomic) NSMutableArray *requestElements; // @synthesize requestElements=_requestElements;

- (unsigned long long)requestElementsCount;

- (unsigned int)requestTypeCode;

- (Class)responseClass;

- (void)writeTo:(id)arg1;



@end


