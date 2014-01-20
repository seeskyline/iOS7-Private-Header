/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDDrawableLayout.h"


__attribute__((visibility("hidden")))

@interface TSDStyledLayout : TSDDrawableLayout

{

    _Bool mIsUpdatingOpacity;

    double mDynamicOpacity;

}



- (struct CGRect)aliasedAlignmentFrameForScale:(double)arg1;

- (struct CGRect)alignmentFrameInRoot;

- (_Bool)canFlip;

- (void)dynamicOpacityChangeDidBegin;

- (void)dynamicOpacityChangeDidEnd;

- (void)dynamicOpacityUpdateToValue:(double)arg1;

- (struct CGRect)frameForCulling;

- (struct CGRect)i_baseFrame;

- (_Bool)isInvisible;

@property(readonly, nonatomic) double opacity;

- (struct CGRect)reflectionBoundsForRect:(struct CGRect)arg1;

- (struct CGRect)reflectionFrame;

- (struct CGRect)reflectionFrameForSubRect:(struct CGRect)arg1;

- (struct CGRect)reflectionFrameInRoot;

- (struct CGRect)shadowedNaturalBoundsWithoutOffset;

- (id)styledInfo;



@end

