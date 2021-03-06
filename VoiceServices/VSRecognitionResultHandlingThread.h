/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSConditionLock, NSMutableArray;



@interface VSRecognitionResultHandlingThread : NSObject

{

    id <VSRecognitionResultHandlingThreadDelegate> _delegate;

    NSMutableArray *_requests;

    NSConditionLock *_lock;

    struct {

        unsigned int running:1;

        unsigned int delegateDidHandleResults:1;

        unsigned int valid:1;

    } _resultHandlingFlags;

}



- (void)_handleRequests;

- (void)_notifyRequestHandled:(id)arg1;

- (void)dealloc;

- (void)handleResults:(id)arg1 withHandler:(id)arg2;

- (id)init;

- (void)invalidate;

- (void)setDelegate:(id)arg1;



@end


