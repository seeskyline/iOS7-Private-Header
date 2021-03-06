/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CoreDAVPropFindTask.h"



@class NSDateComponents;



@interface CalDAVCalendarQueryTask : CoreDAVPropFindTask

{

    _Bool _syncEvents;

    _Bool _syncTodos;

    NSDateComponents *_eventFilterStartDate;

    NSDateComponents *_eventFilterEndDate;

    NSDateComponents *_todoFilterStartDate;

    NSDateComponents *_todoFilterEndDate;

}



- (void)_appendComponentFiltersToXMLData:(id)arg1;

- (void)_appendTimeRangeFilterToXMLData:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

- (id)_icsDateStringForNSDateComponents:(id)arg1;

- (void)dealloc;

- (id)description;

@property(retain) NSDateComponents *eventFilterEndDate; // @synthesize eventFilterEndDate=_eventFilterEndDate;

@property(retain) NSDateComponents *eventFilterStartDate; // @synthesize eventFilterStartDate=_eventFilterStartDate;

- (id)httpMethod;

- (id)requestBody;

@property _Bool syncEvents; // @synthesize syncEvents=_syncEvents;

@property _Bool syncTodos; // @synthesize syncTodos=_syncTodos;

@property(retain) NSDateComponents *todoFilterEndDate; // @synthesize todoFilterEndDate=_todoFilterEndDate;

@property(retain) NSDateComponents *todoFilterStartDate; // @synthesize todoFilterStartDate=_todoFilterStartDate;



@end


