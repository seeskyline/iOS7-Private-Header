/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;



@interface AVCaptureVideoPreviewLayer : CALayer

{

    AVCaptureVideoPreviewLayerInternal *_internal;

}



+ (void)initialize;

+ (id)layerWithSession:(id)arg1;

- (void)_applyOverridesToCaptureOptions:(id)arg1;

- (_Bool)_automaticallyAdjustsMirroring;

- (id)_input;

- (_Bool)_isMirrored;

- (long long)_orientation;

- (void)_updateCaptureDeviceTransform;

- (id)activeConnections;

- (id)addConnection:(id)arg1 error:(id *)arg2;

@property(nonatomic) _Bool automaticallyAdjustsMirroring;

- (void)bumpChangeSeed;

- (_Bool)canAddConnectionForMediaType:(id)arg1;

- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;

- (void)centerSublayer;

- (int)changeSeed;

@property(readonly, nonatomic) AVCaptureConnection *connection;

- (id)connectionMediaTypes;

- (id)connections;

- (void)dealloc;

- (void)didStartForSession:(id)arg1;

- (void)didStopForSession:(id)arg1 error:(id)arg2;

- (void)handleEnabledChangedForConnection:(id)arg1;

- (void)handleNotification:(id)arg1 payload:(id)arg2;

- (id)init;

- (id)initWithLayer:(id)arg1;

- (id)initWithSession:(id)arg1;

- (_Bool)isChromaNoiseReductionEnabled;

- (_Bool)isChromaNoiseReductionSupported;

@property(nonatomic, getter=isMirrored) _Bool mirrored;

@property(readonly, nonatomic, getter=isMirroringSupported) _Bool mirroringSupported;

@property(readonly, nonatomic, getter=isOrientationSupported) _Bool orientationSupported;

- (_Bool)isPaused;

- (void)layerDidBecomeVisible:(_Bool)arg1;

- (void)layoutSublayers;

- (id)liveConnections;

- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;

- (id)notReadyError;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@property(nonatomic) long long orientation;

- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;

- (double)previewRotationDegrees;

- (struct CGRect)rectForCaptureDeviceFaceRect:(struct CGRect)arg1;

- (struct CGRect)rectForMetadataObject:(id)arg1;

- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;

- (void)removeConnection:(id)arg1;

@property(retain, nonatomic) AVCaptureSession *session;

- (void)setBounds:(struct CGRect)arg1;

- (void)setChromaNoiseReductionEnabled:(_Bool)arg1;

- (void)setHidden:(_Bool)arg1;

- (void)setPaused:(_Bool)arg1;

@property(copy) NSString *videoGravity;

- (id)subLayer;

- (id)transformedMetadataObjectForMetadataObject:(id)arg1;

- (void)updateInternalStateForCaptureOptions:(id)arg1;



@end

