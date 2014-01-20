/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSDecimalNumber, NSLocale, NSString;



@interface SKProduct : NSObject

{

    id _internal;

}



@property(copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;

- (void)_setContentVersion:(id)arg1;

- (void)_setDownloadContentLengths:(id)arg1;

- (void)_setDownloadable:(_Bool)arg1;

- (void)_setLocalizedDescription:(id)arg1;

- (void)_setLocalizedTitle:(id)arg1;

- (void)_setPrice:(id)arg1;

- (void)_setPriceLocale:(id)arg1;

- (void)_setProductIdentifier:(id)arg1;

- (id)copyXPCEncoding;

- (void)dealloc;

@property(readonly, nonatomic) NSArray *downloadContentLengths;

@property(readonly, nonatomic) NSString *downloadContentVersion;

- (id)init;

- (id)initWithXPCEncoding:(id)arg1;

@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;

@property(readonly, nonatomic) NSString *localizedDescription;

@property(readonly, nonatomic) NSString *localizedTitle;

@property(readonly, nonatomic) NSDecimalNumber *price;

@property(readonly, nonatomic) NSLocale *priceLocale;

@property(readonly, nonatomic) NSString *productIdentifier;



@end

