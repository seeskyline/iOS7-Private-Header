/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



@class MPRemoteMediaPickerController, NSString, UIPopoverController, _UIAsyncInvocation;



@interface MPMediaPickerController : UIViewController

{

    _UIAsyncInvocation *_cancelRequest;

    id _modalContext;

    MPRemoteMediaPickerController *_remoteViewController;

    _Bool _allowsPickingMultipleItems;

    _Bool _showsCloudItems;

    UIPopoverController *_containingPopover;

    unsigned long long _mediaTypes;

    id <MPMediaPickerControllerDelegate> _delegate;

    NSString *_prompt;

}



+ (void)preheatMediaPicker;

- (void).cxx_destruct;

- (void)_addRemoteView;

- (void)_forceDismissal;

- (_Bool)_hasAddedRemoteView;

- (void)_pickerDidCancel;

- (void)_pickerDidPickItems:(id)arg1;

- (void)_requestRemoteViewController;

- (void)_resetRemoteViewController;

- (void)_sendSettingsToService;

- (id)_serviceViewControllerProxy;

@property(nonatomic) _Bool allowsPickingMultipleItems;

- (void)dealloc;

@property(nonatomic) __weak id <MPMediaPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

- (id)initWithMediaTypes:(unsigned long long)arg1;

- (void)loadView;

@property(readonly, nonatomic) unsigned long long mediaTypes; // @synthesize mediaTypes=_mediaTypes;

@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;

- (void)remoteMediaPickerDidCancel;

- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;

@property(nonatomic) _Bool showsCloudItems;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willMoveToParentViewController:(id)arg1;



@end


