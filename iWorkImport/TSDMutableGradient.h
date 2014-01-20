/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDGradient.h"


#import "TSDGradientStopContainer.h"



@class NSArray, TSUColor;



__attribute__((visibility("hidden")))

@interface TSDMutableGradient : TSDGradient <TSDGradientStopContainer>

{

}



- (void)evenlyDistributeStops;

- (void)insertGradientStop:(id)arg1;

- (void)insertStopAtFraction:(double)arg1;

- (void)insertStopAtFraction:(double)arg1 withColor:(id)arg2;

- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;

- (void)removeStop:(id)arg1;

- (id)removeStopAtIndex:(unsigned long long)arg1;

- (void)reverseStopOrder;

- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;

@property(retain, nonatomic) TSUColor *firstColor;

- (void)setFraction:(double)arg1 ofStopAtIndex:(unsigned long long)arg2;

@property(retain, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;

@property(nonatomic) unsigned long long gradientType; // @dynamic gradientType;

- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;

@property(retain, nonatomic) TSUColor *lastColor;

- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;



// Remaining properties

@property(nonatomic) _Bool isAdvancedGradient; // @dynamic isAdvancedGradient;

@property(nonatomic) double opacity; // @dynamic opacity;



@end

