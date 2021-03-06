/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFMessageStore.h"



@class MFActivityMonitor, MFMailboxUid, MailAccount;



@interface MFMailMessageStore : MFMessageStore

{

    unsigned long long _state;

    struct {

        unsigned int isReadOnly:1;

        unsigned int hasUnsavedChangesToMessageData:1;

        unsigned int haveOpenLockFile:1;

        unsigned int compacting:1;

        unsigned int cancelInvalidation:1;

        unsigned int forceInvalidation:1;

        unsigned int isWritingChangesToDisk:1;

        unsigned int isTryingToClose:1;

        unsigned int compactOnClose:1;

        unsigned int reserved:23;

    } _flags;

    MFMailboxUid *_mailboxUid;

    MailAccount *_account;

    unsigned long long _deletedMessagesSize;

    unsigned long long _deletedMessageCount;

    unsigned long long _unreadMessageCount;

    unsigned long long _generationNumber;

    unsigned long long _lastFetchCount;

    MFActivityMonitor *_openMonitor;

}



+ (Class)classForMimePart;

+ (unsigned long long)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(_Bool)arg3 deleteOriginals:(_Bool)arg4 isDeletion:(_Bool)arg5 unsuccessfulOnes:(id)arg6;

+ (unsigned long long)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(_Bool)arg3 deleteOriginals:(_Bool)arg4 isDeletion:(_Bool)arg5 unsuccessfulOnes:(id)arg6 newMessages:(id)arg7;

+ (_Bool)createEmptyStoreForPath:(id)arg1;

+ (_Bool)createEmptyStoreIfNeededForPath:(id)arg1;

+ (Class)headersClass;

+ (_Bool)storeAtPathIsWritable:(id)arg1;

- (id)_defaultRouterDestination;

- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;

- (void)_flushAllMessageData;

- (void)_rebuildTableOfContentsSynchronously;

- (void)_setFlagsForMessages:(id)arg1;

- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(_Bool)arg3;

- (_Bool)_shouldChangeComponentMessageFlags;

- (_Bool)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;

- (_Bool)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(_Bool)arg3;

- (id)account;

- (void)allMessageFlagsDidChange:(id)arg1;

- (_Bool)allowsAppend;

- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;

- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;

- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;

- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;

- (int)archiveDestination;

- (_Bool)canCompact;

- (_Bool)canDeleteMessage:(id)arg1;

- (_Bool)canFetchMessageIDs;

- (_Bool)canFetchSearchResults;

- (void)cancelOpen;

- (void)close;

- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;

- (id)copyMessagesMatchingText:(id)arg1;

- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;

- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;

- (id)copyOfAllMessages;

- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;

- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;

- (id)copyOfMessagesInRange:(struct _NSRange)arg1;

- (void)dealloc;

- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;

- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;

- (void)deletedCount:(unsigned long long *)arg1 andSize:(unsigned long long *)arg2;

- (id)description;

- (void)didOpen;

- (id)displayName;

- (void)doCompact;

- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;

- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;

- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;

- (long long)fetchMobileSynchronously:(unsigned long long)arg1;

- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;

- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;

- (unsigned long long)fetchWindow;

- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;

- (unsigned long long)growFetchWindow;

- (_Bool)hasCachedDataForMimePart:(id)arg1;

- (_Bool)hasMessageForAccount:(id)arg1;

- (_Bool)hasMoreFetchableMessages;

- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;

- (unsigned long long)indexOfMessage:(id)arg1;

- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;

- (void)invalidateFetchWindow;

- (_Bool)isDrafts;

- (_Bool)isOpened;

- (_Bool)isReadOnly;

- (id)lastViewedMessageDate;

- (id)lastViewedMessageWithOptions:(unsigned int)arg1;

- (id)loadMeetingDataForMessage:(id)arg1;

- (id)loadMeetingExternalIDForMessage:(id)arg1;

- (id)loadMeetingMetadataForMessage:(id)arg1;

- (id)mailboxUid;

- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;

- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;

- (id)messageForRemoteID:(id)arg1;

- (void)messagesWereAdded:(id)arg1;

- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;

- (void)messagesWereCompacted:(id)arg1;

- (void)messagesWereDeleted:(id)arg1;

- (void)messagesWillBeCompacted:(id)arg1;

- (id)mutableCopyOfAllMessages;

- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;

- (void)openAsynchronously;

- (void)openSynchronously;

- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;

- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;

- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id *)arg3;

- (unsigned long long)serverMessageCount;

- (unsigned long long)serverUnreadCount;

- (unsigned long long)serverUnreadOnlyOnServerCount;

- (void)setFlag:(id)arg1 state:(_Bool)arg2 forMessages:(id)arg3;

- (void)setFlagForAllMessages:(id)arg1 state:(_Bool)arg2;

- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;

- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;

- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;

- (void)setLibrary:(id)arg1;

- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;

- (_Bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;

- (_Bool)shouldArchive;

- (_Bool)shouldDeleteInPlace;

- (_Bool)shouldDownloadBodyDataForMessage:(id)arg1;

- (_Bool)shouldGrowFetchWindow;

- (_Bool)shouldSetSummaryForMessage:(id)arg1;

- (id)status;

- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;

- (id)storePathRelativeToAccount;

- (void)structureDidChange;

- (_Bool)supportsArchiving;

- (unsigned long long)totalCount;

- (void)undeleteMessages:(id)arg1;

- (id)uniqueRemoteIDsForMessages:(id)arg1;

- (unsigned long long)unreadCount;

- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;

- (void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2;

- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(_Bool)arg2;

- (void)updateUserInfoToLatestValues;

- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;

- (void)writeUpdatedMessageDataToDisk;



@end


