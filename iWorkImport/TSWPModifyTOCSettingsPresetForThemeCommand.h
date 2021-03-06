/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPModifyTOCSettingsBaseCommand.h"


@class TSSTheme;



__attribute__((visibility("hidden")))

@interface TSWPModifyTOCSettingsPresetForThemeCommand : TSWPModifyTOCSettingsBaseCommand

{

    TSSTheme *_theme;

    unsigned long long _presetIndex;

    _Bool _coalesceable;

}



- (_Bool)canCoalesceWithCommand:(id)arg1;

- (void)coalesceWithCommand:(id)arg1;

- (void)commit;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithTheme:(id)arg1 presetIndex:(unsigned long long)arg2 tocSettings:(id)arg3;

- (id)initWithTheme:(id)arg1 presetIndex:(unsigned long long)arg2 tocSettings:(id)arg3 coalesceable:(_Bool)arg4;

- (void)loadFromMessage:(const struct ModifyTOCSettingsPresetForThemeCommandArchive *)arg1 unarchiver:(id)arg2;

- (void)p_undoRedo;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)saveToMessage:(struct ModifyTOCSettingsPresetForThemeCommandArchive *)arg1 archiver:(id)arg2;

- (_Bool)shouldRunSynchronously;

- (const struct ModifyTOCSettingsBaseCommandArchive *)tocCommandArchiveFromUnarchiver:(id)arg1;

- (void)undo;



@end


