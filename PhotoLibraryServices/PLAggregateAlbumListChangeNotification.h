/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PLAssetContainerListChangeNotification.h"


@class PLAggregateAlbumList;



@interface PLAggregateAlbumListChangeNotification : PLAssetContainerListChangeNotification

{

    PLAggregateAlbumList *_albumList;

    PLAssetContainerListChangeNotification *_note;

    unsigned long long _indexOffet;

}



+ (id)notificationForAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;

- (_Bool)_getOldSet:(id *)arg1 newSet:(id *)arg2;

- (struct NSObject *)albumList;

- (id)changedIndexes;

- (id)changedIndexesRelativeToSnapshot;

- (id)changedObjects;

- (void)dealloc;

- (id)deletedIndexes;

- (id)deletedObjects;

- (void)enumerateMovesWithBlock:(id)arg1;

- (id)initWithAggregateAlbumList:(id)arg1 fromAlbumListChangeNotification:(id)arg2 indexOffset:(unsigned long long)arg3;

- (id)insertedIndexes;

- (id)insertedObjects;

- (id)object;

- (_Bool)shouldReload;

- (unsigned long long)snapshotIndexForContainedObject:(id)arg1;



@end

