/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OADBlipEffect.h"


@class OADColor;



__attribute__((visibility("hidden")))

@interface OADDuotoneEffect : OADBlipEffect

{

    OADColor *mColor1;

    OADColor *mColor2;

    int mTransferMode1;

    int mTransferMode2;

}



- (id)color1;

- (id)color2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (void)setColor1:(id)arg1;

- (void)setColor2:(id)arg1;

- (void)setStyleColor:(id)arg1;

- (void)setTransferMode1:(int)arg1;

- (void)setTransferMode2:(int)arg1;

- (int)transferMode1;

- (int)transferMode2;



@end


