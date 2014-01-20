/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSSet, NSString;



@interface AVMediaFileType : NSObject <NSCopying>

{

    NSString *_uti;

}



+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;

+ (id)allFileTypeIdentifiers;

+ (void)initialize;

+ (id)isoFileTypes;

+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;

@property(readonly, nonatomic) NSString *UTI;

@property(readonly, nonatomic) unsigned int audioFileTypeID;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(readonly, nonatomic) NSString *defaultFileExtension;

- (id)description;

@property(readonly, nonatomic) NSString *figFormatReaderFileFormat;

- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id *)arg2;

@property(readonly, nonatomic) NSSet *supportedMediaTypes;

- (_Bool)supportsFormat:(struct opaqueCMFormatDescription *)arg1;

- (_Bool)supportsOutputSettings:(id)arg1 reason:(id *)arg2;



@end

