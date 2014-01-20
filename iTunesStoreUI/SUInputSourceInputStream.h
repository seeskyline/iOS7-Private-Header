/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSInputStream.h"



@class NSArray, NSError;



@interface SUInputSourceInputStream : NSInputStream

{

    void *_clientCallback;

    CDStruct_4210025a _clientContext;

    id _delegate;

    NSArray *_inputSources;

    long long _inputSourceIndex;

    struct __CFRunLoop *_runLoop;

    struct __CFRunLoopSource *_runLoopSource;

    _Bool _sentAtEndEvent;

    _Bool _sentOpenEvent;

    NSError *_streamError;

    unsigned long long _streamStatus;

}



- (void)_close;

- (id)_currentInputSource;

- (void)_scheduleCallback;

- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;

- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(void *)arg2 context:(CDStruct_4210025a *)arg3;

- (void)_setStreamError:(id)arg1;

- (void)_streamEventCallback;

- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;

- (void)close;

- (void)dealloc;

- (id)delegate;

- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;

- (_Bool)hasBytesAvailable;

- (id)init;

- (id)initWithData:(id)arg1;

- (id)initWithFileAtPath:(id)arg1;

- (id)initWithInputSources:(id)arg1;

- (id)initWithURL:(id)arg1;

@property(readonly, nonatomic) NSArray *inputSources; // @synthesize inputSources=_inputSources;

- (void)open;

- (id)propertyForKey:(id)arg1;

- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;

- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;

- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;

- (void)setDelegate:(id)arg1;

- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;

- (id)streamError;

- (unsigned long long)streamStatus;



@end

