/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface CLNotifierData : NSObject

{

    void *_data;

    id _destructor;

}



- (void).cxx_destruct;

@property(nonatomic) void *data; // @synthesize data=_data;

- (void)dealloc;

@property(copy, nonatomic) id destructor; // @synthesize destructor=_destructor;

- (id)initWithData:(void *)arg1 destructor:(id)arg2;



@end


