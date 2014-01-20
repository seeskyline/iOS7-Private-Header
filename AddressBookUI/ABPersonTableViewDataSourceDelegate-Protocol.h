/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol ABPersonTableViewDataSourceDelegate <NSObject>

@property(nonatomic) id <ABPersonEditDelegate> editDelegate;

- (_Bool)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;

- (void)personTableViewDataSource:(id)arg1 addNonScrollableHeaderView:(id)arg2 animated:(_Bool)arg3;

- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(id)arg3 property:(int)arg4 identifier:(int)arg5;

- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;

- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;

- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;

- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;

- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;

- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;

- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;

- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;

- (void)personTableViewDataSource:(id)arg1 pushLinkedCardAtRow:(long long)arg2;

- (void)personTableViewDataSource:(id)arg1 removeNonScrollableHeaderViewAnimated:(_Bool)arg2;

- (void)personTableViewDataSource:(id)arg1 scrollViewDidScroll:(id)arg2;

- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;

- (void)personTableViewDataSource:(id)arg1 selectedCallActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;

- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(_Bool)arg2;

- (_Bool)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(_Bool)arg5;

- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(long long)arg2 inPropertyGroup:(id)arg3;

- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;

- (_Bool)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;

- (void)personTableViewDataSource:(id)arg1 willUpdateForEditing:(_Bool)arg2;

- (void)personTableViewDataSourceDidReloadData:(id)arg1;

- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;

- (void)personTableViewDataSourceHeaderHeightDidChange:(id)arg1;

- (double)personTableViewDataSourceHeaderPadding:(id)arg1;

- (_Bool)personTableViewDataSourceIsInPopover:(id)arg1;

- (_Bool)personTableViewDataSourceIsLocation:(id)arg1;

- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;

- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;

- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;

- (_Bool)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;

- (_Bool)personTableViewDataSourceShouldShowContactSources:(id)arg1;

- (_Bool)personTableViewDataSourceShouldShowHeader:(id)arg1;

- (_Bool)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;

- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;

- (void)presentLinkingPeoplePickerForPersonTableViewDataSource:(id)arg1;

- (_Bool)presentPeoplePickerNavigationControllerForRelatedNames:(id)arg1;

- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;

@end

