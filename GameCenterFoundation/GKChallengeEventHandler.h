/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKChallengeInternal;



@interface GKChallengeEventHandler : NSObject

{

    id <GKChallengeEventHandlerDelegate> _delegateWeak;

    GKChallengeInternal *_pendingReceivedChallenge;

    GKChallengeInternal *_pendingCompletedChallenge;

    id <GKChallengeEventHandlerUIDelegate> _uiDelegate;

}



+ (id)challengeEventHandler;

- (void)challengeCompleted:(id)arg1;

- (void)challengeReceived:(id)arg1;

- (void)completedChallengeSelected:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <GKChallengeEventHandlerDelegate> delegate; // @synthesize delegate=_delegateWeak;

@property(retain, nonatomic) GKChallengeInternal *pendingCompletedChallenge; // @synthesize pendingCompletedChallenge=_pendingCompletedChallenge;

@property(retain, nonatomic) GKChallengeInternal *pendingReceivedChallenge; // @synthesize pendingReceivedChallenge=_pendingReceivedChallenge;

- (void)receivedChallengeSelected:(id)arg1;

@property(retain, nonatomic) id <GKChallengeEventHandlerUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;

- (void)showBannerForChallenge:(id)arg1 complete:(id)arg2;



@end


