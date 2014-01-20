/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol UIPickerTableViewContainerDelegate

- (void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(_Bool)arg3;

- (void)_sendSelectionChangedFromTable:(id)arg1;

- (_Bool)_soundsEnabled;

- (_Bool)_usesCheckSelection;

- (void)setAllowsMultipleSelection:(_Bool)arg1;



@optional

- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;

- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;

@end

