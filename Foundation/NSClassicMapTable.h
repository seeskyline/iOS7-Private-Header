/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMapTable.h"


__attribute__((visibility("hidden")))

@interface NSClassicMapTable : NSMapTable

{

    struct {

        void *hash;

        void *isEqual;

        void *retain;

        void *release;

        void *describe;

        void *notAKeyMarker;

    } _keyCallBacks;

    struct {

        void *retain;

        void *release;

        void *describe;

    } _valueCallBacks;

    struct __CFBasicHash *_ht;

}



- (id)allKeys;

- (id)allValues;

- (id)copy;

- (unsigned long long)count;

- (void)dealloc;

- (id)description;

- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;

- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;

- (id)objectForKey:(id)arg1;

- (void)removeAllItems;

- (void)removeObjectForKey:(id)arg1;

- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;

- (void)setObject:(id)arg1 forKey:(id)arg2;



@end

