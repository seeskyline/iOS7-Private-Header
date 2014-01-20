/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSData, NSDictionary, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface MRMediaRemoteState : NSObject

{

    _Bool _canBeNowPlayingApp;

    id _commandHandlerBlock;

    NSMutableDictionary *_commandHandlerBlocks;

    _Bool _isOverrideApp;

    _Bool _keepAlive;

    long long _originDiscoveryCount;

    int _notifyRestoreClientStateForLaunch;

    int _notifyDidLaunchToken;

    NSData *_nowPlayingArtworkData;

    NSDictionary *_nowPlayingInfo;

    unsigned long long _routeDiscoveryCount;

}



- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;

- (void)addCommandHandlerBlock:(id)arg1 forKey:(void)arg2;

- (void)beginOriginDiscovery;

- (void)beginRouteDiscovery;

@property(nonatomic) _Bool canBeNowPlayingApp; // @synthesize canBeNowPlayingApp=_canBeNowPlayingApp;

@property(copy, nonatomic) id commandHandlerBlock; // @synthesize commandHandlerBlock=_commandHandlerBlock;

@property(readonly, nonatomic) NSArray *commandHandlerBlocks;

- (void)dealloc;

- (void)endOriginDiscovery;

- (void)endRouteDiscovery;

- (id)init;

@property(nonatomic) _Bool isOverrideApp; // @synthesize isOverrideApp=_isOverrideApp;

@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;

@property(retain, nonatomic) NSData *nowPlayingArtworkData; // @synthesize nowPlayingArtworkData=_nowPlayingArtworkData;

@property(retain, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;

- (void)removeCommandHandlerBlockForKey:(id)arg1;



@end

