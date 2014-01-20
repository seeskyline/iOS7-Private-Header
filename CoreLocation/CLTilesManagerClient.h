/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;



@interface CLTilesManagerClient : NSObject

{

    NSObject<OS_xpc_object> *fXpcConnection;

    NSObject<OS_dispatch_queue> *fQueue;

    NSDictionary *fNotificationHandlers;

}



+ (void)initialize;

+ (id)sharedClient;

- (void)dealloc;

- (_Bool)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(id)arg3;

- (id)init;

- (void)onNotificationReceived:(id)arg1;

- (_Bool)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(id)arg3;

- (void)reconnect;

- (_Bool)registerTo:(id)arg1 onQueue:(id)arg2 block:(id)arg3;

- (void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(_Bool)arg2;

- (_Bool)unregisterFrom:(id)arg1;



@end

