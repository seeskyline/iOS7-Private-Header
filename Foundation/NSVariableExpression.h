/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSExpression.h"


@class NSString;



@interface NSVariableExpression : NSExpression

{

    NSString *_variable;

}



+ (_Bool)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;

- (unsigned long long)hash;

- (id)initWithCoder:(id)arg1;

- (id)initWithObject:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)predicateFormat;

- (id)variable;



@end

