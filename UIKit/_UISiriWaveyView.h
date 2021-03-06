/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


@class CADisplayLink, EAGLContext;



@interface _UISiriWaveyView : UIView

{

    struct {

        CDStruct_23957544 m_axisX;

        CDStruct_23957544 m_axisY;

        CDStruct_23957544 m_axisZ;

        CDStruct_23957544 m_trans;

    } _projection;

    CADisplayLink *_displayLink;

    EAGLContext *_eaglContext;

    unsigned int _framebufferHandle;

    unsigned int _renderbufferHandle;

    unsigned int _vertexBufferHandle;

    unsigned int _textureHandle;

    unsigned int _programHandle;

    int _attribPosition;

    int _uniformProjection;

    int _uniformOpacity;

    int _uniformLineWidth;

    int _uniformPowerLevel;

    int _uniformDisplayWidth;

    int _uniformTimeOffset;

    int _uniformTexture;

    int _viewWidth;

    int _viewHeight;

    float _projection11;

    double _startTime;

    float _runningPowerLevels[5];

    unsigned int _powerPointer;

    _Bool _isInitialized;

    _Bool _justStarted;

    int _state;

    int _mode;

    id <_UISiriWaveyViewDelegate> _delegate;

}



+ (Class)layerClass;

- (void)_cleanupGL;

- (float)_currentMicPowerLevel;

- (_Bool)_initGL;

- (float)_powerLevelForMicPower:(float)arg1;

- (_Bool)_resizeFromLayer:(id)arg1;

- (void)_setupDisplayLink;

- (_Bool)_setupFramebuffer;

- (_Bool)_setupShaders;

- (_Bool)_setupTexture;

- (_Bool)_setupVertexBuffer;

- (void)_tearDownDisplayLink;

- (void)_updateCurveLayer:(id)arg1;

- (float)_updateMedianWithNewValue:(float)arg1;

- (void)_updateOrthoProjection;

- (void)dealloc;

@property(nonatomic) id <_UISiriWaveyViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void)didMoveToSuperview;

- (_Bool)inDictationMode;

- (_Bool)inSiriMode;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)layoutSubviews;

@property(nonatomic) int mode; // @synthesize mode=_mode;

- (void)setHidden:(_Bool)arg1;

- (void)start;

- (void)startListening;



@end


