/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKFriendService.h"



@protocol GKFriendServicePrivate <GKFriendService>

- (oneway void)acceptFriendRequestsFromPlayerIDs:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;

- (oneway void)declineFriendRequestsFromPlayerIDs:(id)arg1 handler:(id)arg2;

- (oneway void)dismissFriendRecommendations:(id)arg1 handler:(id)arg2;

- (oneway void)getCommonFriendsForPlayerID:(id)arg1 handler:(id)arg2;

- (oneway void)getFriendRecommendationsWithHandler:(id)arg1;

- (oneway void)getFriendRequestsWithHandler:(id)arg1;

- (oneway void)markFriendRecommendations:(id)arg1 viewed:(_Bool)arg2 handler:(id)arg3;

- (oneway void)removeFriendWithPlayerID:(id)arg1 handler:(id)arg2;

- (oneway void)sendFriendRequestToPlayerIDs:(id)arg1 emailAddresses:(id)arg2 aliases:(id)arg3 twitterScreenNames:(id)arg4 facebookIDs:(id)arg5 message:(id)arg6 rid:(id)arg7 handler:(id)arg8;

@end


