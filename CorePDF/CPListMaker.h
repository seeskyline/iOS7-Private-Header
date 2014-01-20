/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CPDisposable.h"



@class CPLayoutArea, CPList, NSArray;



@interface CPListMaker : NSObject <CPDisposable>

{

    CPLayoutArea *area;

    NSArray *spacers;

    unsigned int textLineCount;

    id *textLines;

    CPList *list;

}



+ (void)makeListsInChunk:(id)arg1;

+ (void)makeListsInLayoutArea:(id)arg1;

+ (void)makeListsInPage:(id)arg1;

- (void)dealloc;

- (void)dispose;

- (void)fetchTextLine:(id)arg1;

- (void)fetchTextLinesInColumn:(id)arg1;

- (void)finalize;

- (id)initWithLayoutArea:(id)arg1;

- (_Bool)makeListFrom:(struct CPListInfo *)arg1;

- (void)makeListItemFrom:(struct CPListInfo *)arg1 stopAt:(unsigned int)arg2;

- (void)makeLists;

- (void)makeListsInColumn:(id)arg1;



@end

