/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVAsset, NSError, NSSet;



__attribute__((visibility("hidden")))

@interface TSDMovieCompatibilityChecker : NSObject

{

    AVAsset *mAsset;

    long long mCompatibilityLevel;

    NSError *mError;

    CDStruct_79c71658 mCustomMaxPlayableVideoDimensions;

    NSSet *mCustomPlayableVideoCodecTypes;

    int mCustomMaxPlayableVideoPixelsPerFrame;

}



- (void)cancel;

- (void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(id)arg2;

- (void)checkCustomCompatibilityWithVideoCodecTypes:(id)arg1 maxPlayableVideoDimensions:(struct CGSize)arg2 maxPlayableVideoPixelsPerFrame:(int)arg3 completionHandler:(id)arg4;

@property(readonly, nonatomic) long long compatibilityLevel; // @synthesize compatibilityLevel=mCompatibilityLevel;

- (void)dealloc;

@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;

- (id)init;

- (id)initWithAsset:(id)arg1;

- (_Bool)p_assetHasSupportedFileTypeOnAllDevices;

- (void)p_didFinishCheckingCompatibilityUpToLevel:(long long)arg1 actualLevel:(long long)arg2 didCancel:(_Bool)arg3 error:(id)arg4 completionHandler:(id)arg5;

- (_Bool)p_isAudioTrackPlayableOnAllDevices:(id)arg1;

- (_Bool)p_isH263VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;

- (_Bool)p_isH264VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;

- (_Bool)p_isLoadedAssetPlayableOnAllDevices;

- (_Bool)p_isMPEG4VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;

- (_Bool)p_isSorenson3VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription *)arg1;

- (_Bool)p_isVideoTrackPlayableOnAllDevices:(id)arg1;

- (id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(struct opaqueCMFormatDescription *)arg1 forAtomType:(id)arg2;



@end


