/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "KNBuildMovieStart.h"


#import "KNAnimationPluginArchiving.h"



__attribute__((visibility("hidden")))

@interface KNBuildAudioStart : KNBuildMovieStart <KNAnimationPluginArchiving>

{

}



+ (int)animationCategory;

+ (id)animationFilter;

+ (id)animationName;

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;

+ (id)localizedMenuString:(int)arg1;

+ (id)thumbnailImageNameForType:(int)arg1;

+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;



@end


