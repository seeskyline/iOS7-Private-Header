/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UINavigationController.h"



#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSArray, NSString, UILocalizedIndexedCollation, UITableViewController;



@interface ABCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>

{

    NSString *_selectedCountryCode;

    UITableViewController *_tableViewController;

    UILocalizedIndexedCollation *_collation;

    NSArray *_countries;

    NSArray *_sections;

}



- (void)_configureSections;

- (void)_loadCountryCodes;

- (void)cancelPicker:(id)arg1;

@property(retain, nonatomic) UILocalizedIndexedCollation *collation; // @synthesize collation=_collation;

@property(copy, nonatomic) NSArray *countries; // @synthesize countries=_countries;

- (void)dealloc;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (id)sectionIndexTitlesForTableView:(id)arg1;

@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;

@property(copy, nonatomic) NSString *selectedCountryCode; // @synthesize selectedCountryCode=_selectedCountryCode;

@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;



// Remaining properties

@property(nonatomic) id <ABCountryPickerControllerDelegate> delegate;



@end


