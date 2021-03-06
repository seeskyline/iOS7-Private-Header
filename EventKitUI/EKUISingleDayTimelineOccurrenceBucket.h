/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKDayViewContentItem, EKUISingleDayTimelineLayoutPartition, NSArray, NSMutableArray;



@interface EKUISingleDayTimelineOccurrenceBucket : NSObject

{

    EKDayViewContentItem *_temporaryOccurrenceAtBeginning;

    EKDayViewContentItem *_temporaryOccurrenceAtEnd;

    _Bool _useTemporaryFitnessLevel;

    _Bool _temporaryFitnessLevelRequiresCalculation;

    double _temporaryFitnessLevel;

    _Bool _originalFitnessLevelRequiresCalculation;

    double _originalFitnessLevel;

    _Bool _ignoreFirstOccurrenceInFitnessCalculations;

    _Bool _ignoreLastOccurrenceInFitnessCalculations;

    _Bool _isOnlyBucket;

    EKUISingleDayTimelineLayoutPartition *_correspondingPartition;

    NSMutableArray *_currentOccurrences;

}



- (void).cxx_destruct;

- (double)_calculateFitnessLevel;

- (id)_occurrencesForFitnessLevel;

- (void)addOccurrenceTemporarilyToBeginning:(id)arg1;

- (void)addOccurrenceTemporarilyToEnd:(id)arg1;

@property(retain, nonatomic) EKUISingleDayTimelineLayoutPartition *correspondingPartition; // @synthesize correspondingPartition=_correspondingPartition;

@property(retain, nonatomic) NSMutableArray *currentOccurrences; // @synthesize currentOccurrences=_currentOccurrences;

- (id)earliestOccurrence;

@property(readonly, nonatomic) double fitnessLevel;

- (id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2;

@property(nonatomic) _Bool isOnlyBucket; // @synthesize isOnlyBucket=_isOnlyBucket;

- (void)makeTemporaryChangesPermanent;

@property(readonly, nonatomic) NSArray *occurrences;

- (void)removeOccurrenceAtBeginningTemporarily;

- (void)removeOccurrenceAtEndTemporarily;

- (void)revertTemporaryChanges;

- (void)stampFramesOntoOccurrences;



@end


