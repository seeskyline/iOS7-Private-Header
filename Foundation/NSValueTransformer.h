/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface NSValueTransformer : NSObject

{

}



+ (id)_transformerRegistry;

+ (_Bool)allowsReverseTransformation;

+ (void)setValueTransformer:(id)arg1 forName:(id)arg2;

+ (Class)transformedValueClass;

+ (id)valueTransformerForName:(id)arg1;

+ (id)valueTransformerNames;

- (id)reverseTransformedValue:(id)arg1;

- (id)transformedValue:(id)arg1;



@end

