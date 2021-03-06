/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSTimer.h"



@interface NSTimer (NSTimer)

+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;

+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;

+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;

+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(_Bool)arg3;

+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;

- (double)_cffireTime;

- (CDStruct_e097db04)context;

- (struct __CFString *)copyDebugDescription;

- (void)fire;

- (id)fireDate;

- (double)fireTime;

- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;

- (double)interval;

- (void)invalidate;

- (_Bool)isValid;

- (long long)order;

- (void)setFireDate:(id)arg1;

- (void)setFireTime:(double)arg1;

- (void)setTolerance:(double)arg1;

- (double)timeInterval;

- (double)tolerance;

- (id)userInfo;

@end


