/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol UITextInputControllerDelegate <NSObject>



@optional

- (void)textInput:(id)arg1 prepareAttributedTextForInsertion:(id)arg2;

- (_Bool)textInput:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementText:(id)arg3;

- (struct _NSRange)textInput:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange)arg2 toCharacterRange:(struct _NSRange)arg3;

- (void)textInputDidChange:(id)arg1;

- (void)textInputDidChangeSelection:(id)arg1;

- (_Bool)textInputShouldBeginEditing:(id)arg1;

@end

