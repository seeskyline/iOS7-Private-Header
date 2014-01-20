/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMMapper.h"


@class EDReference;



__attribute__((visibility("hidden")))

@interface EMCellMapper : CMMapper

{

    struct EDCellHeader *edCell;

    EDReference *edMergedCellReference;

    int rowNumber;

    int firstColumn;

    int lastColumn;

    int columnSpan;

    _Bool firstCellFlag;

    _Bool spreadLeftFlag;

    double columnWidth;

}



- (void)adjustColumnSpanForGrid:(double *)arg1 columnCount:(unsigned long long)arg2 nextCell:(struct EDCellHeader *)arg3 withState:(id)arg4;

- (int)columnSpan;

- (double)columnWidth;

- (int)firstColumn;

- (id)initWithEDCell:(struct EDCellHeader *)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3 state:(id)arg4;

- (id)initWithParent:(id)arg1;

- (_Bool)isCellEmpty;

- (_Bool)isCellMerged;

- (_Bool)isCellSpreading:(id)arg1;

- (_Bool)isFirstCell;

- (int)lastColumn;

- (void)mapAt:(id)arg1 withState:(id)arg2;

- (void)mapAt:(id)arg1 withState:(id)arg2 height:(double)arg3;

- (id)mapHyperlinkAt:(id)arg1;

- (void)mapRowColSpansAt:(id)arg1 withState:(id)arg2;

- (void)resetColumnSpan:(int)arg1;

- (void)setFirstCellFlag;

- (void)setFirstColumn:(int)arg1;

- (void)setLastColumn:(int)arg1;



@end

