/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSCH3DFillSetIdentifier, TSCH3DLightingModel, TSDFill;



__attribute__((visibility("hidden")))

@interface TSCHDEPRECATED3DFill : NSObject

{

    TSDFill *mFill;

    TSCH3DLightingModel *mLightingModel;

    TSCH3DFillSetIdentifier *mIdentifier;

}



+ (id)instanceWithArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;

- (id)convertToTSDFill;

- (void)dealloc;

- (id)initWithArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;

- (void)saveToArchive:(struct DEPRECATEDChart3DFillArchive *)arg1 archiver:(id)arg2;



@end


