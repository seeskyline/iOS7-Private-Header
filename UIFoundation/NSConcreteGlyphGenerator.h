/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSGlyphGenerator.h"


__attribute__((visibility("hidden")))

@interface NSConcreteGlyphGenerator : NSGlyphGenerator

{

    char *bidiTypes;

    char *bidiLevels;

}



+ (id)sharedGlyphGenerator;

- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long *)arg3 characterIndex:(unsigned long long *)arg4;



@end

