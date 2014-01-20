/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMLogItem.h"


@interface CMActivity : CMLogItem

{

    id _internal;

}



- (struct CLMotionActivity)activity;

@property(readonly, nonatomic) int confidence;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(readonly, nonatomic) _Bool hasExitedVehicle;

- (id)initWithCoder:(id)arg1;

- (id)initWithMotionActivity:(struct CLMotionActivity)arg1 andTimestamp:(double)arg2;

@property(readonly, nonatomic) _Bool isDriving;

@property(readonly, nonatomic) _Bool isMoving;

@property(readonly, nonatomic) _Bool isRunning;

@property(readonly, nonatomic) _Bool isWalking;

@property(readonly, nonatomic) _Bool maybeExitingVehicle;



@end

