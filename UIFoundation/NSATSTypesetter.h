/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSTypesetter.h"


@class NSArray, NSAttributedString, NSLayoutManager, NSParagraphStyle, NSTextContainer;



@interface NSATSTypesetter : NSTypesetter

{

    NSAttributedString *attributedString;

    struct _NSRange paragraphGlyphRange;

    struct _NSRange paragraphSeparatorGlyphRange;

    double lineFragmentPadding;

    NSLayoutManager *layoutManager;

    NSArray *textContainers;

    NSTextContainer *currentTextContainer;

    unsigned long long currentTextContainerIndex;

    struct CGSize currentTextContainerSize;

    NSParagraphStyle *currentParagraphStyle;

    void *_atsReserved[8];

    id _private;

}



+ (_Bool)_allowsScreenFontKerning;

+ (void)initialize;

+ (id)sharedInstance;

+ (id)sharedTypesetter;

- (CDStruct_9b8416ed *)_allocateAuxData;

- (long long)_baseWritingDirection;

- (_Bool)_baselineRenderingMode;

- (const char *)_bidiLevels;

- (struct __CTTypesetter *)_ctTypesetter;

- (void)_doBidiProcessing;

- (void)_flushCachedObjects;

- (_Bool)_forceWordWrapping;

- (id)_getATSTypesetterGuts;

- (_Bool)_isDeallocating;

- (_Bool)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long *)arg1 characterIndex:(unsigned long long *)arg2 atPoint:(struct CGPoint *)arg3 renderingContext:(id *)arg4;

- (CDUnion_09a75e3c *)_lineFragmentRectForProposedRectArgs;

- (void)_setBaselineRenderingMode:(_Bool)arg1;

- (void)_setForceWordWrapping:(_Bool)arg1;

- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)arg1;

- (_Bool)_tryRetain;

- (_Bool)_usesScreenFonts;

- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)arg1;

- (double)baselineOffsetInLayoutManager:(id)arg1 glyphIndex:(unsigned long long)arg2;

- (void)beginLineWithGlyphAtIndex:(unsigned long long)arg1;

- (void)beginParagraph;

- (struct CGRect)boundingBoxForControlGlyphAtIndex:(unsigned long long)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect)arg3 glyphPosition:(struct CGPoint)arg4 characterIndex:(unsigned long long)arg5;

- (void)dealloc;

- (void)endLineWithGlyphRange:(struct _NSRange)arg1;

- (void)endParagraph;

- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)arg1;

- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)arg1;

- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg1 forLayoutManager:(id)arg2 maximumNumberOfLineFragments:(unsigned long long)arg3;

- (void)layoutGlyphsInLayoutManager:(id)arg1 startingAtGlyphIndex:(unsigned long long)arg2 maxNumberOfLineFragments:(unsigned long long)arg3 nextGlyphIndex:(unsigned long long *)arg4;

- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint *)arg1;

- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 remainingRect:(struct CGRect *)arg2;

- (oneway void)release;

- (_Bool)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg1;

- (_Bool)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg1;



@end


