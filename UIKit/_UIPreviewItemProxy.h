/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString, NSURL;



__attribute__((visibility("hidden")))

@interface _UIPreviewItemProxy : NSObject

{

    NSURL *_URL;

    NSURL *_previewURLOverride;

    NSString *_name;

    NSURL *_URLsToDeleteOnDealloc;

    NSString *_previewItemContentType;

    NSURL *_URLToDeleteOnDealloc;

}



@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc; // @synthesize URLToDeleteOnDealloc=_URLToDeleteOnDealloc;

- (id)_primitive_previewItemContentType;

- (void)dealloc;

@property(copy, nonatomic) NSString *previewItemContentType;

@property(copy, nonatomic) NSString *previewItemTitle; // @synthesize previewItemTitle=_name;

@property(copy, nonatomic) NSURL *previewItemURL; // @synthesize previewItemURL=_URL;

- (id)previewItemURLForDisplay;

@property(copy, nonatomic) NSURL *previewItemURLOverride; // @synthesize previewItemURLOverride=_previewURLOverride;



@end


