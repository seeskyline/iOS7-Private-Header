/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, NSObject<OS_dispatch_queue>;



@interface SUMediaLibraryAdamIDCache : NSObject

{

    NSMutableSet *_adamIDs;

    NSObject<OS_dispatch_queue> *_callbackQueue;

    NSObject<OS_dispatch_queue> *_dispatchQueue;

    _Bool _isPopulated;

}



+ (id)sharedCache;

- (void)_libraryChangedNotification:(id)arg1;

- (void)_populateCache;

- (void)dealloc;

- (void)getContainsAdamID:(id)arg1 completionBlock:(id)arg2;

- (void)getIntersectionWithSet:(id)arg1 completionBlock:(id)arg2;

- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(id)arg3;

- (id)init;

- (void)populateCache;



@end

