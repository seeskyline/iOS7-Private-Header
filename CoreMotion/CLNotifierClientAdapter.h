/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CLNotifierServiceClientProtocol.h"



@interface CLNotifierClientAdapter : NSObject <CLNotifierServiceClientProtocol>

{

    struct CLNotifierClientBase *_client;

}



- (id)debugDescription;

- (id)init;

- (id)initWithClient:(struct CLNotifierClientBase *)arg1;

- (void)invalidate;

- (void)onNotification:(int)arg1 withData:(id)arg2;



@end

