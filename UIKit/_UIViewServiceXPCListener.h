/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, _UIAsyncInvocation;



__attribute__((visibility("hidden")))

@interface _UIViewServiceXPCListener : NSObject

{

    NSObject<OS_xpc_object> *_connection;

    NSObject<OS_dispatch_queue> *_incomingConnectionQueue;

    _UIAsyncInvocation *_invalidationInvocation;

    int __automatic_invalidation_retainCount;

    _Bool __automatic_invalidation_invalidated;

}



- (int)__automatic_invalidation_logic;

- (void)_invalidateUnconditionallyThen:(id)arg1;

- (_Bool)_isDeallocating;

- (_Bool)_tryRetain;

- (void)dealloc;

- (id)endpoint;

- (id)initWithName:(id)arg1 connectionHandler:(id)arg2;

- (id)invalidate;

- (oneway void)release;

- (id)retain;

- (unsigned long long)retainCount;



@end

