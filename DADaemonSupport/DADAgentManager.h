/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableArray, NSMutableDictionary;



@interface DADAgentManager : NSObject

{

    NSMutableArray *_activeAgents;

    NSMutableArray *_agentsAwaitingShutdown;

    int _disableMonitoringRequests;

    NSMutableDictionary *_watchedIDs;

    unsigned int _pmNotifier;

    struct IONotificationPort *_pmPort;

    struct __CFRunLoopSource *_pmRunLoopSource;

    id _startAgentsWhenSystemReadyBlock;

    int _pendingAccountSetupCount;

}



+ (id)sharedManager;

- (id)_accountInfoPath;

- (id)_agentWithAccountID:(id)arg1;

- (_Bool)_clearOrphanedSubscribedCalendars:(void *)arg1 eventAccountIds:(id)arg2 toDoAccountIds:(id)arg3;

- (id)_configFileForAgent:(id)arg1;

- (void)_deviceDidWake;

- (void)_deviceWillSleep;

- (_Bool)_hasDataclassWeCareAbout:(id)arg1;

- (void)_loadAndStartMonitoringAgents;

- (id)_phoneVersion;

- (_Bool)_removeSubscribedCalendarsForAccountWithID:(id)arg1 inStore:(void *)arg2;

- (void)_simulateNotificationOnWatchedFolders:(id)arg1;

- (void)_stopMonitoringAndSaveAgents;

- (_Bool)_systemMayNowBeReady;

- (id)accountWithAccountID:(id)arg1;

- (id)accountWithAccountID:(id)arg1 andClassName:(id)arg2;

@property(readonly) NSArray *activeAgents; // @synthesize activeAgents=_activeAgents;

- (void)addPendingAccountSetup;

- (void)agentHasStoppedMonitoring:(id)arg1;

- (void)cleanupLaunchdSemaphore;

- (void)clearOrphanedStores;

- (id)currentPolicyKeyForAccount:(id)arg1;

- (void)dealloc;

- (void)disableDaemon;

- (void)disableMonitoringAgents;

- (void)enableDaemon;

- (void)enableMonitoringAgents;

- (void)getStatusReportDictsWithCompletionBlock:(id)arg1;

- (void)handleURLString:(id)arg1;

- (_Bool)hasActiveAccounts;

- (_Bool)hasPendingAccountSetup;

- (id)init;

- (void)loadAgents;

- (int)numDisableMonitoringRequests;

- (_Bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2 completionBlock:(id)arg3;

- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5 callback:(id)arg6;

- (void)removePendingAccountSetup;

- (_Bool)removeStoresForAccountWithID:(id)arg1;

- (void)reportFolderItemsSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3;

- (void)requestPolicyUpdateForAccount:(id)arg1;

- (_Bool)resetCertWarningsForAccountWithId:(id)arg1 andDataclasses:(int)arg2;

- (_Bool)resumeMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;

- (void)saveAndReleaseAgents;

- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;

- (_Bool)startMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;

- (id)stateString;

- (_Bool)stopMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;

- (_Bool)suspendMonitoringAccountID:(id)arg1 folderIDs:(id)arg2;

- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(_Bool)arg3;

- (_Bool)updateContentsOfFolders:(id)arg1 forAccountID:(id)arg2 andDataclasses:(int)arg3 isUserRequested:(_Bool)arg4;

- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;

- (void)upgradeAccountsInSimulator;



@end

