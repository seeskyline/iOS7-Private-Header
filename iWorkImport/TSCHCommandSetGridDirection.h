/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCHChartCommand.h"


__attribute__((visibility("hidden")))

@interface TSCHCommandSetGridDirection : TSCHChartCommand

{

    int mNewDirection;

    int mOldDirection;

}



- (const struct ChartCommandArchive *)chartCommandArchiveFromUnarchiver:(id)arg1;

- (void)commitPrimitive;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithChartInfo:(id)arg1 gridDirection:(int)arg2;

- (_Bool)process;

- (void)redoPrimitive;

- (void)saveToArchiver:(id)arg1;

- (void)undoPrimitive;



@end


