/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CUICommonAssetStorage : NSObject

{

    struct _carheader {

        unsigned int _field1;

        unsigned int _field2;

        unsigned int _field3;

        unsigned int _field4;

        unsigned int _field5;

        char _field6[128];

        char _field7[256];

        unsigned char _field8[16];

        unsigned int _field9;

        unsigned int _field10;

        unsigned int _field11;

        unsigned int _field12;

    } *_header;

    struct _renditionkeyfmt *_keyfmt;

    void *_imagedb;

    void *_colordb;

    void *_fontdb;

    void *_fontsizedb;

    void *_zcglyphdb;

    void *_zcbezeldb;

    void *_facetKeysdb;

    void *_elementDebugInfoDB;

    void *_partDebugInfoDB;

    _Bool _swap;

}



+ (void)initialize;

- (void)_bringHeaderInfoUpToDate;

- (id)_constantNameForIdentifier:(unsigned int)arg1 fromDebugTree:(void *)arg2;

- (id)_dataForIdentifier:(unsigned int)arg1 fromDebugTree:(void *)arg2;

- (id)_displayNameForIdentifier:(unsigned int)arg1 fromDebugTree:(void *)arg2;

- (void)_initDefaultHeader;

- (long long)_storagefileTimestamp;

- (void)_swapHeader;

- (void)_swapKeyFormat;

- (void)_swapRenditionKeyArray:(unsigned short *)arg1;

- (struct _renditionkeytoken)_swapRenditionKeyToken:(struct _renditionkeytoken)arg1;

- (void)_swapZeroCodeInformation:(CDStruct_c0454aff *)arg1;

- (id)_zeroCodeListFromTree:(const void *)arg1;

- (id)allAssetKeys;

- (id)allRenditionNames;

- (_Bool)assetExistsForKey:(id)arg1;

- (id)assetForKey:(id)arg1;

- (id)assetForKey:(const void *)arg1 withLength:(unsigned long long)arg2;

- (unsigned int)associatedChecksum;

- (unsigned int)colorSpaceID;

- (id)constantNameForElementID:(long long)arg1;

- (id)constantNameForPartID:(long long)arg1;

- (unsigned int)coreuiVersion;

- (void)dealloc;

- (id)displayNameForElementID:(long long)arg1;

- (id)displayNameForPartID:(long long)arg1;

- (void)finalize;

- (float)fontSizeForFontSizeType:(id)arg1;

- (const struct FontValue *)fontValueForFontType:(id)arg1;

- (_Bool)getBaselineOffset:(float *)arg1 forFontType:(id)arg2;

- (_Bool)getColor:(struct _colordef *)arg1 forName:(const char *)arg2;

- (_Bool)getFontName:(id *)arg1 baselineOffset:(float *)arg2 forFontType:(id)arg3;

- (_Bool)hasColorForName:(const char *)arg1;

- (id)initWithPath:(id)arg1;

- (id)initWithPath:(id)arg1 forWriting:(_Bool)arg2;

- (const struct _renditionkeyfmt *)keyFormat;

- (id)keyFormatData;

- (int)keySemantics;

- (long long)maximumRenditionKeyTokenCount;

- (unsigned int)renditionCount;

- (const struct _renditionkeytoken *)renditionKeyForName:(const char *)arg1 hotSpot:(struct CGPoint *)arg2;

- (unsigned int)schemaVersion;

- (long long)storageTimestamp;

- (unsigned int)storageVersion;

- (_Bool)swapped;

- (_Bool)usesCUISystemThemeRenditionKey;

- (id)uuid;

- (const char *)versionString;

- (id)zeroCodeBezelList;

- (id)zeroCodeGlyphList;



@end


