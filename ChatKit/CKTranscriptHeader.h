/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CKTranscriptDataRowObject.h"



@interface CKTranscriptHeader : NSObject <CKTranscriptDataRowObject>

{

    id <CKMessage> _message;

}



- (Class)__ck_displayCellClass;

- (id)__ck_displayCellIdentifier;

- (id)__ck_displayContactImage;

- (struct UIEdgeInsets)__ck_displayContentAlignmentInsets;

- (_Bool)__ck_displayDuringSend;

- (id)__ck_displayGUIDWithMessage:(id)arg1;

- (struct CGSize)__ck_displaySize:(struct UIEdgeInsets *)arg1;

- (BOOL)__ck_displayTranscriptOrientation;

- (void)__ck_prewarmForDisplay;

- (_Bool)__ck_transcriptUsesTextAlignmentInsets;

- (_Bool)__ck_wantsDrawerLayout;

- (void)dealloc;

- (id)initWithMessage:(id)arg1;

@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;



@end


