/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class GQDSStyle;



__attribute__((visibility("hidden")))

@interface GQDWPSection : NSObject

{

    struct __CFArray *mChildren;

    GQDSStyle *mStyle;

}



- (struct __CFArray *)children;

- (void)dealloc;

- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;

- (id)style;



@end


