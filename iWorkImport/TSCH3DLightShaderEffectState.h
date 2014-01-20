/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface TSCH3DLightShaderEffectState : NSObject

{

    NSMutableArray *mLights;

    struct LightingPackageShaderEffectState mPackageState;

}



+ (id)effectState;

- (id).cxx_construct;

- (void)addObject:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (id)objectAtIndex:(unsigned long long)arg1;

- (const struct LightingPackageShaderEffectState *)packageState;

- (void)removeAllObjects;

- (void)setPackageState:(const struct LightingPackageShaderEffectState *)arg1;



@end

