/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKCalendarEditItem.h"


@class UITableViewCell;



@interface EKCalendarDeleteButtonEditItem : EKCalendarEditItem

{

    UITableViewCell *_cell;

    id _deleteButtonTarget;

    SEL _deleteButtonAction;

}



- (void).cxx_destruct;

- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;

- (id)cellForSubitemAtIndex:(unsigned long long)arg1;

- (void)setDeleteButtonTarget:(id)arg1 action:(SEL)arg2;



@end


