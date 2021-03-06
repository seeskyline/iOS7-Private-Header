/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class MKMapView;



@interface MKMapCamera : NSObject <NSSecureCoding, NSCopying>

{

    CDStruct_2c43369c _centerCoordinate;

    double _heading;

    double _pitch;

    double _altitude;

    MKMapView *_mapView;

}



+ (id)_cameraLookingAtGEOMapRect:(const CDStruct_90e2a262 *)arg1 aspectRatio:(float)arg2;

+ (id)camera;

+ (id)cameraLookingAtCenterCoordinate:(CDStruct_c3b9c2ee)arg1 fromEyeCoordinate:(CDStruct_c3b9c2ee)arg2 eyeAltitude:(double)arg3;

+ (_Bool)supportsSecureCoding;

- (CDStruct_90e2a262)_enclosingGEOMapRectForAspectRatio:(float)arg1;

- (id)_mapView;

- (void)_setMapView:(id)arg1;

- (void)_updateState;

- (_Bool)_validate;

@property(nonatomic) double altitude; // @synthesize altitude=_altitude;

@property(nonatomic) CDStruct_c3b9c2ee centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) double heading; // @synthesize heading=_heading;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) double pitch; // @synthesize pitch=_pitch;



@end


