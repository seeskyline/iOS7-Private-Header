/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UILabel.h"


@class NSCalendar, NSDate, NSString, UIFont;



@interface UIDateLabel : UILabel

{

    _Bool _forceTimeOnly;

    NSDate *_date;

    _Bool _boldForAllLocales;

    NSDate *_yesterday;

    NSDate *_today;

    NSDate *_noon;

    NSDate *_tomorrow;

    NSDate *_previousWeek;

    UIFont *_timeDesignatorFont;

    NSCalendar *_calendar;

    _Bool _shouldRecomputeText;

    double _paddingFromTimeToDesignator;

}



+ (id)_dateFormatter;

+ (id)_relativeDateFormatter;

+ (id)_timeFormatWithoutDesignator;

+ (id)_timeOnlyDateFormatter;

+ (id)_weekdayDateFormatter;

+ (id)amString;

+ (id)defaultFont;

+ (id)pmString;

- (id)_calendar;

@property(readonly, nonatomic, getter=_dateString) NSString *dateString;

- (id)_dateWithDayDiffFromToday:(long long)arg1;

- (void)_didUpdateDate;

- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;

- (double)_lastWeek;

- (double)_noon;

- (void)_recomputeTextIfNecessary;

- (id)_stringDrawingContext;

- (double)_today;

- (id)_todayDate;

- (double)_tomorrow;

- (double)_yesterday;

@property(nonatomic) _Bool boldForAllLocales; // @synthesize boldForAllLocales=_boldForAllLocales;

@property(retain, nonatomic) NSDate *date;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (void)drawTextInRect:(struct CGRect)arg1;

- (id)font;

@property(nonatomic) _Bool forceTimeOnly; // @synthesize forceTimeOnly=_forceTimeOnly;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)invalidate;

@property(nonatomic) double paddingFromTimeToDesignator; // @synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator;

@property(nonatomic) _Bool shouldRecomputeText; // @synthesize shouldRecomputeText=_shouldRecomputeText;

@property(nonatomic) double timeInterval;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (id)text;

@property(readonly, nonatomic) NSString *timeDesignator;

@property(readonly, nonatomic) _Bool timeDesignatorAppearsBeforeTime;

@property(readonly, nonatomic) UIFont *timeDesignatorFont;

@property(readonly, nonatomic) struct CGSize timeDesignatorSize;

@property(readonly, nonatomic) _Bool use24HourTime;



@end


