/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKColorPalette.h"


@class NSArray;



@interface GKImageColorPalette : GKColorPalette

{

    unsigned int _hueSpread;

    unsigned int _saturationSpread;

    unsigned int _brightnessSpread;

    unsigned int _grayscaleSpread;

    struct HSVColor *_imageHSVMap;

    struct CGSize _imageSize;

    double _borderPercentageForBorderDetection;

    unsigned int _hueHistogram[360];

    unsigned int _saturationHistogram[256];

    unsigned int _brightnessHistogram[256];

    NSArray *_bubbleColors;

}



- (_Bool)analyzeImage:(struct CGImage *)arg1;

@property(retain) NSArray *bubbleColors; // @synthesize bubbleColors=_bubbleColors;

- (void)clearMainHistograms;

- (void)clearSaturationAndBrightnessHistograms;

- (void)findBrightColors;

- (void)generateHSVMapWithContext:(struct CGContext *)arg1;

- (id)initWithImage:(id)arg1;

- (void)iterateOverPixelsWithBlock:(id)arg1 forHue:(void)arg2;

- (void)printHistogram:(unsigned int *)arg1 ofSize:(unsigned int)arg2;

- (void)reset;

- (unsigned int)weightHistogram:(unsigned int *)arg1 size:(unsigned int)arg2 spread:(unsigned int)arg3;



@end


