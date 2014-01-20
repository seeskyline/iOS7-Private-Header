/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIRemoteViewController.h"



#import "SLSheetViewHostProtocol.h"



__attribute__((visibility("hidden")))

@interface SLRemoteComposeViewController : _UIRemoteViewController <SLSheetViewHostProtocol>

{

    id <SLComposeViewControllerServiceProtocol> _serviceProxy;

    long long _controllerResult;

    _Bool _hasAppeared;

    id <SLSheetViewHostProtocol> _hostDelegate;

}



+ (id)exportedInterface;

+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;

- (void)addAttachment:(id)arg1;

@property _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;

@property(nonatomic) __weak id <SLSheetViewHostProtocol> hostDelegate; // @synthesize hostDelegate=_hostDelegate;

- (void)removeAllImages;

- (void)removeAllURLs;

- (void)setInitialText:(id)arg1;

- (void)setupRemoteViewController;

- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;

- (void)sheetFailedWithError:(id)arg1;

- (void)sheetWillDismissWithUserResult:(id)arg1;

- (void)shouldShowNetworkActivityIndicator:(id)arg1;

- (void)updateAttachment:(id)arg1;

- (void)userDidCancel;

- (void)userDidPost;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewDidDisappear:(_Bool)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;



@end

