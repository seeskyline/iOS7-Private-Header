/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueFastMutableArray.h"


@class NSKeyValueGetter;



__attribute__((visibility("hidden")))

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray

{

    NSKeyValueGetter *_valueGetter;

}



+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;

- (id)_nonNilArrayValueWithSelector:(SEL)arg1;

- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

- (void)_proxyNonGCFinalize;

- (unsigned long long)count;

- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;

- (id)objectAtIndex:(unsigned long long)arg1;

- (id)objectsAtIndexes:(id)arg1;



@end


