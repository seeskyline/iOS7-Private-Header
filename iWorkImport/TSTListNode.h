/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSTExpressionNode.h"


@class NSArray, NSString;



__attribute__((visibility("hidden")))

@interface TSTListNode : TSTExpressionNode

{

    NSString *mWhitespaceAfterLeftParen;

    NSArray *mWhitespaceAfterDelimiters;

}



- (id)argumentSpec;

- (void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg1 hostCell:(CDStruct_0441cfb5)arg2;

- (void)dealloc;

- (id)description;

- (id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3;

- (id)initFromArchive:(const struct ListNodeArchive *)arg1 unarchiver:(id)arg2;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4;

- (id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3;

- (void)saveToArchive:(struct ListNodeArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(retain, nonatomic) NSArray *whitespaceAfterDelimiters; // @synthesize whitespaceAfterDelimiters=mWhitespaceAfterDelimiters;

@property(retain) NSString *whitespaceAfterLeftParen; // @synthesize whitespaceAfterLeftParen=mWhitespaceAfterLeftParen;

- (id)string;

- (int)tokenType;



@end

