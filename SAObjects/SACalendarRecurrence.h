/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSDate;



@interface SACalendarRecurrence : AceObject <SAAceSerializable>

{

}



+ (id)recurrence;

+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(nonatomic) long long endCount;

@property(copy, nonatomic) NSDate *endDate;

@property(nonatomic) int frequency;

- (id)groupIdentifier;

@property(nonatomic) long long interval;



@end

