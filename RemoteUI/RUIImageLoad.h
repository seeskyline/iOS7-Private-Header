/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSURLConnectionDelegate.h"



@class NSMutableData, NSURL, NSURLConnection;



@interface RUIImageLoad : NSObject <NSURLConnectionDelegate>

{

    NSURL *_URL;

    NSURLConnection *_connection;

    NSMutableData *_imageData;

    _Bool _invalidResponse;

}



- (void)_createImage;

- (void)_loadFinished;

- (void)connection:(id)arg1 didFailWithError:(id)arg2;

- (void)connection:(id)arg1 didReceiveData:(id)arg2;

- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;

- (void)connectionDidFinishLoading:(id)arg1;

- (void)dealloc;

- (_Bool)receivedValidResponse:(id)arg1;

- (void)start;



@end


