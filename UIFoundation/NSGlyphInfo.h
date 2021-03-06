/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface NSGlyphInfo : NSObject <NSCopying, NSCoding>

{

    NSString *_baseString;

}



+ (id)glyphInfoWithCharacterIdentifier:(unsigned long long)arg1 collection:(unsigned long long)arg2 baseString:(id)arg3;

+ (id)glyphInfoWithGlyph:(unsigned int)arg1 forFont:(id)arg2 baseString:(id)arg3;

+ (id)glyphInfoWithGlyphName:(id)arg1 forFont:(id)arg2 baseString:(id)arg3;

+ (void)initialize;

- (id)_baseString;

- (unsigned int)_glyphForFont:(id)arg1 baseString:(id)arg2;

- (unsigned long long)characterCollection;

- (unsigned long long)characterIdentifier;

- (Class)classForKeyedArchiver;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)glyphName;

- (id)initWithBaseString:(id)arg1;

- (id)initWithCoder:(id)arg1;



@end


