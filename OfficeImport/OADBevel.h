/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



__attribute__((visibility("hidden")))

@interface OADBevel : NSObject <NSCopying>

{

    int mType;

    float mWidth;

    float mHeight;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)hash;

- (float)height;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (void)setHeight:(float)arg1;

- (void)setType:(int)arg1;

- (void)setWidth:(float)arg1;

- (int)type;

- (float)width;



@end


