/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIRemoteViewController.h"



#import "MPURemoteViewControllerPresentation.h"



@interface MPURadioStationActionsClientViewController : _UIRemoteViewController <MPURemoteViewControllerPresentation>

{

    id <MPURemoteViewControllerPresentation> _presentationDelegate;

}



+ (id)exportedInterface;

+ (id)requestViewControllerWithCompletionHandler:(id)arg1;

+ (id)serviceViewControllerBundleID;

+ (id)serviceViewControllerClassName;

+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;

@property(nonatomic) __weak id <MPURemoteViewControllerPresentation> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;

- (void)remoteViewControllerDidFinish;



@end

