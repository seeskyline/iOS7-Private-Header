/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class TSUNoCopyDictionary;



__attribute__((visibility("hidden")))

@interface TSKCommandSelectionBehaviorHistory : TSPObject

{

    TSUNoCopyDictionary *mCommandSelectionBehaviorsForCommands;

}



- (void)clear;

- (id)commandSelectionBehaviorForCommand:(id)arg1;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (void)loadFromArchive:(const struct CommandSelectionBehaviorHistoryArchive *)arg1 unarchiver:(id)arg2;

- (id)packageLocator;

- (void)saveToArchive:(struct CommandSelectionBehaviorHistoryArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (void)setCommandSelectionBehavior:(id)arg1 forCommand:(id)arg2;



@end

