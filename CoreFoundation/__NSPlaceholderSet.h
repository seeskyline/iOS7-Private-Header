/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableSet.h"


__attribute__((visibility("hidden")))

@interface __NSPlaceholderSet : NSMutableSet

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)immutablePlaceholder;

+ (void)initialize;

+ (id)mutablePlaceholder;

- (void)addObject:(id)arg1;

- (unsigned long long)count;

- (void)dealloc;

- (id)init;

- (id)initWithCapacity:(unsigned long long)arg1;

- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;

- (id)member:(id)arg1;

- (id)objectEnumerator;

- (oneway void)release;

- (void)removeObject:(id)arg1;

- (id)retain;

- (unsigned long long)retainCount;



@end

