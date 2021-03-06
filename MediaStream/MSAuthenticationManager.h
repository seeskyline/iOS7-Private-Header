/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MSAlertManager;



@interface MSAuthenticationManager : NSObject

{

    int _state;

    MSAlertManager *_alertManager;

    int _bagRefetchCount;

    _Bool _isListeningToKeybagChanges;

    int _keybagChangeNotifyToken;

}



+ (id)sharedManager;

- (void).cxx_destruct;

- (id)_accountForPersonID:(id)arg1;

- (void)_didReceiveAccountConfigChangedNotification;

- (void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2;

- (void)dealloc;

- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;

- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;

- (id)initWithAlertManager:(id)arg1;

@property(nonatomic) _Bool isListeningToKeybagChanges; // @synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges;

@property(readonly, nonatomic, getter=isWaitingForAuth) _Bool waitingForAuth;

@property(nonatomic) int keybagChangeNotifyToken; // @synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken;

- (void)rearmAuthenticationAlert;



@end


