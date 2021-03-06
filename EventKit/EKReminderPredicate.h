/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPredicate.h"


@class NSDate, NSString;



@interface EKReminderPredicate : EKPredicate

{

    _Bool _limitToCompletedOrIncomplete;

    _Bool _completed;

    _Bool _useCompletionDateAsAlternate;

    _Bool _useDueDateAsCompletionDate;

    int _sortOrder;

    NSString *_title;

    NSString *_listTitle;

    NSDate *_dueAfter;

    NSDate *_dueBefore;

    NSString *_searchTerm;

    unsigned long long _maxResults;

}



+ (id)predicateWithCalendars:(id)arg1;

@property(nonatomic) _Bool completed; // @synthesize completed=_completed;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(retain, nonatomic) NSDate *dueAfter; // @synthesize dueAfter=_dueAfter;

@property(retain, nonatomic) NSDate *dueBefore; // @synthesize dueBefore=_dueBefore;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCalendars:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) _Bool limitToCompletedOrIncomplete; // @synthesize limitToCompletedOrIncomplete=_limitToCompletedOrIncomplete;

@property(retain, nonatomic) NSString *listTitle; // @synthesize listTitle=_listTitle;

@property(nonatomic) unsigned long long maxResults; // @synthesize maxResults=_maxResults;

@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;

@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@property(nonatomic) _Bool useCompletionDateAsAlternate; // @synthesize useCompletionDateAsAlternate=_useCompletionDateAsAlternate;

@property(nonatomic) _Bool useDueDateAsCompletionDate; // @synthesize useDueDateAsCompletionDate=_useDueDateAsCompletionDate;



@end


