/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "InvocationTrampoline.h"


@class NSOperationQueue;



@interface OperationQueueInvocationTrampoline : InvocationTrampoline

{

    NSOperationQueue *_queue;

    long long _priority;

}



- (void)dealloc;

- (void)forwardInvocation:(id)arg1;

- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;



@end


