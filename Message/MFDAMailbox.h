/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFMailboxUid.h"


@class NSString;



@interface MFDAMailbox : MFMailboxUid

{

    NSString *_folderID;

}



- (id)URLStringWithAccount:(id)arg1;

- (id)_folderID;

- (void)dealloc;

- (id)description;

@property(copy) NSString *folderID;

- (id)initWithName:(id)arg1 attributes:(unsigned int)arg2 account:(id)arg3 folderID:(id)arg4;

- (_Bool)mergeWithUserInfo:(id)arg1;



@end


