/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol SLWeiboRemoteSessionProtocol <NSObject>

- (void)checkIn:(id)arg1;

- (void)ensureUserRecordStore;

- (void)fetchCurrentImageLimits:(id)arg1;

- (void)fetchCurrentUrlLimits:(id)arg1;

- (void)fetchGeotagStatus:(id)arg1;

- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;

- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;

- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;

- (void)fetchSessionInfo:(id)arg1;

- (void)getPermaLinkFromLastStatusUpdate:(id)arg1;

- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;

- (void)sendStatus:(id)arg1 completion:(id)arg2;

- (void)setActiveAccountIdentifier:(id)arg1;

- (void)setGeotagAccountSetting:(id)arg1 withCompletion:(id)arg2;

- (void)setGeotagStatus:(id)arg1;

- (void)setOverrideGeotagInfo:(id)arg1;

- (void)showWeiboSettingsIfNeeded:(id)arg1;

@end

