/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFWebAttachmentSource.h"


@class MFAttachmentManager, MFLock, MFMimeBody, MFMimePart, NSData, NSMutableDictionary, NSURL;



@interface MFWebMessageDocument : MFWebAttachmentSource

{

    unsigned int _uniqueId;

    NSURL *_baseURL;

    MFMimeBody *_mimeBody;

    MFMimePart *_htmlPart;

    NSData *_htmlData;

    MFLock *_lock;

    NSMutableDictionary *_partsByURL;

    NSMutableDictionary *_partsByFilename;

    unsigned int _preferredEncoding;

    MFAttachmentManager *_attachmentManager;

}



+ (id)sourceForURL:(id)arg1;

- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;

- (id)attachmentForCID:(id)arg1;

- (id)attachmentForURL:(id)arg1;

@property(retain, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;

- (id)attachmentsInDocument;

@property(readonly) NSURL *baseURL; // @synthesize baseURL=_baseURL;

- (void)dealloc;

- (id)fileWrapper;

@property(readonly) NSData *htmlData; // @synthesize htmlData=_htmlData;

- (id)init;

- (id)initWithMimeBody:(id)arg1;

- (id)initWithMimePart:(id)arg1;

- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned int)arg3;

@property(readonly) MFMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;

@property(readonly) MFMimePart *mimePart; // @synthesize mimePart=_htmlPart;

- (id)mimePartForURL:(id)arg1;

- (id)preferredCharacterSet;

@property unsigned int preferredEncoding; // @synthesize preferredEncoding=_preferredEncoding;



@end

