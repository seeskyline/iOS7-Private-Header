/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVMediaSelectionOption.h"


@class AVAssetTrack, AVWeakReference, NSDictionary;



@interface AVMediaSelectionTrackOption : AVMediaSelectionOption

{

    id _groupID;

    AVAssetTrack *_track;

    NSDictionary *_dictionary;

    AVWeakReference *_weakReferenceToGroup;

    _Bool _displaysNonForcedSubtitles;

}



- (id)_groupID;

- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;

- (id)availableMetadataFormats;

- (id)commonMetadata;

- (void)dealloc;

- (id)dictionary;

- (_Bool)displaysNonForcedSubtitles;

- (id)group;

- (_Bool)hasMediaCharacteristic:(id)arg1;

- (unsigned long long)hash;

- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isPlayable;

- (id)locale;

- (id)mediaSubTypes;

- (id)mediaType;

- (id)metadataForFormat:(id)arg1;

- (id)track;

- (int)trackID;



@end

