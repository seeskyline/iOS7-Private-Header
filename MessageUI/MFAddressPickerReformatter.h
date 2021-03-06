/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray;



@interface MFAddressPickerReformatter : NSObject

{

    NSArray *_addresses;

    NSArray *_reformattedAddresses;

    double _maximumWidth;

    double _minimumFontSize;

    double _maximumFontSize;

    double _fontSize;

    _Bool _attributesDisabled;

}



- (void)_attemptUniquingDisplayedStrings;

- (_Bool)_attemptUniquingDisplayedStringsUsingBlock:(id)arg1;

- (unsigned long long)_defaultOptions;

- (void)_determineFontSize:(_Bool *)arg1;

- (void)_expandAllLocalParts;

- (void)_invalidateReformattedAddresses;

- (id)_reformattedAddressesByDisplayedStrings;

- (_Bool)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1;

- (void)_restoreMiddleTruncationRanges:(id)arg1;

- (id)_saveMiddleTruncationRanges;

- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;

- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)arg1 options:(unsigned long long)arg2;

- (void)_updateReformattedAddressesIfNecessary;

- (void)dealloc;

- (unsigned long long)numberOfReformattedAddresses;

- (id)reformattedAddressAtIndex:(unsigned long long)arg1;

- (id)reformattedAddressStringAtIndex:(unsigned long long)arg1;

- (void)setAddresses:(id)arg1;

- (void)setAttributesDisabled:(_Bool)arg1;

- (void)setFontSize:(double)arg1;

- (void)setMaximumWidth:(double)arg1;

- (void)setMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2;



@end


