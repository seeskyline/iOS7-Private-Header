/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



@interface MSAlertManager : NSObject

{

    NSMutableDictionary *_personIDToNotification;

}



+ (id)sharedAlertManager;

- (void).cxx_destruct;

- (void)_dismissNotificationForPersonID:(id)arg1;

- (void)_showNotificationInfo:(id)arg1;

- (void)_userDidRespondToNotification:(struct __CFUserNotification *)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3;

- (void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(id)arg3;

- (id)init;



@end


