/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DCALayer.h"


@class TSCH3DFBOResource;



__attribute__((visibility("hidden")))

@interface TSCH3DInteractiveCanvasCALayer : TSCH3DCALayer

{

    TSCH3DFBOResource *mLayerFBOResource;

}



- (void)dealloc;

- (Class)layerDelegateClass;

- (id)layerFBOResource;

- (void)presentLayerWithPresenterInfo:(const struct PresenterInfo *)arg1;

- (void)willDestroyFramebuffer:(id)arg1 session:(id)arg2;



@end

