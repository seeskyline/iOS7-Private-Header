/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPayload.h"


@class NSArray;



@interface MCAppWhitelistPayloadBase : MCPayload

{

    _Bool _allowAccessWithoutPasscode;

    _Bool _forceAllowSupervisorAccess;

    NSArray *_whitelistedAppsAndOptions;

}



+ (id)knownOptionsKeys;

+ (id)knownUserEnabledOptionKeys;

- (void).cxx_destruct;

@property(nonatomic) _Bool allowAccessWithoutPasscode; // @synthesize allowAccessWithoutPasscode=_allowAccessWithoutPasscode;

- (id)description;

@property(nonatomic) _Bool forceAllowSupervisorAccess; // @synthesize forceAllowSupervisorAccess=_forceAllowSupervisorAccess;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

- (id)restrictions;

@property(retain, nonatomic) NSArray *whitelistedAppsAndOptions; // @synthesize whitelistedAppsAndOptions=_whitelistedAppsAndOptions;

- (id)stubDictionary;



@end


