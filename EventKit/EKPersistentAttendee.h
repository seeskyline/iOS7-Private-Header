/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentParticipant.h"


@class NSDate;



@interface EKPersistentAttendee : EKPersistentParticipant

{

}



+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;

+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

+ (id)defaultPropertiesToLoad;

+ (id)relations;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (int)entityType;

- (id)initWithAddress:(id)arg1 name:(id)arg2;

- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;

- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

@property(copy, nonatomic) NSDate *lastModified;

- (id)owner;

@property(nonatomic) int participantRole;

@property(nonatomic) int participantStatus;

@property(nonatomic) int participantType;

@property(nonatomic) int pendingStatus;

- (void)setOwner:(id)arg1;



@end

