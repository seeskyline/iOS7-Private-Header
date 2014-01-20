/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKShieldArtwork.h"


@class NSDictionary;



__attribute__((visibility("hidden")))

@interface _VKGenericShieldArtwork : VKShieldArtwork

{

    double _leftCap;

    double _rightCap;

    double _baseline;

    double _leftPadding;

    double _rightPadding;

    NSDictionary *_stringAttributes;

    struct CGColor *_shadowColor;

    struct CGSize _shadowOffset;

    double _shadowSize;

    unsigned long long _maxLineCount;

    double _lineSpacing;

}



- (id).cxx_construct;

- (void)dealloc;

- (id)initWithImage:(struct CGImage *)arg1 scale:(double)arg2 leftPadding:(double)arg3 rightPadding:(double)arg4 textColor:(struct _VGLColor)arg5 baseline:(double)arg6 leftCap:(double)arg7 rightCap:(double)arg8 shouldStroke:(_Bool)arg9 strokeWidth:(double)arg10 strokeColor:(struct _VGLColor)arg11 shouldShadow:(_Bool)arg12 shadowOffset:(struct CGSize)arg13 shadowSize:(double)arg14 shadowColor:(struct _VGLColor)arg15 fontName:(id)arg16 fontSize:(double)arg17 maxLineCount:(unsigned long long)arg18 lineSpacing:(double)arg19;

- (struct CGImage *)newImageWithShieldText:(id)arg1 centerPoint:(struct CGPoint *)arg2;

- (struct CGSize)size;

- (struct CGSize)sizeWithTextWidth:(float)arg1;



@end

