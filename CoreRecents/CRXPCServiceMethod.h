/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSObject<OS_xpc_object>;



@interface CRXPCServiceMethod : NSObject

{

    NSObject<OS_xpc_object> *_message;

    long long _messageIndex;

}



+ (id)methodWithServiceName:(id)arg1 arguments:(id)arg2;

- (void)dealloc;

- (id)initWithMessage:(id)arg1 index:(long long)arg2;

@property(retain) NSObject<OS_xpc_object> *message; // @synthesize message=_message;

@property long long messageIndex; // @synthesize messageIndex=_messageIndex;



@end

