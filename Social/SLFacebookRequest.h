/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SLRequest.h"


@class NSString;



@interface SLFacebookRequest : SLRequest

{

}



@property(retain) NSString *accessToken; // @dynamic accessToken;

- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;

- (void)preflightRequest;

- (id)preparedURLRequest;

@property int responseDataFormat; // @dynamic responseDataFormat;



@end


