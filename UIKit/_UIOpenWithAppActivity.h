/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIActivity.h"


@class LSApplicationProxy, UIDocumentInteractionController;



__attribute__((visibility("hidden")))

@interface _UIOpenWithAppActivity : UIActivity

{

    LSApplicationProxy *_appProxy;

    _Bool _defaultApp;

    UIDocumentInteractionController *_documentInteractionController;

}



+ (long long)activityCategory;

- (id)_activityImage;

- (id)activityTitle;

- (id)activityType;

- (_Bool)canPerformWithActivityItems:(id)arg1;

- (void)dealloc;

- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2;

@property(nonatomic, getter=isDefaultApp) _Bool defaultApp; // @synthesize defaultApp=_defaultApp;

- (void)performActivity;



@end


