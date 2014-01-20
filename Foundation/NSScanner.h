/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@interface NSScanner : NSObject <NSCopying>

{

}



+ (id)allocWithZone:(struct _NSZone *)arg1;

+ (id)localizedScannerWithString:(id)arg1;

+ (id)scannerWithString:(id)arg1;

- (id)_invertedSkipSet;

- (id)_remainingString;

- (_Bool)_scanDecimal:(unsigned long long)arg1 into:(long long *)arg2;

- (_Bool)caseSensitive;

- (id)charactersToBeSkipped;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)initWithString:(id)arg1;

- (_Bool)isAtEnd;

- (id)locale;

- (_Bool)scanCharactersFromSet:(id)arg1 intoString:(id *)arg2;

- (_Bool)scanDecimal:(CDStruct_5fe7aead *)arg1;

- (_Bool)scanDouble:(double *)arg1;

- (_Bool)scanFloat:(float *)arg1;

- (_Bool)scanHexDouble:(double *)arg1;

- (_Bool)scanHexFloat:(float *)arg1;

- (_Bool)scanHexInt:(unsigned int *)arg1;

- (_Bool)scanHexLongLong:(unsigned long long *)arg1;

- (_Bool)scanInt:(int *)arg1;

- (_Bool)scanInteger:(long long *)arg1;

- (unsigned long long)scanLocation;

- (_Bool)scanLongLong:(long long *)arg1;

- (_Bool)scanString:(id)arg1 intoString:(id *)arg2;

- (_Bool)scanUnsignedInteger:(unsigned long long *)arg1;

- (_Bool)scanUnsignedLongLong:(unsigned long long *)arg1;

- (_Bool)scanUpToCharactersFromSet:(id)arg1 intoString:(id *)arg2;

- (_Bool)scanUpToString:(id)arg1 intoString:(id *)arg2;

- (void)setCaseSensitive:(_Bool)arg1;

- (void)setCharactersToBeSkipped:(id)arg1;

- (void)setLocale:(id)arg1;

- (void)setScanLocation:(unsigned long long)arg1;

- (id)string;



@end

