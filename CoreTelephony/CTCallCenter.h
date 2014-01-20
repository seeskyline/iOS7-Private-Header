/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSSet;



@interface CTCallCenter : NSObject

{

    void *_server;

    NSSet *_currentCalls;

    id _callEventHandler;

}



- (void)broadcastCallStateChangesIfNeededWithFailureLogMessage:(id)arg1;

- (_Bool)calculateCallStateChanges:(id)arg1;

@property(copy, nonatomic) id callEventHandler;

- (void)cleanUpServerConnection;

@property(retain) NSSet *currentCalls; // @dynamic currentCalls;

- (void)dealloc;

- (id)description;

- (_Bool)getCurrentCallSetFromServer:(id)arg1;

- (void)handleNotificationFromConnection:(void *)arg1 ofType:(id)arg2 withInfo:(id)arg3;

- (id)init;

- (_Bool)setUpServerConnection;



@end

