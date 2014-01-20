/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EDReference.h"


__attribute__((visibility("hidden")))

@interface EDSheetReference : EDReference

{

    unsigned long long mSheetIndex;

}



+ (id)referenceWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;

- (_Bool)fullyAdjacentToReference:(id)arg1;

- (unsigned long long)hash;

- (id)init;

- (id)initWithSheetIndex:(unsigned long long)arg1 firstRow:(int)arg2 lastRow:(int)arg3 firstColumn:(int)arg4 lastColumn:(int)arg5;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isEqualToTableReference:(id)arg1;

- (_Bool)isSheedIndexValid;

- (unsigned long long)sheetIndex;

- (void)unionWithReference:(id)arg1;



@end

