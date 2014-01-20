/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MPMediaPickerControllerDelegate.h"

#import "TKToneClassicsTableViewControllerDelegate.h"

#import "TKVibrationPickerViewControllerDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class MPMediaPickerController, MPMusicPlayerController, NSArray, NSIndexPath, NSMutableArray, NSString, TKVibrationPickerViewController, TLToneManager, UIImage, UITableView, UIView;



@interface TKToneTableController : NSObject <TKVibrationPickerViewControllerDelegate, TKToneClassicsTableViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, MPMediaPickerControllerDelegate>

{

    id _delegate;

    NSMutableArray *_ringtoneGroupLists;

    NSMutableArray *_ringtoneGroupNames;

    NSIndexPath *_selectedRingtoneIndexPath;

    _Bool _showsNone;

    _Bool _showsDefault;

    NSString *_noneString;

    NSString *_noneIdentifier;

    NSString *_classicTextTonesIdentifier;

    NSString *_classicRingtonesIdentifier;

    NSString *_defaultIdentifier;

    _Bool _showsNothingSelected;

    _Bool _showsRingtonesStore;

    _Bool _noneAtTop;

    UITableView *_tableView;

    _Bool _showsVibrations;

    _Bool _showsDefaultVibration;

    _Bool _showsUserGeneratedVibrations;

    _Bool _showsNoneVibration;

    _Bool _showsNoVibrationSelected;

    _Bool _allowsDeletingCurrentSystemVibration;

    NSString *_selectedVibrationIdentifier;

    TKVibrationPickerViewController *_vibrationPickerViewController;

    _Bool _showsMedia;

    _Bool _showMediaAtTop;

    MPMediaPickerController *_mediaPickerController;

    NSMutableArray *_mediaItems;

    MPMusicPlayerController *_musicPlayer;

    TLToneManager *_ringtoneManager;

    id _avController;

    _Bool _startedInteruption;

    _Bool _customAVController;

    _Bool _tonePicker;

    unsigned long long _filter;

    unsigned long long _systemRingtoneStartIndex;

    Class _customTableViewCellClass;

    int _context;

    _Bool _showsStoreButtonInNavigationBar;

    UIImage *checkmarkImage;

    NSArray *classicTextToneIdentifiers;

    NSArray *classicRingtoneIdentifiers;

    NSIndexPath *selectedClassicTextTonesIndexPath;

    NSIndexPath *selectedClassicRingtonesIndexPath;

    long long selectedClassicTextToneIndex;

    long long selectedClassicRingtoneIndex;

    NSString *_vibrationAccountIdentifier;

    id <TKTonePickerStyleProvider> _styleProvider;

    UIView *_defaultSectionHeaderView;

    UIView *_mediaSectionHeaderView;

    NSMutableArray *_regularToneSectionHeaderViews;

}



- (unsigned long long)_addMediaIdentifierToList:(id)arg1;

- (_Bool)_canShowStore;

- (void)_configureTextColorOfLabelInCell:(id)arg1 checked:(_Bool)arg2;

@property(retain, nonatomic, setter=_setDefaultSectionHeaderView:) UIView *_defaultSectionHeaderView; // @synthesize _defaultSectionHeaderView;

- (void)_getTitle:(id *)arg1 customHeaderView:(id *)arg2 forHeaderInSection:(long long)arg3;

- (void)_goToStore;

- (void)_handleItemPlaybackDidEndWithAVController:(id)arg1;

- (id)_loadTonesFromPlistDictionary:(id)arg1;

- (id)_mediaItemForIdentifier:(id)arg1;

@property(retain, nonatomic, setter=_setMediaSectionHeaderView:) UIView *_mediaSectionHeaderView; // @synthesize _mediaSectionHeaderView;

- (void)_refreshMediaItems;

- (void)_registerForItemPlaybackDidEndNotificationWithCurrentAVController;

@property(retain, nonatomic, setter=_setRegularToneSectionHeaderViews:) NSMutableArray *_regularToneSectionHeaderViews; // @synthesize _regularToneSectionHeaderViews;

- (void)_setRingtoneManager:(id)arg1;

@property(retain, nonatomic, setter=_setStyleProvider:) id <TKTonePickerStyleProvider> _styleProvider; // @synthesize _styleProvider;

- (_Bool)_showsVibrations;

- (void)_unregisterForItemPlaybackDidEndNotificationWithCurrentAVController;

- (void)addMediaItems:(id)arg1;

- (void)addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;

@property(nonatomic) _Bool allowsDeletingCurrentSystemVibration; // @synthesize allowsDeletingCurrentSystemVibration=_allowsDeletingCurrentSystemVibration;

- (id)avController;

@property(retain, nonatomic) UIImage *checkmarkImage; // @synthesize checkmarkImage;

@property(retain, nonatomic) NSArray *classicRingtoneIdentifiers; // @synthesize classicRingtoneIdentifiers;

@property(retain, nonatomic) NSArray *classicTextToneIdentifiers; // @synthesize classicTextToneIdentifiers;

- (long long)compareRingtoneWithIdentifier:(id)arg1 toRingtoneWithIdentifier:(id)arg2;

- (void)configureNavigationBarIfNeeded;

- (id)copyCurrentPhoneRingtoneIdentifier;

- (id)copyCurrentPhoneRingtoneName;

- (id)copyCurrentPhoneTextToneIdentifier;

- (id)copyCurrentPhoneTextToneName;

- (int)currentToneContext;

- (void)dealloc;

@property(retain, nonatomic, setter=setDefaultIdentifier:) id defaultIdentifier; // @synthesize defaultIdentifier=_defaultIdentifier;

- (void)finishedWithPicker;

- (id)identifierAtIndexPath:(id)arg1 isMediaItem:(_Bool *)arg2;

- (id)identifierOfRingtoneAtIndexPath:(id)arg1;

- (id)identifierOfSelectedClassicRingtone;

- (id)identifierOfSelectedClassicTextTone;

- (id)indexPathForDefaultGroup;

- (id)indexPathForFirstRingtoneGroup;

- (id)indexPathForMediaGroup;

- (id)indexPathForNone;

- (id)indexPathForRingtoneWithIdentifier:(id)arg1;

- (id)indexPathForRingtonesStoreGroup;

- (id)indexPathForSelectedRingtone;

- (id)indexPathForVibrationGroup;

- (id)init;

- (id)initWithAVController:(id)arg1;

- (id)initWithAVController:(id)arg1 filter:(unsigned long long)arg2 tonePicker:(_Bool)arg3;

- (_Bool)isDefaultGroupAtIndexPath:(id)arg1;

- (_Bool)isDividerAtIndexPath:(id)arg1;

- (_Bool)isMediaGroupAtIndexPath:(id)arg1;

- (_Bool)isNoneGroupAtIndexPath:(id)arg1;

- (_Bool)isRingtonesStoreGroupAtIndexPath:(id)arg1;

- (_Bool)isVibrationGroupAtIndexPath:(id)arg1;

- (id)loadRingtonesFromPlist;

- (id)loadTextTonesFromPlist;

- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;

- (void)mediaPickerDidCancel:(id)arg1;

- (id)musicPlayer;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)playMediaItemWithIdentifier:(id)arg1;

- (void)playRingtoneWithIdentifier:(id)arg1;

- (long long)preselectedIndexForToneClassicsTableView:(id)arg1;

- (void)processNewMediaItemSelected:(id)arg1;

- (void)processNewRingtoneSelected:(id)arg1;

- (void)reloadRingtones;

- (void)removeMediaItems:(id)arg1;

- (id)ringtoneManager;

@property(nonatomic) long long selectedClassicRingtoneIndex; // @synthesize selectedClassicRingtoneIndex;

@property(retain, nonatomic) NSIndexPath *selectedClassicRingtonesIndexPath; // @synthesize selectedClassicRingtonesIndexPath;

@property(nonatomic) long long selectedClassicTextToneIndex; // @synthesize selectedClassicTextToneIndex;

@property(retain, nonatomic) NSIndexPath *selectedClassicTextTonesIndexPath; // @synthesize selectedClassicTextTonesIndexPath;

- (id)selectedIdentifier:(_Bool *)arg1;

- (id)selectedRingtoneIdentifier;

@property(retain, nonatomic) NSString *selectedVibrationIdentifier; // @synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier;

- (void)setAVController:(id)arg1;

- (void)setContext:(int)arg1;

- (void)setCustomTableViewCellClass:(Class)arg1;

- (void)setDelegate:(id)arg1;

- (void)setMediaAtTop:(_Bool)arg1;

- (void)setNoneAtTop:(_Bool)arg1;

- (void)setNoneString:(id)arg1;

- (void)setSelectedMediaIdentifier:(id)arg1;

- (void)setSelectedRingtoneIdentifier:(id)arg1;

- (void)setShowsDefault:(_Bool)arg1;

@property(nonatomic) _Bool showsDefaultVibration; // @synthesize showsDefaultVibration=_showsDefaultVibration;

- (void)setShowsMedia:(_Bool)arg1;

@property(nonatomic) _Bool showsNoVibrationSelected; // @synthesize showsNoVibrationSelected=_showsNoVibrationSelected;

- (void)setShowsNone:(_Bool)arg1;

@property(nonatomic) _Bool showsNoneVibration; // @synthesize showsNoneVibration=_showsNoneVibration;

- (void)setShowsNothingSelected:(_Bool)arg1;

- (void)setShowsRingtonesStore:(_Bool)arg1;

- (void)setShowsStoreButtonInNavigationBar:(_Bool)arg1;

@property(nonatomic) _Bool showsUserGeneratedVibrations; // @synthesize showsUserGeneratedVibrations=_showsUserGeneratedVibrations;

@property(nonatomic) _Bool showsVibrations; // @synthesize showsVibrations=_showsVibrations;

@property(retain, nonatomic) id <TKTonePickerStyleProvider> styleProvider;

- (void)setTableView:(id)arg1;

@property(retain, nonatomic) NSString *vibrationAccountIdentifier; // @synthesize vibrationAccountIdentifier=_vibrationAccountIdentifier;

- (void)stopPlaying;

- (void)stopPlayingWithFadeOut:(_Bool)arg1;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)togglePlayMediaItemWithIdentifier:(id)arg1;

- (void)togglePlayWithRingtoneWithIdentifier:(id)arg1;

- (void)toneClassicsTableView:(id)arg1 willDimissWithNewSelectedIndexPath:(id)arg2;

- (id)toneIdentifiersForToneClassicsTableView:(id)arg1;

- (void)updateSelectedIdentifierForExternalChange;

- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;



@end

