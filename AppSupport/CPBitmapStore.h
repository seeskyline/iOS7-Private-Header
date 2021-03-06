/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSCache, NSString;



@interface CPBitmapStore : NSObject

{

    NSString *_path;

    NSString *_imagePath;

    NSCache *_cache;

    int _version;

    NSString *_versionPath;

}



+ (id)CPBitmapStoreWithPath:(id)arg1 version:(int)arg2 useDirectHashing:(_Bool)arg3;

- (struct CGImage *)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 fillMem:(id)arg6 alternateCompletion:(void)arg7;

- (id)_versionPath;

- (id)allGroups;

- (void)commitTransaction;

- (void)commitTxn;

- (struct CGImage *)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 draw:(id)arg6;

- (struct CGImage *)copyImageForKey:(id)arg1;

- (struct CGImage *)copyImageForKey:(id)arg1 inGroup:(id)arg2;

- (void)dealloc;

- (_Bool)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;

- (unsigned long long)imageCount;

- (id)imageNameForKey:(id)arg1 inGroup:(id)arg2;

- (id)imagePath;

- (id)initWithPath:(id)arg1 version:(int)arg2;

- (unsigned int)memContentOffset;

- (void *)openAndMmap:(id)arg1 withInfo:(struct _img *)arg2;

- (void)purge;

- (void)removeImagesInGroups:(id)arg1;

- (_Bool)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(struct _img *)arg3;

- (int)setVersion:(int)arg1;

- (void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(struct CGSize)arg3 opaque:(_Bool)arg4 scale:(double)arg5 data:(id)arg6;

- (void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(_Bool)arg3 image:(struct CGImage *)arg4;

@property(readonly, nonatomic) int version;



@end


