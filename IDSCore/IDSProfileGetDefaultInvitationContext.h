/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IDSProfileMessage.h"


#import "NSCopying.h"



@class NSDictionary, NSString;



@interface IDSProfileGetDefaultInvitationContext : IDSProfileMessage <NSCopying>

{

    _Bool _responseValidated;

    NSString *_responseBasePhoneNumber;

    NSString *_responseRegionID;

    NSDictionary *_responseExtraInfo;

}



- (id)bagKey;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)handleResponseDictionary:(id)arg1;

- (id)init;

- (id)messageBody;

- (id)requiredKeys;

@property(copy) NSString *responseBasePhoneNumber; // @synthesize responseBasePhoneNumber=_responseBasePhoneNumber;

@property(copy) NSDictionary *responseExtraInfo; // @synthesize responseExtraInfo=_responseExtraInfo;

@property(copy) NSString *responseRegionID; // @synthesize responseRegionID=_responseRegionID;

@property _Bool responseValidated; // @synthesize responseValidated=_responseValidated;



@end

