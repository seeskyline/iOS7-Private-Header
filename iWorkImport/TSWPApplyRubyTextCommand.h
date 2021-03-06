/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextBaseCommand.h"


@class NSString, TSWPStorage;



__attribute__((visibility("hidden")))

@interface TSWPApplyRubyTextCommand : TSWPTextBaseCommand

{

    struct _NSRange _range;

    NSString *_rubyText;

    struct TSWPStorageTransaction *_undoRedoTransaction;

    TSWPStorage *_storage;

}



- (id).cxx_construct;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithStorage:(id)arg1 range:(struct _NSRange)arg2 rubyText:(id)arg3;

- (void)loadFromArchive:(const struct ApplyRubyTextCommandArchive *)arg1 unarchiver:(id)arg2;

- (void)p_undoRedo;

- (_Bool)process;

- (void)redo;

- (void)saveToArchive:(struct ApplyRubyTextCommandArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (_Bool)shouldRunSynchronously;

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;

- (void)undo;



@end


