/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SALocalSearchPeriod.h"



@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

{

}



+ (id)rangePeriod;

+ (id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(nonatomic) long long endSecondsSinceMidnight;

- (id)groupIdentifier;

@property(nonatomic) long long startSecondsSinceMidnight;



@end


