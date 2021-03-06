/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"



#import "FlickrPhotoSetTableDelegate.h"



@class FlickrPhotoSetManager, NSString;



@interface FlickrPhotoSetController : UITableViewController <FlickrPhotoSetTableDelegate>

{

    id <FlickrComposeOptionViewDelegate> _delegate;

    FlickrPhotoSetManager *_manager;

    long long _photoSetID;

    NSString *_photoSetTitle;

    long long _selectedIndexRow;

}



- (void)dealloc;

@property(nonatomic) id <FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithPhotoSetManager:(id)arg1;

@property(retain, nonatomic) FlickrPhotoSetManager *manager; // @synthesize manager=_manager;

@property(readonly, nonatomic) long long photoSetID; // @synthesize photoSetID=_photoSetID;

@property(readonly, nonatomic) NSString *photoSetTitle; // @synthesize photoSetTitle=_photoSetTitle;

- (void)reloadData;

@property(nonatomic) long long selectedIndexRow; // @synthesize selectedIndexRow=_selectedIndexRow;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;



@end


