/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSSet, NSString;



@interface AXSettings : NSObject

{

    NSObject<OS_dispatch_queue> *_axFeatureQueue;

    NSMutableSet *_registeredNotifications;

    NSMutableDictionary *_synchronizeDomains;

    NSMutableDictionary *_updateBlocks;

}



+ (void)initialize;

+ (id)sharedInstance;

- (int)_domainForPreferenceKey:(id)arg1;

- (struct __CFString *)_domainNameForDomain:(int)arg1;

- (id)_featureIDForTripleClickOption:(int)arg1;

- (void)_handlePreferenceChanged:(id)arg1;

- (id)_migratePreferenceIfNecessary:(id)arg1;

- (id)_notificationForPreferenceKey:(id)arg1;

- (id)_preferenceKeyForSelector:(SEL)arg1;

- (void)_registerForNotification:(id)arg1;

- (void)_setAXFeature:(id)arg1 enabled:(_Bool)arg2;

- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;

- (_Bool)_switchFromRootUserIfNecessary:(id)arg1;

- (void)_synchronizeIfNecessary:(id)arg1 domain:(int)arg2;

- (id)_tripleClickOptionForAXFeatureID:(id)arg1;

- (id)_valueForPreferenceKey:(id)arg1;

- (id)accessibilityFeatureIDs;

- (id)accessibilityFeatureIDsForTripleClickOptions:(id)arg1;

- (id)accessibilityFeatureStatus;

- (id)accessibilityTripleClickOptions;

@property(nonatomic) _Bool allowHearingAidControlOnLockScreen;

@property(nonatomic) _Bool assistiveTouchActionRepeatEnabled;

@property(nonatomic) double assistiveTouchActionRepeatInterval;

@property(nonatomic) _Bool assistiveTouchAlwaysShowMenuEnabled;

@property(nonatomic) _Bool assistiveTouchAutoScanningEnabled;

@property(nonatomic) double assistiveTouchAxisSweepSpeed;

@property(nonatomic) _Bool assistiveTouchCameraSwitchPreviewEnabled;

@property(nonatomic) long long assistiveTouchCursorColor;

@property(retain, nonatomic) NSArray *assistiveTouchCustomGestures;

@property(nonatomic) double assistiveTouchDelayAfterInput;

@property(nonatomic) _Bool assistiveTouchDelayAfterInputEnabled;

@property(nonatomic) _Bool assistiveTouchGroupElementsEnabled;

@property(nonatomic) long long assistiveTouchHeadMovementSensitivity;

@property(nonatomic) _Bool assistiveTouchHeadlessModeEnabled;

@property(nonatomic) double assistiveTouchInputCoalescingDuration;

@property(nonatomic) _Bool assistiveTouchInputCoalescingEnabled;

@property(nonatomic) double assistiveTouchInputHoldDuration;

@property(nonatomic) _Bool assistiveTouchInputHoldEnabled;

@property(nonatomic) _Bool assistiveTouchOpenMenuSwaggleEnabled;

@property(nonatomic) long long assistiveTouchPreferredPointPicker;

@property(retain, nonatomic) NSArray *assistiveTouchRecentGestures;

@property(retain, nonatomic) NSArray *assistiveTouchSavedGestures;

@property(nonatomic) long long assistiveTouchScanCycles;

@property(nonatomic) double assistiveTouchScanTimeout;

@property(nonatomic) _Bool assistiveTouchScanTimeoutEnabled;

@property(nonatomic) _Bool assistiveTouchScannerAddedTripleClickAutomatically;

@property(nonatomic) _Bool assistiveTouchScannerCompactMenuEnabled;

@property(nonatomic) _Bool assistiveTouchScannerCursorHighVisibilityEnabled;

@property(readonly, nonatomic) long long assistiveTouchScannerIncludedMenuItems;

@property(nonatomic) _Bool assistiveTouchScannerMenuIncludeDeviceItem;

@property(nonatomic) _Bool assistiveTouchScannerMenuIncludeGesturesItem;

@property(nonatomic) _Bool assistiveTouchScannerMenuIncludeHomeItem;

@property(nonatomic) _Bool assistiveTouchScannerMenuIncludeScrollItem;

@property(nonatomic) _Bool assistiveTouchScannerMenuIncludeSettingsItem;

@property(nonatomic) _Bool assistiveTouchScannerMenuLabelsEnabled;

@property(nonatomic) _Bool assistiveTouchScannerPointPickerDefaultsToRescan;

@property(nonatomic) _Bool assistiveTouchScannerSoundEnabled;

@property(nonatomic) _Bool assistiveTouchScannerSpeechEnabled;

@property(nonatomic) _Bool assistiveTouchScannerSpeechIsInterruptedByScanning;

@property(nonatomic) double assistiveTouchScannerSpeechRate;

@property(nonatomic) long long assistiveTouchScanningMode;

@property(nonatomic) double assistiveTouchSelectTimeout;

@property(nonatomic) _Bool assistiveTouchSelectTimeoutEnabled;

@property(nonatomic) double assistiveTouchSpeed;

@property(nonatomic) double assistiveTouchStepInterval;

@property(nonatomic) _Bool assistiveTouchSwitchUsageConfirmed;

@property(retain, nonatomic) NSSet *assistiveTouchSwitches;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *axFeatureQueue; // @synthesize axFeatureQueue=_axFeatureQueue;

- (void)dealloc;

- (void)disableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2;

- (void)disableAccessibilityTripleClickOptionsForFeatures:(id)arg1;

- (void)enableAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2;

- (void)enableAccessibilityTripleClickOptionsForFeatures:(id)arg1;

@property(nonatomic) _Bool enableHearingAidReporter;

- (void)enableOnlyAccessibilityFeatures:(id)arg1 staggerTime:(double)arg2;

@property(copy, nonatomic) NSString *gaxInternalSettingsActiveAppID;

@property(copy, nonatomic) NSNumber *gaxInternalSettingsActiveAppOrientation;

@property(copy, nonatomic) NSString *gaxInternalSettingsDeviceID;

@property(nonatomic) _Bool gaxInternalSettingsIsActiveAppSelfLocked;

@property(retain, nonatomic) NSDate *gaxInternalSettingsLastActivationDate;

@property(retain, nonatomic) NSDate *gaxInternalSettingsLastPasscodeSetDate;

@property(copy, nonatomic) NSString *gaxInternalSettingsProductBuildVersion;

@property(retain, nonatomic) NSDictionary *gaxInternalSettingsSavedAccessibilityFeatures;

@property(retain, nonatomic) NSArray *gaxInternalSettingsSavedAccessibilityTripleClickOptions;

@property(nonatomic) _Bool gaxInternalSettingsSystemDidRestartDueToLowBattery;

@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserAppProfile;

@property(retain, nonatomic) NSArray *gaxInternalSettingsUserConfiguredAppIDs;

@property(retain, nonatomic) NSDictionary *gaxInternalSettingsUserGlobalProfile;

@property(nonatomic) _Bool guidedAccessAXFeaturesEnabled;

@property(nonatomic) long long guidedAccessUsageCount;

@property(nonatomic) _Bool ignoreAXAssertions;

@property(nonatomic) _Bool ignoreAXServerEntitlements;

@property(nonatomic) _Bool includeBacktraceInLogs;

- (id)init;

@property(nonatomic) long long internalLoggingColorTheme;

@property(nonatomic) _Bool logAXNotificationPosting;

@property(nonatomic) _Bool quickSpeakHighlightText;

@property(nonatomic) float quickSpeakSpeakingRate;

- (float)quickSpeakSpeakingRateForLanguage:(id)arg1;

@property(nonatomic) float quickSpeakVolume;

- (void)registerUpdateBlock:(id)arg1 forRetrieveSelector:(void)arg2 withListener:(SEL)arg3;

@property(retain, nonatomic) NSMutableSet *registeredNotifications; // @synthesize registeredNotifications=_registeredNotifications;

- (void)setQuickSpeakSpeakingRate:(float)arg1 forLanguage:(id)arg2;

@property(nonatomic) _Bool shouldStreamToLeftAid;

@property(nonatomic) _Bool shouldStreamToRightAid;

@property(nonatomic) _Bool skipHearingAidMFiAuth;

@property(nonatomic) _Bool speakCorrectionsEnabled;

@property(retain, nonatomic) NSMutableDictionary *synchronizeDomains; // @synthesize synchronizeDomains=_synchronizeDomains;

@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;

@property(nonatomic) _Bool validateSecondPartyApps;

@property(nonatomic) long long voiceOverActivationWorkaround;

@property(nonatomic) _Bool voiceOverAlwaysUseNemethCodeForMathEnabled;

@property(nonatomic) _Bool voiceOverBrailleGradeTwoAutoTranslateEnabled;

@property(copy, nonatomic) NSString *voiceOverBrailleTableIdentifier;

@property(nonatomic) _Bool voiceOverCompactVoiceEnabled;

@property(copy, nonatomic) NSString *voiceOverDefaultDialect;

@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeAutocorrectEnabled;

@property(retain, nonatomic) NSNumber *voiceOverHandwritingWasNativeSpellCheckingEnabled;

@property(nonatomic) long long voiceOverHardwareTypingFeedback;

@property(nonatomic) _Bool voiceOverHearingAidRoutingEnabled;

@property(nonatomic) long long voiceOverHelpMode;

@property(nonatomic) _Bool voiceOverHintsEnabled;

@property(nonatomic) _Bool voiceOverLargeCursorEnabled;

@property(nonatomic) long long voiceOverNavigateImagesOption;

@property(nonatomic) long long voiceOverPhoneticsFeedback;

@property(nonatomic) _Bool voiceOverPitchChangeEnabled;

@property(copy, nonatomic) NSArray *voiceOverRotorItems;

@property(nonatomic) _Bool voiceOverShouldOutputToHearingAid;

@property(nonatomic) _Bool voiceOverShowSoftwareKeyboardWithBraille;

@property(nonatomic) long long voiceOverSoftwareTypingFeedback;

@property(nonatomic) _Bool voiceOverSoundEffectsEnabled;

@property(nonatomic) _Bool voiceOverSpeakNotificationsInLockScreenEnabled;

- (void)setVoiceOverSpeakingRate:(float)arg1 forLanguage:(id)arg2;

@property(nonatomic) _Bool voiceOverSpeakingRateInRotorEnabled;

@property(nonatomic) _Bool writeAXLogsToFile;

@property(readonly, nonatomic) _Bool voiceOverHandwritingEnabled;

- (float)voiceOverSpeakingRateForLanguage:(id)arg1;



@end


