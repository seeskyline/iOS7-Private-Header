/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMapTable;



__attribute__((visibility("hidden")))

@interface VKObjectPool : NSObject

{

    NSMapTable *_map;

}



- (void)dealloc;

- (id)objectForKey:(id)arg1;

- (void)removeObjectForKey:(id)arg1;

- (void)setObject:(id)arg1 forKey:(id)arg2;



@end


