/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKAction.h"


__attribute__((visibility("hidden")))

@interface SKRepeat : SKAction

{

    struct SKCRepeat *_mycaction;

    SKAction *_repeatedAction;

}



+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;

+ (id)repeatActionForever:(id)arg1;

- (void).cxx_destruct;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)reversedAction;



@end


