/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray;



__attribute__((visibility("hidden")))

@interface _UICollectionViewTrackedValue : NSObject

{

    double _trackedValue;

    NSArray *_values;

    long long _valuesCount;

    long long _currentIndex;

    _Bool _isAccumulating;

}



- (void)addValue:(double)arg1;

- (id)init;

@property(nonatomic) _Bool isAccumulating; // @synthesize isAccumulating=_isAccumulating;

@property(nonatomic) double trackedValue; // @synthesize trackedValue=_trackedValue;

- (double)speed;



@end


