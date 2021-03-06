/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMNode.h"



#import "UIWebSelectionBlock.h"



@interface DOMNode (UIWebSelectionAdditions) <UIWebSelectionBlock>

- (id)asDomNode;

- (id)asDomRange;

- (id)asElement;

- (struct CGRect)boundingRect;

- (struct CGRect)boundingRectAndInsideFixedPosition:(int *)arg1;

- (_Bool)canShrinkDirectlyToTextOnly;

- (_Bool)containsBlock:(id)arg1;

- (_Bool)containsNode:(id)arg1;

- (_Bool)containsRange:(id)arg1;

- (id)enclosingDocument;

- (id)enclosingElementIncludingSelf;

- (id)firstDescendantOfAboutTheSameWidthOrHeight;

- (id)firstDescendantOfAboutTheSameWidthOrHeightAsRect:(struct CGRect)arg1 withDescentDirection:(int)arg2;

- (_Bool)hasCustomLineHeight;

- (_Bool)isSameBlock:(id)arg1;

- (id)largerParent;

- (id)lastDescendantOfAboutTheSameWidthOrHeight;

- (id)parentBlock;

- (id)rangeOfContents;

- (_Bool)rendersAsBlock;

- (_Bool)selectable;

- (_Bool)strictlyContainsBlock:(id)arg1;

- (_Bool)strictlyContainsNode:(id)arg1;

- (id)webFrame;

@end


