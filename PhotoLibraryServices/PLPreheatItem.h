/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface PLPreheatItem : NSObject

{

    int _useCount;

}



- (_Bool)addImageHandler:(id)arg1;

- (id)cachedImage;

- (id)cachedImageIfAvailable;

- (void)cancelPreheatRequest;

- (long long)decrementUseCount;

- (long long)incrementUseCount;

- (void)startPreheatRequest;



@end


