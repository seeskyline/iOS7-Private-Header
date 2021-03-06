/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface EDRowBlock : NSObject

{

    struct __CFData *mPackedData;

    struct __CFData *mCellOffsets;

}



+ (id)rowBlock;

- (struct EDCellHeader *)addCellWithColumnNumber:(unsigned int)arg1 type:(int)arg2 isFormulaCell:(_Bool)arg3 rowInfo:(struct EDRowInfo **)arg4 rowBlocks:(id)arg5;

- (struct EDRowInfo *)addRowInfoWithRowNumber:(unsigned int)arg1 cellCountHint:(unsigned int)arg2;

- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;

- (struct EDCellHeader *)cellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;

- (struct EDCellHeader *)cellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;

- (void)checkCellOffsetOrThrow:(unsigned long long)arg1;

- (void)dealloc;

- (void)doneWithContent;

- (unsigned int)expectedIndexOfCellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;

- (unsigned int)firstRowNumber;

- (void)incrementIndex;

- (unsigned long long)index;

- (unsigned int)indexOfCellWithColumnNumber:(unsigned int)arg1 rowInfo:(struct EDRowInfo *)arg2;

- (unsigned int)indexOfRowInfoWithRowNumber:(unsigned int)arg1;

- (id)init;

- (unsigned int)lastRowNumber;

- (void)removeCellAtIndex:(unsigned int)arg1 rowInfo:(struct EDRowInfo **)arg2;

- (unsigned int)rowCount;

- (struct EDRowInfo *)rowInfoAtIndex:(unsigned int)arg1;

- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg1;

- (struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg1 createIfNil:(_Bool)arg2;

- (void)setIndex:(unsigned long long)arg1;

- (unsigned long long)startOfCellsOrThrow;

- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;



@end


