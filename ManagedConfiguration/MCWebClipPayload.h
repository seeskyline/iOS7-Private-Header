/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPayload.h"


@class NSData, NSString, NSURL;



@interface MCWebClipPayload : MCPayload

{

    NSURL *_URL;

    NSString *_label;

    NSData *_iconData;

    _Bool _isRemovable;

    _Bool _precomposed;

    _Bool _fullScreen;

    NSString *_savedIdentifier;

}



+ (id)localizedPluralForm;

+ (id)localizedSingularForm;

+ (id)typeStrings;

- (void).cxx_destruct;

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;

- (id)description;

@property(readonly, nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;

@property(readonly, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@property(readonly, nonatomic) _Bool isRemovable; // @synthesize isRemovable=_isRemovable;

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;

@property(readonly, nonatomic) _Bool precomposed; // @synthesize precomposed=_precomposed;

@property(retain, nonatomic) NSString *savedIdentifier; // @synthesize savedIdentifier=_savedIdentifier;

- (id)stubDictionary;

- (id)subtitle1Description;

- (id)subtitle1Label;

- (id)subtitle2Description;

- (id)subtitle2Label;

- (id)title;



@end

