/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSUCustomFormatWrapper : NSObject

{

    struct TSUCustomFormat *mCustomFormat;

}



- (const CDStruct_8acff13f *)conditionalFormatDataForValue:(double)arg1;

- (const CDStruct_8acff13f *)defaultFormatData;

- (id)formatName;

- (int)formatType;

- (id)initWithCustomFormat:(struct TSUCustomFormat *)arg1;

- (const struct TSUCustomFormat *)pointerToTSUCustomFormat;



@end

