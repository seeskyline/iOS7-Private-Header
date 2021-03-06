/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSDLayoutManipulatingTracker.h"



@class TSDAutoscroll, TSDInteractiveCanvasController, TSDKnob, TSDRep;



__attribute__((visibility("hidden")))

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker>

{

    TSDRep *mRep;

    TSDKnob *mKnob;

    struct CGPoint mCurrentPosition;

    struct CGPoint mKnobOffset;

    _Bool mDidBegin;

    _Bool mDidDrag;

    _Bool mDragEnding;

    _Bool mEndedOperationDueToESC;

    _Bool mIsInspectorDrivenTracking;

    TSDAutoscroll *mAutoscroll;

}



- (_Bool)allowHUDToDisplay;

- (int)allowedAutoscrollDirections;

@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=mAutoscroll;

- (void)autoscrollWillNotStart;

- (void)beginMovingKnob;

- (void)changeDynamicLayoutsForReps:(id)arg1;

- (void)commitChangesForReps:(id)arg1;

- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;

- (struct CGRect)currentBoundsForStandardKnobs;

@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=mCurrentPosition;

- (void)dealloc;

@property(readonly, nonatomic) double delay;

@property(readonly, nonatomic) _Bool didBegin; // @synthesize didBegin=mDidBegin;

@property(nonatomic) _Bool didDrag; // @synthesize didDrag=mDidDrag;

@property(nonatomic) _Bool dragEnding; // @synthesize dragEnding=mDragEnding;

- (unsigned long long)enabledKnobMask;

- (void)endMovingKnob;

@property(readonly, nonatomic) _Bool endedOperationDueToESC; // @synthesize endedOperationDueToESC=mEndedOperationDueToESC;

- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;

- (void)i_setKnobOffset:(struct CGPoint)arg1;

@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;

- (id)initWithRep:(id)arg1 knob:(id)arg2;

@property(nonatomic) _Bool isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;

@property(retain, nonatomic) TSDKnob *knob; // @synthesize knob=mKnob;

@property(readonly, nonatomic) struct CGPoint knobOffset; // @synthesize knobOffset=mKnobOffset;

- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;

- (void)moveKnobToRepPosition:(struct CGPoint)arg1;

- (_Bool)operationShouldBeDynamic;

@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;

- (_Bool)shouldEndMovingKnobOnESC;

- (_Bool)shouldHideOtherKnobs;

- (_Bool)shouldHideSelectionHighlight;

- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;

- (_Bool)shouldUseKnobOffset;

- (_Bool)supportsAlignmentGuides;

- (struct CGAffineTransform)transformInRootForStandardKnobs;

- (double)unscaledStartAutoscrollThreshold;

- (void)updateAfterAutoscroll:(id)arg1;

- (_Bool)wantsAutoscroll;

- (void)willEndMovingKnobDueToESC;



@end


