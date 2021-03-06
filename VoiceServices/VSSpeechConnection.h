/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSXPCConnection, VSSpeechConnectionDelegateWrapper, VSSpeechRequest;



@interface VSSpeechConnection : NSObject

{

    NSXPCConnection *_connection;

    VSSpeechConnectionDelegateWrapper *_delegateWrapper;

    VSSpeechRequest *_request;

}



- (void).cxx_destruct;

- (id)_connection;

- (void)_connectionInvalidated;

- (id)_remoteObject;

- (id)_remoteObjectWithErrorHandler:(id)arg1;

- (void)_setRequest:(id)arg1;

- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;

- (id)availableVoicesForLanguageCode:(id)arg1;

- (void)continueCurrentSpeechRequest;

- (void)dealloc;

@property(nonatomic) __weak id <VSSpeechConnectionDelegate> delegate;

- (void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(void)arg3;

- (void)getAllVoiceAssets:(id)arg1;

- (void)getAutoDownloadedVoiceAssets:(id)arg1;

- (void)getLocalVoiceAssets:(id)arg1;

- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(id)arg5;

- (_Bool)isSystemSpeaking;

- (_Bool)isSystemSpeakingOnBehalfOfCurrentConnection;

- (void)pauseCurrentSpeechRequestAtMark:(long long)arg1;

@property(readonly, nonatomic) VSSpeechRequest *request; // @synthesize request=_request;

- (void)setAutoDownloadedVoiceAssets:(id)arg1;

- (void)startSpeechRequest:(id)arg1;

- (void)stopCurrentSpeechRequestAtMark:(long long)arg1;



@end


