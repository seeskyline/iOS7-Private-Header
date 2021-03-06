/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "PLAssetChangeObserver.h"

#import "PLAssetContainer.h"



@class NSArray, NSDate, NSIndexSet, NSMutableIndexSet, NSOrderedSet, NSString, PLManagedAsset, PLPhotoLibrary;



@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>

{

    NSString *_uuid;

    NSOrderedSet *_assets;

    PLPhotoLibrary *_photoLibrary;

    NSIndexSet *__originalAutoPickIndexes;

    NSMutableIndexSet *__autoPickIndexes;

    NSIndexSet *__originalUserFavoriteIndexes;

    NSMutableIndexSet *__userFavoriteIndexes;

    unsigned long long __originalStackIndex;

    unsigned long long __stackIndex;

    PLManagedAsset *__aNewPick;

    PLManagedAsset *__anOldPick;

    id __completionHandler;

}



+ (unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)arg1 autoPicks:(id)arg2 userFavorites:(id)arg3;

+ (void)_handleUpdatesForContextWillSave:(id)arg1;

+ (void)_updateMembershipForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 dissolveBurst:(_Bool)arg5;

+ (id)_updatePropertiesForAssets:(id)arg1 autoPicks:(id)arg2 stackAsset:(id)arg3 userFavorites:(id)arg4 dissolveBurst:(_Bool)arg5;

+ (id)assetsWithAvalancheUUID:(id)arg1 inManagedObjectContext:(id)arg2;

+ (id)avalancheStackForImage:(id)arg1 backgroundColor:(id)arg2;

+ (unsigned long long)countForAvalancheUUID:(id)arg1 inLibrary:(id)arg2;

+ (struct CGRect)frameOfTopImageInStackForStackFrame:(struct CGRect)arg1;

+ (id)partialAvalancheStackForImage:(id)arg1 backgroundColor:(id)arg2;

+ (void)removeFavoriteStatus:(id)arg1;

+ (_Bool)shouldHideAvalanchesFromPhotoStream;

+ (_Bool)shouldOnlyShowAvalanchePicks;

@property(retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick; // @synthesize _aNewPick=__aNewPick;

@property(retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick; // @synthesize _anOldPick=__anOldPick;

@property(retain, nonatomic) NSMutableIndexSet *_autoPickIndexes; // @synthesize _autoPickIndexes=__autoPickIndexes;

@property(copy, nonatomic, setter=_setCompletionHandler:) id _completionHandler; // @synthesize _completionHandler=__completionHandler;

@property(retain, nonatomic) NSIndexSet *_originalAutoPickIndexes; // @synthesize _originalAutoPickIndexes=__originalAutoPickIndexes;

@property(nonatomic) unsigned long long _originalStackIndex; // @synthesize _originalStackIndex=__originalStackIndex;

@property(retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes; // @synthesize _originalUserFavoriteIndexes=__originalUserFavoriteIndexes;

- (void)_recalculateStackAsset;

@property(nonatomic) unsigned long long _stackIndex; // @synthesize _stackIndex=__stackIndex;

@property(retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes; // @synthesize _userFavoriteIndexes=__userFavoriteIndexes;

- (void)addUserFavorite:(id)arg1;

- (void)applyChangesAndDissolveBurst:(_Bool)arg1 currentContainer:(id)arg2 completionHandler:(id)arg3;

@property(readonly, nonatomic) unsigned long long approximateCount;

@property(retain, nonatomic) NSOrderedSet *assets; // @synthesize assets=_assets;

@property(readonly, nonatomic) unsigned long long assetsCount;

- (void)assetsDidChange:(id)arg1;

- (id)autoPicks;

- (_Bool)canPerformEditOperation:(int)arg1;

@property(readonly, nonatomic) _Bool canShowAvalancheStacks;

@property(readonly, nonatomic) _Bool canShowComments;

- (void)dealloc;

- (id)description;

- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2;

- (_Bool)isAutoPick:(id)arg1;

@property(readonly, nonatomic) _Bool isEmpty;

- (_Bool)isUserFavorite:(id)arg1;

@property(retain, nonatomic) PLManagedAsset *keyAsset;

@property(readonly, nonatomic) NSArray *localizedLocationNames;

@property(readonly, nonatomic) NSString *localizedTitle;

@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;

@property(readonly, nonatomic) unsigned long long photosCount;

- (id)proposedStackAssetAfterRemovingFavorite:(id)arg1;

- (void)removeUserFavorite:(id)arg1;

@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;

@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;

@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

- (id)stackAsset;

@property(readonly, nonatomic) NSString *title;

- (id)userFavorites;

@property(readonly, nonatomic) unsigned long long videosCount;



// Remaining properties

@property(readonly, nonatomic) NSDate *endDate;

@property(readonly, nonatomic) NSDate *startDate;



@end


