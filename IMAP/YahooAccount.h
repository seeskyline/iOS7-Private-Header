/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IMAPAccount.h"


@class NSMutableDictionary, NSRecursiveLock, NSString;



@interface YahooAccount : IMAPAccount

{

    NSRecursiveLock *_cookieLock;

    double _timeLastEncounteredAuthenticationError;

    NSString *_temporaryPassword;

    NSString *_signature;

    NSMutableDictionary *_incorrectPasswordAttemptDates;

}



+ (id)_credentialKeysForCookieNames;

+ (id)accountTypeIdentifier;

+ (id)allCookieNames;

+ (id)credentialKeyForCookieName:(id)arg1;

+ (id)deliveryAccountHostname;

+ (unsigned int)deliveryAccountPortNumber;

+ (_Bool)deliveryAccountUsesSSL;

+ (id)displayedAccountTypeString;

+ (id)emailAddressHostPart;

+ (id)emailAddressWithUsername:(id)arg1;

+ (_Bool)getConfigurationFromServerForEmail:(id)arg1;

+ (id)hostname;

+ (_Bool)isPredefinedAccountType;

+ (_Bool)isSSLEditable;

+ (id)newAccountWithDictionary:(id)arg1;

+ (_Bool)primaryDeliveryAccountIsDynamic;

+ (_Bool)usernameIsEmailAddress;

+ (_Bool)usesSSL;

- (id)URLForMessage:(id)arg1;

- (id)XYMPKISignature;

- (int)_ParsePWTokenResponse:(id)arg1 error:(id *)arg2;

- (id)_defaultSpecialMailboxNameForType:(int)arg1;

- (id)_deliveryAccountCreateIfNeeded:(_Bool)arg1;

- (id)_fetchCookieForKey:(id)arg1 usingToken:(id)arg2 error:(id *)arg3;

- (id)_fetchSecurityToken:(id)arg1 error:(id *)arg2;

- (id)_securityToken;

- (id)_securityToken:(id *)arg1;

- (void)_setSecurityToken:(id)arg1;

- (_Bool)_shouldAttemptToFetchSecurityTokenWithPassword:(id)arg1;

- (id)_yahooParameterForKey:(id)arg1;

- (Class)connectionClass;

- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(int)arg3;

- (id)cookieForKey:(id)arg1;

- (id)cookieForKey:(id)arg1 error:(id *)arg2;

- (void)cookiesExpired;

- (unsigned long long)credentialAccessibility;

- (void)dealloc;

- (_Bool)derivesDeliveryAccountInfoFromMailAccount;

- (id)displayUsername;

- (id)emailAddresses;

- (_Bool)fetchTokensIfNecessary:(id *)arg1;

- (id)hostname;

- (id)iconString;

- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;

- (unsigned long long)minUID;

- (id)password;

- (unsigned int)portNumber;

- (id)preferredAuthScheme;

- (void)removeCookie:(id)arg1;

- (id)saveSentFolder;

- (void)setCookie:(id)arg1 forKey:(id)arg2;

- (void)setPassword:(id)arg1;

- (void)setXYMPKISignature:(id)arg1;

- (_Bool)shouldDisplayHostnameInErrorMessages;

- (id)statisticsKind;

- (id)transferDisabledMailboxUids;



@end


