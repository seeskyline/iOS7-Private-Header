/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, SPSearchResult;



@interface SPApplication : NSObject

{

    NSString *_displayIdentifier;

    NSString *_displayName;

    NSString *_longDisplayName;

}



- (void)dealloc;

- (id)description;

@property(retain, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;

@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

@property(retain, nonatomic) NSString *longDisplayName; // @synthesize longDisplayName=_longDisplayName;

@property(readonly, nonatomic) SPSearchResult *searchResult;



@end


