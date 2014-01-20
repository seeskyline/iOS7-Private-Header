/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSHashTable, NSRecursiveLock;



@interface AVObjectRegistry : NSObject

{

    NSHashTable *_registeredObjects;

    NSRecursiveLock *_lock;

}



+ (id)defaultObjectRegistry;

- (void)dealloc;

- (id)init;

- (void)registerObject:(id)arg1;

- (void)registerObjectForSafeRetain:(id)arg1;

- (void)safeInvokeWithDescription:(id)arg1;

- (void)safeInvokeWithDescriptionDelayed:(id)arg1;

- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;

- (void)safePerformOnMainThreadTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;

- (void)safePerformOnThread:(id)arg1 target:(id)arg2 selector:(SEL)arg3 object:(id)arg4;

- (void)safePerformTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 delay:(double)arg4;

- (void)safePostDelayedNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;

- (void)safePostDelayedNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;

- (void)safePostNotificationFromMainThreadTarget:(id)arg1 name:(id)arg2 userInfo:(id)arg3;

- (void)safePostNotificationFromThread:(id)arg1 target:(id)arg2 name:(id)arg3 userInfo:(id)arg4;

- (_Bool)safeRetainObject:(id)arg1;

- (void)unregisterObject:(id)arg1;



@end

