/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainObject.h"


@class NSDate, NSNumber, SAPersonAttribute;



@interface SAPhoneCallSearchResult : SADomainObject

{

}



+ (id)callSearchResult;

+ (id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSDate *callTime;

@property(retain, nonatomic) SAPersonAttribute *contact;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSNumber *isNew;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end

