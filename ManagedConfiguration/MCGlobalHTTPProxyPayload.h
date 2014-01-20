/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCPayload.h"


@class NSNumber, NSString;



@interface MCGlobalHTTPProxyPayload : MCPayload

{

    _Bool _proxyPACFallbackAllowed;

    _Bool _proxyCaptiveLoginAllowed;

    int _proxyType;

    NSString *_proxyServer;

    NSNumber *_proxyServerPort;

    NSString *_proxyUsername;

    NSString *_proxyPassword;

    NSString *_proxyPACURLString;

    NSString *_credentialUUID;

}



+ (id)localizedPluralForm;

+ (id)localizedSingularForm;

+ (id)typeStrings;

- (void).cxx_destruct;

@property(retain, nonatomic) NSString *credentialUUID; // @synthesize credentialUUID=_credentialUUID;

- (id)description;

- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@property(nonatomic) _Bool proxyCaptiveLoginAllowed; // @synthesize proxyCaptiveLoginAllowed=_proxyCaptiveLoginAllowed;

@property(nonatomic) _Bool proxyPACFallbackAllowed; // @synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed;

@property(retain, nonatomic) NSString *proxyPACURLString; // @synthesize proxyPACURLString=_proxyPACURLString;

@property(retain, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;

@property(retain, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;

@property(retain, nonatomic) NSNumber *proxyServerPort; // @synthesize proxyServerPort=_proxyServerPort;

@property(nonatomic) int proxyType; // @synthesize proxyType=_proxyType;

@property(retain, nonatomic) NSString *proxyUsername; // @synthesize proxyUsername=_proxyUsername;

- (id)stubDictionary;

- (id)subtitle1Description;

- (id)subtitle1Label;

- (id)subtitle2Description;

- (id)subtitle2Label;



@end

