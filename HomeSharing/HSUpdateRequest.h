/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "HSRequest.h"


@interface HSUpdateRequest : HSRequest

{

}



+ (id)requestWithDatabaseRevision:(unsigned int)arg1;

+ (id)requestWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;

- (id)_bodyDataForDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;

- (id)canonicalResponseForResponse:(id)arg1;

- (id)initWithDatabaseRevision:(unsigned int)arg1;

- (id)initWithDatabaseRevision:(unsigned int)arg1 sessionID:(unsigned int)arg2;



@end


