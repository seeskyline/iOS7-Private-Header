/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueProxyGetter.h"


@class NSKeyValueMutatingCollectionMethodSet, NSKeyValueNonmutatingCollectionMethodSet;



__attribute__((visibility("hidden")))

@interface NSKeyValueFastMutableCollection1Getter : NSKeyValueProxyGetter

{

    NSKeyValueNonmutatingCollectionMethodSet *_nonmutatingMethods;

    NSKeyValueMutatingCollectionMethodSet *_mutatingMethods;

}



- (void)dealloc;

- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 nonmutatingMethods:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5;

- (id)mutatingMethods;

- (id)nonmutatingMethods;



@end


