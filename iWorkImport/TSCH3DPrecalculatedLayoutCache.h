/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface TSCH3DPrecalculatedLayoutCache : NSObject

{

    NSMutableDictionary *mCache;

}



+ (CDStruct_9aa9521f)IOSLayoutSettings;

+ (CDStruct_9aa9521f)desktopLayoutSettings;

+ (void)populateDesktopInsertionIconsIntoDictionary:(id)arg1;

+ (void)populateIPadInsertionIconsIntoDictionary:(id)arg1;

+ (void)populateIPadInspectorIconsIntoDictionary:(id)arg1;

+ (void)populateIPhoneInsertionIconsIntoDictionary:(id)arg1;

+ (void)populateIPhoneInspectorIconsIntoDictionary:(id)arg1;

+ (void)populateIPhonePortraitInsertionIconsIntoDictionary:(id)arg1;

+ (void)populateIPhonePortraitInspectorIconsIntoDictionary:(id)arg1;

+ (id)sharedCache;

- (void)dealloc;

- (id)initWithCache:(id)arg1;

- (id)layoutCacheForChartType:(id)arg1 cacheType:(struct TSCH3DPrecalculatedLayoutCacheType)arg2;



@end


