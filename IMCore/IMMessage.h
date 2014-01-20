/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class FZMessage, IMHandle, NSArray, NSAttributedString, NSDate, NSError, NSString;



@interface IMMessage : NSObject <NSCopying>

{

    IMHandle *_sender;

    IMHandle *_subject;

    NSAttributedString *_text;

    NSString *_plainBody;

    NSDate *_time;

    NSDate *_timeDelivered;

    NSDate *_timeRead;

    NSString *_guid;

    NSAttributedString *_messageSubject;

    NSArray *_fileTransferGUIDs;

    NSError *_error;

    NSArray *_parts;

    unsigned long long _flags;

    _Bool _isInvitationMessage;

    long long _messageID;

}



+ (id)defaultInvitationMessageFromSender:(id)arg1 flags:(unsigned long long)arg2;

+ (id)fromMeIMHandle:(id)arg1 withText:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;

+ (id)instantMessageWithText:(id)arg1 flags:(unsigned long long)arg2;

+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(unsigned long long)arg4;

+ (id)instantMessageWithText:(id)arg1 messageSubject:(id)arg2 flags:(unsigned long long)arg3;

+ (id)messageFromFZMessage:(id)arg1 sender:(id)arg2 subject:(id)arg3;

+ (id)messageFromFZMessageDictionary:(id)arg1 sender:(id)arg2 subject:(id)arg3;

- (long long)_compareIMMessageDates:(id)arg1;

- (long long)_compareIMMessageGUIDs:(id)arg1;

- (long long)_compareIMMessageIDs:(id)arg1;

- (id)_copyWithFlags:(unsigned long long)arg1;

- (void)_flushMessageParts;

@property(readonly, nonatomic) FZMessage *_fzMessage;

- (id)_initWithSender:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 plainText:(id)arg5 text:(id)arg6 messageSubject:(id)arg7 fileTransferGUIDs:(id)arg8 flags:(unsigned long long)arg9 error:(id)arg10 guid:(id)arg11 messageID:(long long)arg12 subject:(id)arg13;

- (void)_loadParts;

- (void)_parseIMMessagePartsWithTextProcessingBlock:(id)arg1 fileTransferProcessingBlock:(void)arg2;

- (void)_updateError:(id)arg1;

- (void)_updateFileTransferGUIDs:(id)arg1;

- (void)_updateFlags:(unsigned long long)arg1;

- (void)_updateGUID:(id)arg1;

- (void)_updateMessageID:(long long)arg1;

- (void)_updateSender:(id)arg1;

- (void)_updateText:(id)arg1;

- (void)_updateTime:(id)arg1;

- (void)_updateTimeDelivered:(id)arg1;

- (void)_updateTimeRead:(id)arg1;

- (long long)compare:(id)arg1;

- (long long)compare:(id)arg1 comparisonType:(long long)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;

@property(copy, nonatomic) NSArray *fileTransferGUIDs; // @synthesize fileTransferGUIDs=_fileTransferGUIDs;

@property(nonatomic) unsigned long long flags; // @synthesize flags=_flags;

@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;

@property(readonly, nonatomic) _Bool hasDataDetectorResults;

@property(readonly, nonatomic) _Bool hasInlineAttachments;

- (id)initWithSender:(id)arg1 fileTransfer:(id)arg2;

- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(unsigned long long)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8;

- (id)initWithSender:(id)arg1 time:(id)arg2 text:(id)arg3 messageSubject:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8 subject:(id)arg9;

@property(readonly, nonatomic) NSArray *inlineAttachmentAttributesArray;

@property(readonly, nonatomic) _Bool isAddressedToMe;

@property(readonly, nonatomic) _Bool isAlert;

@property(readonly, nonatomic) _Bool isAutoReply;

@property(readonly, nonatomic) _Bool isDelayed;

@property(readonly, nonatomic) _Bool isDelivered;

@property(readonly, nonatomic) _Bool isEmote;

@property(readonly, nonatomic) _Bool isEmpty;

- (_Bool)isEqual:(id)arg1;

@property(readonly, nonatomic) _Bool isFinished;

@property(readonly, nonatomic) _Bool isFromMe;

@property(nonatomic) _Bool isInvitationMessage; // @synthesize isInvitationMessage=_isInvitationMessage;

@property(readonly, nonatomic) _Bool isRead;

@property(readonly, nonatomic) _Bool isSent;

@property(readonly, nonatomic) _Bool isSystemMessage;

@property(readonly, nonatomic) _Bool isTypingMessage;

@property(nonatomic) long long messageID; // @synthesize messageID=_messageID;

@property(readonly, nonatomic) NSAttributedString *messageSubject; // @synthesize messageSubject=_messageSubject;

@property(readonly, nonatomic) NSArray *parts;

@property(readonly, nonatomic) NSString *plainBody;

@property(retain, nonatomic) IMHandle *sender; // @synthesize sender=_sender;

@property(readonly, nonatomic) NSString *senderName;

- (void)setIsAddressedToMe:(_Bool)arg1;

@property(readonly, nonatomic) IMHandle *subject; // @synthesize subject=_subject;

@property(readonly, nonatomic) NSString *summaryString;

@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;

@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;

@property(retain, nonatomic) NSDate *timeDelivered; // @synthesize timeDelivered=_timeDelivered;

@property(retain, nonatomic) NSDate *timeRead; // @synthesize timeRead=_timeRead;

@property(readonly, nonatomic) _Bool wasDataDetected;

@property(readonly, nonatomic) _Bool wasDowngraded;



@end

