/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



@class AVPlayer, AVPlayerLayer;



@interface PLAVPlayerView : UIView

{

    unsigned long long _scaleMode;

}



+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) AVPlayer *player;

@property(nonatomic) unsigned long long scaleMode; // @synthesize scaleMode=_scaleMode;

- (void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2;



// Remaining properties

@property(readonly, nonatomic) AVPlayerLayer *layer;



@end


