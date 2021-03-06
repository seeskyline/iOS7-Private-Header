/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GEOBatchReverseGeocodeRequest, NSMutableArray, NSObject<OS_dispatch_semaphore>;



__attribute__((visibility("hidden")))

@interface _RTBatchSliceGeocoder : NSObject

{

    GEOBatchReverseGeocodeRequest *_batchRequest;

    NSObject<OS_dispatch_semaphore> *_semaphore;

    NSMutableArray *_placeResults;

    struct _NSRange _range;

}



- (void).cxx_destruct;

- (void)_cancelRequest:(id)arg1;

@property(retain, nonatomic) GEOBatchReverseGeocodeRequest *batchRequest; // @synthesize batchRequest=_batchRequest;

- (void)cancel;

- (void)dealloc;

- (void)geocodeLocations:(id)arg1;

- (id)init;

@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;



@end


