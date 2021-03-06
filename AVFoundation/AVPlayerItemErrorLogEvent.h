/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;



@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying>

{

    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;

}



@property(readonly, nonatomic) NSString *URI;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(readonly, nonatomic) NSDate *date;

- (void)dealloc;

@property(readonly, nonatomic) NSString *errorComment;

@property(readonly, nonatomic) NSString *errorDomain;

@property(readonly, nonatomic) long long errorStatusCode;

- (void)finalize;

- (id)init;

- (id)initWithDictionary:(id)arg1;

@property(readonly, nonatomic) NSString *playbackSessionID;

@property(readonly, nonatomic) NSString *serverAddress;



@end


