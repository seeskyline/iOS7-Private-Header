/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUScriptObject.h"


@class ISSoftwareApplication, NSNumber, NSString;



@interface SUScriptSoftwareApplication : SUScriptObject

{

    ISSoftwareApplication *_application;

}



+ (void)initialize;

+ (id)webScriptNameForKeyName:(id)arg1;

+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;

@property(readonly) NSNumber *adamID;

- (id)attributeKeys;

@property(readonly) NSString *bundleID;

@property(readonly) NSString *bundleShortVersionString;

@property(readonly) NSString *bundleVersion;

- (void)checkInAppPurchaseQueueWithAccountID:(id)arg1 environment:(id)arg2;

- (void)dealloc;

@property(readonly) NSNumber *dsID;

@property(readonly) NSString *environmentProduction;

@property(readonly) NSString *environmentSandbox;

- (id)initWithApplication:(id)arg1;

@property(readonly) long long launchResultApplicationDisabled;

@property(readonly) long long launchResultApplicationNotFound;

@property(readonly) long long launchResultInvalidArgument;

@property(readonly) long long launchResultLaunchOrSuspendInProgress;

@property(readonly) long long launchResultLocked;

@property(readonly) long long launchResultLockedOut;

@property(readonly) long long launchResultSecurityPolicy;

@property(readonly) long long launchResultSpringBoardUnavailable;

@property(readonly) long long launchResultSuccess;

@property(readonly) long long launchResultSyncing;

- (long long)launchWithURL:(id)arg1 options:(id)arg2 suspended:(id)arg3;

@property(readonly) NSNumber *ratingRank;

@property(readonly) NSString *ratingSystem;

- (id)scriptAttributeKeys;

@property(readonly) NSString *softwareType;

@property(readonly) NSString *softwareTypeNewsstand;

@property(readonly) NSString *storeFrontID;

@property(readonly) NSNumber *versionID;



@end

