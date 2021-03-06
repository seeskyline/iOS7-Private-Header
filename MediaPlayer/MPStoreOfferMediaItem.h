/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPNondurableMediaItem.h"


#import "NSCopying.h"

#import "NSSecureCoding.h"



@class MPStoreOfferContentRating, NSDictionary;



@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSSecureCoding, NSCopying>

{

    NSDictionary *_lookupCollectionPropertyValues;

    unsigned long long _indexInCollectionItems;

    long long _preferredStoreOfferVariant;

    MPStoreOfferContentRating *_contentRating;

}



+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;

+ (_Bool)canFilterByProperty:(id)arg1;

+ (_Bool)canMergeStoreOfferWithLocalMediaItems:(id)arg1;

+ (_Bool)canRequestStoreOfferForLocalMediaItems:(id)arg1;

+ (id)collectionLookupKeyForMediaProperty:(id)arg1;

+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemIndex:(unsigned long long)arg2;

+ (id)defaultPropertyValues;

+ (_Bool)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned long long)arg2;

+ (id)itemLookupKeyForMediaProperty:(id)arg1;

+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;

+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;

+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2;

+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned long long)arg2 mediaProperty:(id)arg3;

+ (id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)arg1;

+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned long long)arg2;

+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;

+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;

+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;

+ (_Bool)supportsSecureCoding;

- (void).cxx_destruct;

- (id)_lookupOfferDictionaries;

- (_Bool)_offeredItemAlreadyExists;

- (id)buyOfferForVariant:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(long long)arg2 itemID:(id)arg3 itemIndex:(unsigned long long)arg4;

- (_Bool)isDownloadable;

- (_Bool)isEqual:(id)arg1;

- (id)mediaLibrary;

- (long long)preferredStoreOfferVariant;

- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;

- (id)valueForProperty:(id)arg1;



@end


