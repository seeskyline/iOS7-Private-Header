/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CMDeviceOrientationManager : NSObject

{

    id _internal;

}



+ (void)dummySelector:(id)arg1;

+ (void)initialize;

- (void)dealloc;

- (void)deallocPrivate;

- (id)deviceOrientationBlocking;

- (id)init;

- (id)initPrivate;

- (_Bool)isDeviceOrientationActive;

- (_Bool)isDeviceOrientationAvailable;

- (void)onDeviceOrientation:(const struct Sample *)arg1;

- (void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(id)arg2;

- (void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(id)arg2;

- (void)stopDeviceOrientationUpdates;

- (void)stopDeviceOrientationUpdatesPrivate;



@end

