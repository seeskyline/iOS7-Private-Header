/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class WDDocument, WDText;



__attribute__((visibility("hidden")))

@interface WDSection : NSObject

{

    unsigned int mOriginal:1;

    unsigned int mTracked:1;

    unsigned int mResolved:1;

    WDDocument *mDocument;

    WDText *mText;

    WDText *mEvenPageHeader;

    WDText *mOddPageHeader;

    WDText *mFirstPageHeader;

    WDText *mEvenPageFooter;

    WDText *mOddPageFooter;

    WDText *mFirstPageFooter;

    CDStruct_90244728 mOriginalProperties;

    CDStruct_90244728 mTrackedProperties;

}



- (id).cxx_construct;

- (void)appendColumnSpace:(long long)arg1;

- (void)appendColumnWidth:(long long)arg1;

- (int)borderDepth;

- (int)borderDisplay;

- (int)borderOffset;

- (id)bottomBorder;

- (long long)bottomMargin;

- (int)breakType;

- (int)chapterNumberSeparator;

- (unsigned short)columnCount;

- (long long)columnSpace;

- (long long)columnSpaceAt:(unsigned int)arg1;

- (long long)columnWidthAt:(unsigned int)arg1;

- (_Bool)columnsEqualWidth;

- (void)dealloc;

- (id)document;

- (id)evenPageFooter;

- (id)evenPageHeader;

- (id)firstPageFooter;

- (id)firstPageHeader;

- (long long)footerMargin;

- (id)formattingChangeDate;

- (_Bool)formattingChanged;

- (long long)gutterMargin;

- (long long)headerMargin;

- (unsigned short)indexToAuthorIDOfFormattingChange;

- (id)initWithDocument:(id)arg1;

- (_Bool)isBorderDepthOverridden;

- (_Bool)isBorderDisplayOverridden;

- (_Bool)isBorderOffsetOverridden;

- (_Bool)isBottomBorderOverridden;

- (_Bool)isBottomMarginOverridden;

- (_Bool)isBreakTypeOverridden;

- (_Bool)isChapterNumberSeparatorOverridden;

- (_Bool)isColumnCountOverridden;

- (_Bool)isColumnSpaceOverridden;

- (_Bool)isColumnsEqualWidthOverridden;

- (_Bool)isFooterMarginOverridden;

- (_Bool)isFormattingChangeDateOverridden;

- (_Bool)isFormattingChangedOverridden;

- (_Bool)isGutterMarginOverridden;

- (_Bool)isHeaderMarginOverridden;

- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;

- (_Bool)isLastColumnWidthDefined;

- (_Bool)isLeftBorderOverridden;

- (_Bool)isLeftMarginOverridden;

- (_Bool)isLineNumberDistanceOverridden;

- (_Bool)isLineNumberIncrementOverridden;

- (_Bool)isLineNumberRestartOverridden;

- (_Bool)isLineNumberStartOverridden;

- (_Bool)isPageHeightOverridden;

- (_Bool)isPageNumberFormatOverridden;

- (_Bool)isPageNumberRestartOverridden;

- (_Bool)isPageNumberStartOverridden;

- (_Bool)isPageOrientationOverridden;

- (_Bool)isPageScaleOverridden;

- (_Bool)isPageWidthOverridden;

- (_Bool)isRightBorderOverridden;

- (_Bool)isRightMarginOverridden;

- (_Bool)isTextDirectionOverridden;

- (_Bool)isTitlePageOverridden;

- (_Bool)isTopBorderOverridden;

- (_Bool)isTopMarginOverridden;

- (_Bool)isVerticalJustificationOverridden;

- (id)leftBorder;

- (long long)leftMargin;

- (short)lineNumberDistance;

- (unsigned short)lineNumberIncrement;

- (int)lineNumberRestart;

- (short)lineNumberStart;

- (id)mutableBottomBorder;

- (id)mutableLeftBorder;

- (id)mutableRightBorder;

- (id)mutableTopBorder;

- (id)oddPageFooter;

- (id)oddPageHeader;

- (long long)pageHeight;

- (int)pageNumberFormat;

- (_Bool)pageNumberRestart;

- (unsigned short)pageNumberStart;

- (int)pageOrientation;

- (unsigned int)pageScale;

- (long long)pageWidth;

- (int)resolveMode;

- (id)rightBorder;

- (long long)rightMargin;

- (void)setBorderDepth:(int)arg1;

- (void)setBorderDisplay:(int)arg1;

- (void)setBorderOffset:(int)arg1;

- (void)setBottomMargin:(long long)arg1;

- (void)setBreakType:(int)arg1;

- (void)setChapterNumberSeparator:(int)arg1;

- (void)setColumnCount:(unsigned short)arg1;

- (void)setColumnSpace:(long long)arg1;

- (void)setColumnsEqualWidth:(_Bool)arg1;

- (void)setFooterMargin:(long long)arg1;

- (void)setFormattingChangeDate:(id)arg1;

- (void)setFormattingChanged:(_Bool)arg1;

- (void)setGutterMargin:(long long)arg1;

- (void)setHeaderMargin:(long long)arg1;

- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;

- (void)setLeftMargin:(long long)arg1;

- (void)setLineNumberDistance:(short)arg1;

- (void)setLineNumberIncrement:(unsigned short)arg1;

- (void)setLineNumberRestart:(int)arg1;

- (void)setLineNumberStart:(short)arg1;

- (void)setPageHeight:(long long)arg1;

- (void)setPageNumberFormat:(int)arg1;

- (void)setPageNumberRestart:(_Bool)arg1;

- (void)setPageNumberStart:(unsigned short)arg1;

- (void)setPageOrientation:(int)arg1;

- (void)setPageScale:(unsigned int)arg1;

- (void)setPageWidth:(long long)arg1;

- (void)setResolveMode:(int)arg1;

- (void)setRightMargin:(long long)arg1;

- (void)setTextDirection:(int)arg1;

- (void)setTitlePage:(_Bool)arg1;

- (void)setTopMargin:(long long)arg1;

- (void)setVerticalJustification:(int)arg1;

- (id)text;

- (int)textDirection;

- (_Bool)titlePage;

- (id)topBorder;

- (long long)topMargin;

- (int)verticalJustification;



@end

