/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADShade.h"


__attribute__((visibility("hidden")))

@interface OADLinearShade : OADShade

{

    float mAngle;

    _Bool mIsAngleOverridden;

    _Bool mScaled;

    _Bool mIsScaledOverridden;

}



+ (id)defaultProperties;

- (float)angle;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (id)initWithDefaults;

- (_Bool)isAngleOverridden;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isScaledOverridden;

- (_Bool)scaled;

- (void)setAngle:(float)arg1;

- (void)setScaled:(_Bool)arg1;



@end

