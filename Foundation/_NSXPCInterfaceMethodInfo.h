/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface _NSXPCInterfaceMethodInfo : NSObject

{

    char *_replySignature;

    int _replyPosition;

    NSMutableArray *_replyArguments;

    NSMutableArray *_arguments;

}



@property(retain) NSMutableArray *arguments; // @synthesize arguments=_arguments;

- (void)dealloc;

- (void)finalize;

- (id)init;

@property(retain) NSMutableArray *replyArguments; // @synthesize replyArguments=_replyArguments;

@property int replyPosition; // @synthesize replyPosition=_replyPosition;

- (const char *)replySignature;

- (void)setReplySignature:(id)arg1;



@end

