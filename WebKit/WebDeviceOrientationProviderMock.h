/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebDeviceOrientationProvider.h"



@class WebDeviceOrientationProviderMockInternal;



@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider>

{

    WebDeviceOrientationProviderMockInternal *m_internal;

}



+ (id)shared;

- (void)dealloc;

- (id)init;

- (id)lastOrientation;

- (void)setController:(struct DeviceOrientationController *)arg1;

- (void)setOrientation:(id)arg1;

- (void)startUpdating;

- (void)stopUpdating;



@end

