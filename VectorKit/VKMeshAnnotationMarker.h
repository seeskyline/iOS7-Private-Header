/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKAnnotationMarker.h"


@class VGLMesh;



__attribute__((visibility("hidden")))

@interface VKMeshAnnotationMarker : VKAnnotationMarker

{

    VGLMesh *_mesh;

}



- (void)drawWithContext:(id)arg1;

- (void)drawWithContext:(id)arg1 usingBillboardAngle:(float)arg2;

@property(retain, nonatomic) VGLMesh *mesh; // @synthesize mesh=_mesh;



@end

