/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIActionSheet.h"



#import "UIActionSheetDelegate.h"



@class NSMutableDictionary;



@interface GKUIActionSheet : UIActionSheet <UIActionSheetDelegate>

{

    NSMutableDictionary *_buttonHandlers;

}



+ (id)actionSheetWithTitle:(id)arg1;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (long long)addButtonWithTitle:(id)arg1 handler:(id)arg2;

- (long long)addCancelButtonWithTitle:(id)arg1;

- (long long)addDestructiveButtonWithTitle:(id)arg1 handler:(id)arg2;

@property(retain, nonatomic) NSMutableDictionary *buttonHandlers; // @synthesize buttonHandlers=_buttonHandlers;

- (void)dealloc;

- (id)initWithTitle:(id)arg1;



@end


