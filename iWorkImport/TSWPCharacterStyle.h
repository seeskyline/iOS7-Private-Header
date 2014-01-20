/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSSStyle.h"


#import "TSSPreset.h"



@class NSString;



__attribute__((visibility("hidden")))

@interface TSWPCharacterStyle : TSSStyle <TSSPreset>

{

}



+ (id)emphasisProperties;

+ (id)nonEmphasisCharacterProperties;

+ (id)nullStyleName;

+ (id)nullStyleWithContext:(id)arg1;

+ (id)properties;

+ (id)propertiesAllowingNSNull;

- (id)initFromUnarchiver:(id)arg1;

- (void)loadFromArchive:(const struct CharacterStyleArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) NSString *presetKind;

- (void)saveToArchive:(struct CharacterStyleArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

- (_Bool)transformsFontSizes;

- (int)writingDirection;



@end

