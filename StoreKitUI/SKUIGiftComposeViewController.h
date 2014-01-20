/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIGiftStepViewController.h"


#import "UIPopoverControllerDelegate.h"

#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"

#import "UITextFieldDelegate.h"



@class NSIndexPath, NSMutableArray, NSObject<OS_dispatch_source>, SKUIGiftAddressingSection, SKUIGiftAmountSection, SKUIGiftItemView, SKUIGiftSendDateSection, SKUIGiftTermsAndConditionsSection, SKUIGiftValidationResponse, SKUIGiftValidator, UIDatePicker, UIImage, UIPopoverController, UITableView, UIView;



@interface SKUIGiftComposeViewController : SKUIGiftStepViewController <UIPopoverControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>

{

    SKUIGiftAddressingSection *_addressingSection;

    SKUIGiftAmountSection *_amountSection;

    UIPopoverController *_datePickerPopover;

    UIDatePicker *_datePicker;

    UIImage *_itemImage;

    SKUIGiftItemView *_itemView;

    SKUIGiftValidationResponse *_lastValidationResponse;

    UIPopoverController *_peoplePickerPopover;

    UIPopoverController *_searchResultsPopover;

    UIView *_searchResultsView;

    NSMutableArray *_sections;

    SKUIGiftSendDateSection *_sendDateSection;

    NSIndexPath *_showDatePickerIndexPathAfterKeyboardDismiss;

    UITableView *_tableView;

    _Bool _tappedNextWhileValidating;

    SKUIGiftTermsAndConditionsSection *_termsSection;

    NSObject<OS_dispatch_source> *_validationTimer;

    SKUIGiftValidator *_validator;

}



- (void).cxx_destruct;

- (void)_amountControlAction:(id)arg1;

- (void)_cancelAction:(id)arg1;

- (void)_datePickerAction:(id)arg1;

- (void)_finishValidationWithResponse:(id)arg1 error:(id)arg2;

- (id)_headerImage;

- (id)_headerView;

- (id)_itemImage;

- (id)_itemView;

- (void)_keyboardChangeNotification:(id)arg1;

- (void)_nextAction:(id)arg1;

- (void)_pushThemePickerOrShowInvalidAlert;

- (void)_recipientsDidChangeNotification:(id)arg1;

- (void)_reloadSections;

- (void)_removeDatePickerIfPossible;

- (void)_setItemImage:(id)arg1 error:(id)arg2;

- (void)_showDatePickerForRowAtIndexPath:(id)arg1;

- (void)_showDatePickerPopoverForRowAtIndexPath:(id)arg1;

- (void)_textFieldChangeNotification:(id)arg1;

- (void)_textViewChangeNotification:(id)arg1;

- (void)_textViewDidEndEditingNotification:(id)arg1;

- (void)_validateGift;

- (void)_validateGiftThrottled:(_Bool)arg1;

- (void)dealloc;

- (id)initWithGift:(id)arg1 configuration:(id)arg2;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)popoverControllerDidDismissPopover:(id)arg1;

- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;

- (void)scrollViewDidEndDecelerating:(id)arg1;

- (void)scrollViewDidEndScrollingAnimation:(id)arg1;

- (void)scrollViewDidScroll:(id)arg1;

- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 didUpdateSearchController:(id)arg3;

- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 dismissPeoplePicker:(id)arg3;

- (void)tableView:(id)arg1 giftRecipientCell:(id)arg2 presentPeoplePicker:(id)arg3;

- (void)tableView:(id)arg1 giftRecipientCellDidChangeRecipients:(id)arg2;

- (void)tableView:(id)arg1 giftRecipientCellDidChangeSize:(id)arg2;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (_Bool)textFieldShouldReturn:(id)arg1;

- (void)viewWillAppear:(_Bool)arg1;



@end

