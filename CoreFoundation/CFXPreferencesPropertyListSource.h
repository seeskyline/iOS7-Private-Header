/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CFXPreferencesSource.h"


@class CFXPreferencesPropertyListSourceSynchronizer;



__attribute__((visibility("hidden")))

@interface CFXPreferencesPropertyListSource : CFXPreferencesSource

{

    unsigned short _mode;

    unsigned int _owner;

    CFXPreferencesPropertyListSourceSynchronizer *_synchronizer;

    struct __CFArray *_dirtyKeys;

    struct __CFURL *_url;

    long long _formatToWrite;

    struct _CFXPreferencesStatInfo _statInfo;

    unsigned int _group;

}



- (void)_assimilateSync:(id)arg1;

- (void)_reenableSuddenTermination;

- (void)dealloc;

- (id)description;

- (void)finalize;

- (id)initWithURL:(struct __CFURL *)arg1 mode:(unsigned short)arg2 owner:(unsigned int)arg3 group:(unsigned int)arg4 format:(long long)arg5;

- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;

- (unsigned char)synchronize;

- (void)synchronizeInBackgroundWithCompletionBlock:(id)arg1;



@end


