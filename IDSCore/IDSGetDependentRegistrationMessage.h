/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "FTIDSMessage.h"



#import "NSCopying.h"



@class NSArray, NSString;



@interface IDSGetDependentRegistrationMessage : FTIDSMessage <NSCopying>

{

    NSString *_service;

    NSArray *_responseRegistrations;

}



- (id)additionalMessageHeaders;

- (id)bagKey;

- (long long)command;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)handleResponseDictionary:(id)arg1;

- (id)init;

- (int)maxTimeoutRetries;

- (id)messageBody;

- (id)requiredKeys;

- (long long)responseCommand;

@property(copy) NSArray *responseRegistrations; // @synthesize responseRegistrations=_responseRegistrations;

@property(copy) NSString *service; // @synthesize service=_service;

- (_Bool)wantsBagKey;

- (_Bool)wantsBinaryPush;

- (_Bool)wantsCompressedBody;

- (_Bool)wantsExtraTimeoutRetry;

- (_Bool)wantsHTTPHeaders;



@end


