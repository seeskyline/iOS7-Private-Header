/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartCommand.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface TSCHCommandAddRows : TSCHChartCommand

{

    struct _NSRange mRowRange;

    NSString *mRowName;

}



- (id).cxx_construct;

- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;

- (void)commitPrimitive;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithChartInfo:(id)arg1 rowRange:(struct _NSRange)arg2 rowName:(id)arg3;

- (void)redoPrimitive;

- (void)saveToArchiver:(id)arg1;

- (void)undoPrimitive;



@end

