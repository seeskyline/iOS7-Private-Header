/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class UITextInputController;



__attribute__((visibility("hidden")))

@interface NSUndoTextOperation : NSObject

{

    struct _NSRange _affectedRange;

    UITextInputController *_inputController;

}



@property(nonatomic) struct _NSRange affectedRange; // @synthesize affectedRange=_affectedRange;

- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;

@property(nonatomic) UITextInputController *inputController; // @synthesize inputController=_inputController;

- (_Bool)supportsCoalescing;

- (void)undoRedo;



@end

