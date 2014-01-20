/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TPDocumentRoot;



__attribute__((visibility("hidden")))

@interface TPFootnoteLayoutController : NSObject

{

    TPDocumentRoot *_documentRoot;

    _Bool _bumpedDocumentEndnotesForPageBreak;

}



- (struct _NSRange)endnoteRangeForSectionCharRange:(struct _NSRange)arg1 isLastSection:(_Bool)arg2;

- (struct _NSRange)footnoteLayoutRangeForPageCharRange:(struct _NSRange)arg1;

@property(readonly, nonatomic) id <TSWPFootnoteMarkProvider> footnoteMarkProvider; // @synthesize footnoteMarkProvider=_documentRoot;

- (void)inflateFootnotesInRange:(struct _NSRange)arg1 intoFootnoteContainer:(id)arg2;

- (id)initWithDocumentRoot:(id)arg1;

- (struct _NSRange)layoutFootnotesFromIndex:(unsigned long long)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(double)arg3 pageCharRange:(struct _NSRange)arg4 sectionCharRange:(struct _NSRange)arg5 isLastSection:(_Bool)arg6;

- (id)p_footnoteReferenceStoragesInFootnoteIndexRange:(struct _NSRange)arg1;

- (unsigned long long)p_layoutFootnotesInRange:(struct _NSRange)arg1 intoFootnoteContainer:(id)arg2 maxHeight:(double)arg3 measure:(_Bool)arg4;

- (id)p_layoutForFootnoteReferenceStorage:(id)arg1;



@end

