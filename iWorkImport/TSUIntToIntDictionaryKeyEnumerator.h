/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSUIntToIntDictionaryKeyEnumerator : NSObject

{

    long long **_keys;

    unsigned long long _count;

    unsigned long long _index;

}



- (void)dealloc;

- (id)initWithIntegerKeyDictionary:(id)arg1;

- (long long)nextKey;



@end

