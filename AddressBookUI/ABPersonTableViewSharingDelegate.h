/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ABActionSheetDelegate, ABPersonViewControllerHelper, ABStyleProvider, NSString, UIImage;



@interface ABPersonTableViewSharingDelegate : NSObject

{

    ABActionSheetDelegate *_actionSheetDelegate;

    _Bool _shareMessageBodyIsHTML;

    ABStyleProvider *_styleProvider;

    ABPersonViewControllerHelper *_helper;

    NSString *_shareMessageBody;

    NSString *_shareMessageSubject;

    NSString *_shareLocationURL;

    UIImage *_shareLocationSnapshotImage;

    id _willTweetLocationCallback;

    id _willWeiboLocationCallback;

}



+ (id)_fakePersonForMergedPeople:(id)arg1;

@property(readonly, nonatomic) _Bool canSendMMS;

@property(readonly, nonatomic) _Bool canSendMail;

@property(readonly, nonatomic) _Bool canShareContact;

@property(readonly, nonatomic) _Bool canTweet;

@property(readonly, nonatomic) _Bool canWeibo;

- (void)dealloc;

- (void)getVCardData:(id *)arg1 exportMode:(int)arg2 fileName:(id *)arg3;

@property(nonatomic) ABPersonViewControllerHelper *helper; // @synthesize helper=_helper;

- (id)init;

- (_Bool)loadChatKitAndReturnBundle:(id *)arg1;

- (_Bool)loadMessageUIAndReturnBundle:(id *)arg1;

- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;

- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;

@property(retain, nonatomic) UIImage *shareLocationSnapshotImage; // @synthesize shareLocationSnapshotImage=_shareLocationSnapshotImage;

@property(copy, nonatomic) NSString *shareLocationURL; // @synthesize shareLocationURL=_shareLocationURL;

@property(copy, nonatomic) NSString *shareMessageBody; // @synthesize shareMessageBody=_shareMessageBody;

@property(nonatomic) _Bool shareMessageBodyIsHTML; // @synthesize shareMessageBodyIsHTML=_shareMessageBodyIsHTML;

@property(copy, nonatomic) NSString *shareMessageSubject; // @synthesize shareMessageSubject=_shareMessageSubject;

@property(retain, nonatomic) ABStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;

@property(copy, nonatomic) id willTweetLocationCallback; // @synthesize willTweetLocationCallback=_willTweetLocationCallback;

@property(copy, nonatomic) id willWeiboLocationCallback; // @synthesize willWeiboLocationCallback=_willWeiboLocationCallback;

- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

- (void)shareContact:(id)arg1;

- (void)shareContactByEmail:(id)arg1;

- (void)shareContactByTextMessage:(id)arg1;

- (void)shareContactFromButtonItem:(id)arg1;

- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;

- (void)shareLocationOnTwitter:(id)arg1;

- (void)shareLocationOnWeibo:(id)arg1;

- (id)vCardFileName;



@end

