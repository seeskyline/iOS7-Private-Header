/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class TSSApplyThemeCommand;



__attribute__((visibility("hidden")))

@interface TSSApplyThemeChildCommand : TSKCommand

{

    TSSApplyThemeCommand *mParent;

}



- (id)initWithParentCommand:(id)arg1;

- (void)loadFromArchive:(const struct ApplyThemeChildCommandArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) TSSApplyThemeCommand *parent; // @synthesize parent=mParent;

- (void)saveToArchive:(struct ApplyThemeChildCommandArchive *)arg1 archiver:(id)arg2;



@end

