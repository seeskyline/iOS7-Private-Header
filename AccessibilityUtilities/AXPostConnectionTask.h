/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AXTimer;



@interface AXPostConnectionTask : NSObject

{

    _Bool _didTimeout;

    id _postConnectionBlock;

    AXTimer *_timeoutTimer;

}



- (void)_performTask;

- (void)dealloc;

@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;

- (id)initWithConnectBlock:(id)arg1 timeout:(void)arg2 accessQueue:(double)arg3;

- (void)performTask;

@property(copy, nonatomic) id postConnectionBlock; // @synthesize postConnectionBlock=_postConnectionBlock;

@property(retain, nonatomic) AXTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;



@end

