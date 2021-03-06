/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TUAppender.h"



@class NSFileHandle, NSMutableString, NSObject<TUAppenderDelegate>, NSString, NSTimer;



@interface TURollingFileAppender : NSObject <TUAppender>

{

    struct _opaque_pthread_mutex_t _lock;

    NSString *_directory;

    NSString *_prefix;

    NSMutableString *_buffer;

    NSFileHandle *_fileHandle;

    NSTimer *_scheduledFlushTimer;

    struct dispatch_queue_s *_backgroundQueue;

    NSObject<TUAppenderDelegate> *_appenderDelegate;

}



+ (_Bool)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;

- (void)_flush;

- (id)_logFileHandle;

- (id)_logFilePath;

- (void)_reloadFileHandles;

- (void)_rollAndZip;

- (void)_rollAndZipIfNecessary;

- (void)_scheduleFlush;

- (void)dealloc;

- (void)flush;

- (id)formattedDyldContextForBacktrace:(id)arg1;

- (id)initWithDirectory:(id)arg1 prefix:(id)arg2;

- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;

- (void)setAppenderDelegate:(id)arg1;



@end


