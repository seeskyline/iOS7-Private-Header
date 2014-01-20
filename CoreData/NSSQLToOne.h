/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSSQLRelationship.h"


@class NSSQLForeignEntityKey, NSSQLForeignKey, NSSQLForeignOrderKey;



__attribute__((visibility("hidden")))

@interface NSSQLToOne : NSSQLRelationship

{

    NSSQLForeignKey *_foreignKey;

    NSSQLForeignEntityKey *_foreignEntityKey;

    NSSQLForeignOrderKey *_foreignOrderKey;

    unsigned int _slot;

    _Bool _isVirtual;

}



- (void)_setForeignOrderKey:(id)arg1;

- (id)columnName;

- (void)copyValuesForReadOnlyFetch:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)foreignEntityKey;

- (id)foreignKey;

- (id)foreignOrderKey;

- (id)initForReadOnlyFetchWithEntity:(id)arg1 propertyDescription:(id)arg2;

- (id)initWithEntity:(id)arg1 inverseToMany:(id)arg2;

- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;

- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 virtualForToMany:(id)arg3;

- (_Bool)isOptional;

- (_Bool)isVirtual;

- (unsigned int)slot;



@end

