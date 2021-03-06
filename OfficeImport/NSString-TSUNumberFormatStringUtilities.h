/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSString.h"



@interface NSString (TSUNumberFormatStringUtilities)

+ (id)numberSymbols;

- (unsigned long long)indexOfFirstNonPrefixCharacterInNumberFormatSubpattern;

- (unsigned long long)indexOfLastNonSuffixCharacterInNumberFormatSubpattern;

- (unsigned long long)indexOfNumberFormatSubpatternSeparator;

- (_Bool)isNumberFormatPattern;

- (id)negativeSubpatternOfNumberFormatPattern;

- (id)newRangesOfEscapedCharactersInNumberFormatPattern;

- (id)newStringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand;

- (id)numberPortionOfNumberFormatSubpattern;

- (id)positiveSubpatternOfNumberFormatPattern;

- (id)prefixOfNumberFormatSubpattern;

- (id)stringByRemovingEscapedCharactersFromNumberFormatPattern;

- (id)suffixOfNumberFormatSubpattern;

@end


