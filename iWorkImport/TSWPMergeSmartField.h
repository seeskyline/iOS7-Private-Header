/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPPlaceholderSmartField.h"


@class NSString;



__attribute__((visibility("hidden")))

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField

{

    NSString *_property;

    NSString *_label;

    NSString *_key;

    int _category;

    _Bool _requiresFollowingWhitespace;

    NSString *_whitespace;

    NSString *_guid;

    NSString *_tableField;

}



- (_Bool)allowsPasteAsSmartField;

@property(nonatomic) int category; // @synthesize category=_category;

- (id)copyWithContext:(id)arg1;

- (void)dealloc;

@property(copy, nonatomic) NSString *guid; // @synthesize guid=_guid;

- (id)initFromUnarchiver:(id)arg1;

@property(copy, nonatomic) NSString *key; // @synthesize key=_key;

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;

- (const struct PlaceholderSmartFieldArchive *)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1;

@property(copy, nonatomic) NSString *property; // @synthesize property=_property;

@property(nonatomic) _Bool requiresFollowingWhitespace; // @synthesize requiresFollowingWhitespace=_requiresFollowingWhitespace;

- (void)saveToArchiver:(id)arg1;

@property(copy, nonatomic) NSString *tableField; // @synthesize tableField=_tableField;

@property(copy, nonatomic) NSString *whitespace; // @synthesize whitespace=_whitespace;



@end


