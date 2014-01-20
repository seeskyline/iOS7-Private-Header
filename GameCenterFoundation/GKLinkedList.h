/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GKListNode;



@interface GKLinkedList : NSObject

{

    GKListNode *_headNode;

    GKListNode *_tailNode;

}



- (void)dealloc;

- (id)description;

- (_Bool)hasCycle;

@property(nonatomic) GKListNode *headNode; // @synthesize headNode=_headNode;

- (id)init;

- (void)insertNode:(id)arg1 before:(id)arg2;

- (void)insertNodeAtBeginning:(id)arg1;

- (id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2;

- (_Bool)isConsistent;

- (id)nodeForInsertionWithValue:(id)arg1;

- (void)removeAllNodes;

- (void)removeNode:(id)arg1;

@property(nonatomic) GKListNode *tailNode; // @synthesize tailNode=_tailNode;



@end

