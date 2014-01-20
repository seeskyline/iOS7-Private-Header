/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CIFilter.h"


#import "_CIFilterProperties.h"



@class CIImage, CIVector;



__attribute__((visibility("hidden")))

@interface CICrop : CIFilter <_CIFilterProperties>

{

    CIImage *inputImage;

    CIVector *inputRectangle;

}



+ (id)customAttributes;

- (id)_initFromProperties:(id)arg1;

- (id)_outputProperties;

@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;

@property(retain, nonatomic) CIVector *inputRectangle; // @synthesize inputRectangle;

- (id)outputImage;

- (void)setDefaults;



@end

