/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFComposeRecipient.h"


@class NSArray, NSString;



@interface MFComposeRecipientGroup : MFComposeRecipient

{

    NSArray *_children;

    NSString *_displayString;

}



- (void)_populateSortedChildren;

- (id)address;

- (id)children;

- (id)childrenWithCompleteMatches;

- (id)commentedAddress;

- (id)completelyMatchedAttributedStrings;

- (id)compositeName;

- (void)dealloc;

- (id)displayString;

- (id)initWithChildren:(id)arg1 displayString:(id)arg2;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isGroup;

- (_Bool)isRemovableFromSearchResults;

- (id)label;

- (id)placeholderName;

- (int)property;

- (void *)record;

- (int)recordID;

- (id)sortedChildren;

- (id)unlocalizedLabel;

- (_Bool)wasCompleteMatch;



@end


