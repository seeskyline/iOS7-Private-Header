/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TSWPOffscreenColumn <NSObject>

@property(readonly, nonatomic) struct _NSRange anchoredRange;

@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;

@property(readonly, nonatomic) struct _NSRange range;

@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;

@property(readonly, nonatomic) unsigned long long startCharIndex;

- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3;

@end


