/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBRequester.h"



@class NSString, NSThread;



@interface GEORequester : PBRequester

{

    _Bool _disableReplay;

    NSThread *_thread;

    _Bool _usePersistentConnection;

    _Bool _useBackgroundConnection;

    NSString *_debugRequestName;

}



+ (id)_logRequestResponseDirectory;

+ (void)replayRequests;

+ (void)setAppID:(id)arg1;

+ (void)setLogRequestResponseDirectory:(id)arg1;

+ (void)setOSVersion:(id)arg1;

+ (void)stopAllRequests;

- (void)_applicationDidStopAllRequests:(id)arg1;

- (void)_applicationWantsToReplayRequests:(id)arg1;

- (void)_handleResumeOnThread;

- (void)_handleSuspendOnThread;

- (void)dealloc;

@property(retain, nonatomic) NSString *debugRequestName; // @synthesize debugRequestName=_debugRequestName;

@property _Bool disableReplay; // @synthesize disableReplay=_disableReplay;

- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;

- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(_Bool)arg3;

- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 usePersistentConnection:(_Bool)arg3 useBackgroundConnection:(_Bool)arg4;

- (id)logRequestToFile;

- (id)logResponseToFile;

- (struct _CFURLRequest *)newCFMutableURLRequestWithURL:(id)arg1;

- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest *)arg1 delegate:(id)arg2;

- (id)persistentConnectionSession;

- (id)requestPreamble;

- (void)start;



@end


