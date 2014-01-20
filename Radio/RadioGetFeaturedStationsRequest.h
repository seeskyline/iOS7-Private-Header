/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "RadioRequest.h"


@class NSObject<OS_dispatch_queue>, SSURLConnectionRequest;



@interface RadioGetFeaturedStationsRequest : RadioRequest

{

    NSObject<OS_dispatch_queue> *_artworkQueue;

    SSURLConnectionRequest *_request;

    unsigned int _stationCount;

    _Bool _disableArtworkLoading;

    _Bool _disableCachedResponses;

}



- (void).cxx_destruct;

- (id)_importFeaturedStationWithDictionary:(id)arg1 inModel:(id)arg2 loadArtworkSynchronously:(_Bool)arg3;

- (id)_stationDictionariesByApplyingResponse:(id)arg1 error:(id *)arg2;

- (void)cancel;

@property(nonatomic) _Bool disableArtworkLoading; // @synthesize disableArtworkLoading=_disableArtworkLoading;

@property(nonatomic) _Bool disableCachedResponses; // @synthesize disableCachedResponses=_disableCachedResponses;

- (id)init;

- (id)initWithStationCount:(unsigned int)arg1;

- (void)startWithCompletionHandler:(id)arg1;

- (void)startWithFeaturedStationsCompletionHandler:(id)arg1;



@end

