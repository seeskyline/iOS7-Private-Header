/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "FTIDSMessage.h"



#import "NSCopying.h"



@class NSArray, NSDictionary;



@interface IDSProfileGetHandlesMessage : FTIDSMessage <NSCopying>

{

    NSArray *_responseHandles;

    NSDictionary *_selfHandle;

}



- (id)additionalMessageHeaders;

- (id)bagKey;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)handleResponseDictionary:(id)arg1;

- (id)init;

- (int)maxTimeoutRetries;

- (id)messageBody;

- (id)requiredKeys;

@property(copy) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;

@property(copy) NSDictionary *selfHandle; // @synthesize selfHandle=_selfHandle;

- (_Bool)wantsExtraTimeoutRetry;



@end

