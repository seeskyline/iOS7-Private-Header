/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKTileSelection : NSObject

{

    long long _tileSize;

    _Bool _bootstrap;

    unsigned long long _maxZ;

    double _lodBias;

}



@property(nonatomic) _Bool bootstrap; // @synthesize bootstrap=_bootstrap;

- (id)init;

- (id)keysForContext:(id)arg1 neighbors:(id)arg2;

@property(nonatomic) double lodBias; // @synthesize lodBias=_lodBias;

@property(nonatomic) unsigned long long maxZ; // @synthesize maxZ=_maxZ;

- (CDStruct_6adf2384)relevantTilesForContext:(id)arg1;

@property(nonatomic) long long tileSize; // @synthesize tileSize=_tileSize;



@end


