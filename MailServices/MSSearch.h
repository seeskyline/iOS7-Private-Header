/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MSMailDefaultService.h"


@class NSObject<MSSearchDelegate>, NSObject<OS_dispatch_queue>;



@interface MSSearch : MSMailDefaultService

{

    NSObject<OS_dispatch_queue> *_resultsQueue;

    NSObject<MSSearchDelegate> *_delegate;

}



+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(_Bool)arg3 onServer:(_Bool)arg4 delegate:(id)arg5;

+ (id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(_Bool)arg3 onServer:(_Bool)arg4 onlyInboxes:(_Bool)arg5 delegate:(id)arg6;

+ (void)setUnitTestingResultsArray:(id)arg1;

- (void)_delegateDidFindResults:(id)arg1;

- (void)_delegateDidFinishWithError:(id)arg1;

- (void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(_Bool)arg3 onServer:(_Bool)arg4 onlyInboxes:(_Bool)arg5;

- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;

- (void)_generateUnitTestResponsesForResultArray:(id)arg1;

- (id)_initWithDelegate:(id)arg1;

- (_Bool)_unitTestsAreEnabled;

- (void)dealloc;

@property(nonatomic) NSObject<MSSearchDelegate> *delegate; // @synthesize delegate=_delegate;

- (void)responseConnection:(id)arg1 handleError:(id)arg2;

- (void)responseConnection:(id)arg1 handleResponse:(id)arg2;



@end


