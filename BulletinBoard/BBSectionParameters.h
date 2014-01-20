/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSSecureCoding.h"



@class BBSectionIcon, BBSectionSubtypeParameters, NSLock, NSMutableDictionary, NSString;



@interface BBSectionParameters : NSObject <NSSecureCoding>

{

    NSLock *_lock;

    _Bool _showsSubtitle;

    _Bool _usesVariableLayout;

    _Bool _orderSectionUsingRecencyDate;

    _Bool _showsDateInFloatingLockScreenAlert;

    _Bool _displaysCriticalBulletins;

    unsigned long long _messageNumberOfLines;

    BBSectionSubtypeParameters *_defaultSubtypeParameters;

    NSMutableDictionary *_allSubtypeParameters;

    NSString *_displayName;

    BBSectionIcon *_icon;

    NSString *_uniqueIdentifier;

}



+ (void)addSectionParametersToCache:(id)arg1;

+ (id)copyCachedSectionParametersWithIdentifier:(id)arg1;

+ (void)removeSectionParametersFromCache:(id)arg1;

+ (_Bool)supportsSecureCoding;

@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;

- (void)dealloc;

@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;

@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

@property(nonatomic) _Bool displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;

- (void)encodeWithCoder:(id)arg1;

@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;

- (id)init;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) unsigned long long messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;

@property(nonatomic) _Bool orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;

- (id)parametersForSubtype:(long long)arg1;

@property(nonatomic) _Bool showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;

@property(nonatomic) _Bool showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;

@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

@property(nonatomic) _Bool usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;



@end

