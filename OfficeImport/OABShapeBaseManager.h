/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "OABFillPropertiesManager.h"


#import "OABBasePropertiesManager.h"



__attribute__((visibility("hidden")))

@interface OABShapeBaseManager : OABFillPropertiesManager <OABBasePropertiesManager>

{

    struct EshShapeBase *mShapeBase;

}



- (void)dealloc;

- (id)initWithShapeBase:(struct EshShapeBase *)arg1 shapeType:(int)arg2 masterShape:(struct EshShape *)arg3;

- (_Bool)isShadowed;

- (_Bool)isStroked;

- (int)shadowAlpha;

- (struct EshColor)shadowColor;

- (int)shadowOffsetX;

- (int)shadowOffsetY;

- (int)shadowSoftness;

- (int)shadowType;

- (struct EshColor)strokeBgColor;

- (int)strokeCapStyle;

- (int)strokeCompoundType;

- (const struct EshTablePropVal<int> *)strokeCustomDash;

- (int)strokeEndArrowLength;

- (int)strokeEndArrowType;

- (int)strokeEndArrowWidth;

- (int)strokeFgAlpha;

- (struct EshColor)strokeFgColor;

- (unsigned int)strokeFillBlipID;

- (id)strokeFillBlipName;

- (int)strokeFillType;

- (int)strokeJoinStyle;

- (int)strokeMiterLimit;

- (int)strokePresetDash;

- (int)strokeStartArrowLength;

- (int)strokeStartArrowType;

- (int)strokeStartArrowWidth;

- (int)strokeWidth;



@end


