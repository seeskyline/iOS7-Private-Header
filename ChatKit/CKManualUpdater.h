/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CKManualUpdater : NSObject

{

    _Bool _needsUpdate;

    id _target;

    SEL _action;

}



@property(nonatomic) SEL action; // @synthesize action=_action;

- (id)description;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@property(nonatomic) _Bool needsUpdate; // @synthesize needsUpdate=_needsUpdate;

- (void)setNeedsUpdate;

@property(nonatomic) id target; // @synthesize target=_target;

- (void)updateIfNeeded;



@end

