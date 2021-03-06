/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "VSSpeechConnectionDelegate.h"



@class NSObject<OS_dispatch_queue>, NSString, VSKeepAlive, VSSpeechConnection;



@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>

{

    VSKeepAlive *_keepAlive;

    VSKeepAlive *_inactiveKeepAlive;

    long long _footprint;

    _Bool _useCustomVoice;

    long long _gender;

    _Bool _useSharedSession;

    _Bool _audioSessionIDIsValid;

    unsigned int _audioSessionID;

    unsigned int _audioQueueFlags;

    NSObject<OS_dispatch_queue> *_queue;

    VSSpeechConnection *_speechConnection;

    struct {

        unsigned int delegateStart:1;

        unsigned int delegateFinish:1;

        unsigned int delegateFinishWithPhonemesSpoken:1;

        unsigned int delegatePause:1;

        unsigned int delegateContinue:1;

        unsigned int delegateWillSpeak:1;

        unsigned int delegateStartWithRequest:1;

        unsigned int delegateFinishWithRequest:1;

        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;

        unsigned int delegatePauseWithRequest:1;

        unsigned int delegateContinueWithRequest:1;

        unsigned int delegateWillSpeakWithRequest:1;

        unsigned int willUseInput:1;

    } _synthesizerFlags;

    float _rate;

    float _pitch;

    float _volume;

    id <VSSpeechSynthesizerDelegate> _delegate;

    NSString *_voice;

}



+ (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;

+ (id)availableLanguageCodes;

+ (id)availableVoices;

+ (id)availableVoicesForLanguageCode:(id)arg1;

+ (void)downloadVoiceAsset:(id)arg1 progress:(id)arg2 completion:(void)arg3;

+ (void)getAllVoiceAssets:(id)arg1;

+ (void)getAutoDownloadedVoiceAssets:(id)arg1;

+ (void)getLocalVoiceAssets:(id)arg1;

+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(_Bool)arg4 reply:(id)arg5;

+ (_Bool)isSystemSpeaking;

+ (void)setAutoDownloadedVoiceAssets:(id)arg1;

- (void).cxx_destruct;

- (_Bool)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;

- (_Bool)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;

- (void)_setDelegate:(id)arg1;

- (_Bool)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;

- (_Bool)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;

- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(_Bool)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;

- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;

- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;

- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;

- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;

- (_Bool)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;

- (_Bool)continueSpeakingWithError:(id *)arg1;

- (void)dealloc;

@property(nonatomic) __weak id <VSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;

- (long long)footprint;

- (long long)gender;

- (id)init;

- (id)initForInputFeedback;

- (_Bool)isSpeaking;

- (float)maximumRate;

- (float)minimumRate;

- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;

- (_Bool)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;

- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;

- (_Bool)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;

@property(nonatomic) float pitch; // @synthesize pitch=_pitch;

@property(nonatomic) float rate; // @synthesize rate=_rate;

- (void)setFootprint:(long long)arg1;

- (void)setGender:(long long)arg1;

- (void)setMaintainInactivePersistentConnection:(_Bool)arg1;

- (void)setMaintainPersistentConnection:(_Bool)arg1;

- (void)setUseCustomVoice:(_Bool)arg1;

@property(retain, nonatomic) NSString *voice; // @synthesize voice=_voice;

@property(nonatomic) float volume; // @synthesize volume=_volume;

- (id)speechString;

- (_Bool)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;

- (_Bool)startSpeakingString:(id)arg1 error:(id *)arg2;

- (_Bool)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;

- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;

- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id *)arg3 error:(id *)arg4;

- (_Bool)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;

- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;

- (_Bool)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;

- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;

- (_Bool)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(_Bool)arg2 error:(id *)arg3;

- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;

- (_Bool)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(_Bool)arg3 error:(id *)arg4;

- (void)useAudioQueueFlags:(unsigned int)arg1;

- (_Bool)useCustomVoice;

- (void)useSharedAudioSession:(_Bool)arg1;

- (void)useSpecificAudioSession:(unsigned int)arg1;



@end


