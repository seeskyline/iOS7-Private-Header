/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GEOTileRequester.h"


@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface GEORegionalResourcesTileRequester : GEOTileRequester

{

    NSMutableArray *_loaders;

}



+ (unsigned char)tileProviderIdentifier;

- (void)cancel;

- (void)dealloc;

- (void)start;



@end

