/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSWPOffscreenColumn.h"



@class TPPageController;



__attribute__((visibility("hidden")))

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn>

{

    unsigned long long _pageIndex;

    TPPageController *_pageController;

}



@property(readonly, nonatomic) struct _NSRange anchoredRange;

- (void)dealloc;

- (id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2;

@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;

- (const CDStruct_6026ced1 *)p_targetFirstHint;

- (const CDStruct_6026ced1 *)p_targetLastHint;

@property(readonly, nonatomic) struct _NSRange range;

@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;

@property(readonly, nonatomic) unsigned long long startCharIndex;

- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;



@end

