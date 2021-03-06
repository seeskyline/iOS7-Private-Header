/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class SKPaymentQueueClient;



@interface SKRequest : NSObject

{

    id _requestInternal;

}



- (void)_beginBackgroundTask;

- (void)_endBackgroundTask;

- (void)_sendXPCMessage;

- (void)_shutdownRequest;

- (void)_startWithMessage:(id)arg1 replyBlock:(id)arg2;

- (void)cancel;

- (void)dealloc;

@property(nonatomic) id <SKRequestDelegate> delegate;

- (id)init;

@property(copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;

- (void)start;



@end


