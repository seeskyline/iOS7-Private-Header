/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MPMediaEntity, NSString;



@interface _MPMediaLibraryEntityChange : NSObject

{

    int _deletionType;

    MPMediaEntity *_entity;

    NSString *_anchor;

}



- (void).cxx_destruct;

@property(readonly, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;

@property(readonly, nonatomic) int deletionType; // @synthesize deletionType=_deletionType;

@property(readonly, nonatomic) MPMediaEntity *entity; // @synthesize entity=_entity;

- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3;



@end


