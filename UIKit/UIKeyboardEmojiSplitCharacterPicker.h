/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardEmojiSplit.h"


#import "UIKeyboardEmojiInput.h"



@class UIKeyboardEmojiCategory, UIKeyboardEmojiInputController, UILabel;



__attribute__((visibility("hidden")))

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiInput>

{

    UILabel *_optionalDescription;

    UIKeyboardEmojiCategory *_category;

    UIKeyboardEmojiInputController *_inputController;

}



@property(retain) UIKeyboardEmojiCategory *category; // @synthesize category=_category;

- (id)charactersForRow:(long long)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

- (void)reloadForCategory:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

- (void)setRenderConfig:(id)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;



@end


