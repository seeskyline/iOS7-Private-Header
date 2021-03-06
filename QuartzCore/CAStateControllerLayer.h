/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;



__attribute__((visibility("hidden")))

@interface CAStateControllerLayer : NSObject

{

    CALayer *_layer;

    CAState *_currentState;

    CAStateControllerUndo *_undoStack;

    NSMutableArray *_transitions;

    NSTimer *_nextTimer;

    CAState *_nextState;

    float _nextSpeed;

}



- (void)addTransition:(id)arg1;

@property(retain, nonatomic) CAState *currentState; // @synthesize currentState=_currentState;

- (void)dealloc;

- (id)initWithLayer:(id)arg1;

- (void)invalidate;

@property(readonly) CALayer *layer; // @synthesize layer=_layer;

- (void)removeTransition:(id)arg1;

@property(readonly) CAStateControllerUndo *undoStack; // @synthesize undoStack=_undoStack;



@end


