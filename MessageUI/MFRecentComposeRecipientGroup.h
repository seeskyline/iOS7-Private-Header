/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFComposeRecipientGroup.h"


@class CRRecentContact;



@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup

{

    CRRecentContact *_recentContact;

}



- (void)dealloc;

- (id)initWithChildren:(id)arg1 displayString:(id)arg2 recentContact:(id)arg3;

- (id)label;

- (id)placeholderName;

@property(readonly, nonatomic) CRRecentContact *recentContact; // @synthesize recentContact=_recentContact;

- (id)unlocalizedLabel;



@end


