/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIActivity.h"


@interface UISaveToCameraRollActivity : UIActivity

{

    long long _imageCount;

    long long _videoCount;

}



- (id)_activityImage;

- (id)activityTitle;

- (id)activityType;

- (_Bool)canPerformWithActivityItems:(id)arg1;

@property(nonatomic) long long imageCount; // @synthesize imageCount=_imageCount;

- (void)performActivity;

- (void)prepareWithActivityItems:(id)arg1;

@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;



@end

