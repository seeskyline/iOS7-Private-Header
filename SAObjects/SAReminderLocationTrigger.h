/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SAReminderTrigger.h"


@class NSString, NSURL, SALocation;



@interface SAReminderLocationTrigger : SAReminderTrigger

{

}



+ (id)locationTrigger;

+ (id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSURL *contactIdentifier;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(retain, nonatomic) SALocation *location;

@property(copy, nonatomic) NSString *timing;



@end


