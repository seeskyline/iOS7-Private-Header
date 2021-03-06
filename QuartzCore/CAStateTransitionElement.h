/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"



@class CAAnimation, CALayer, NSString;



@interface CAStateTransitionElement : NSObject <NSCopying, NSCoding>

{

    CALayer *_target;

    CAAnimation *_animation;

    NSString *_key;

    _Bool _enabled;

}



+ (void)CAMLParserStartElement:(id)arg1;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;

- (id)CAMLTypeForKey:(id)arg1;

@property(retain, nonatomic) CAAnimation *animation; // @synthesize animation=_animation;

@property(nonatomic) double beginTime;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)debugDescription;

@property(nonatomic) double duration;

- (void)encodeWithCAMLWriter:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)init;

- (id)initWithCoder:(id)arg1;

@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@property(nonatomic) CALayer *target; // @synthesize target=_target;



@end


