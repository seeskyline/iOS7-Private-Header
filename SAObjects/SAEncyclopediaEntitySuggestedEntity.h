/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class NSString;



@interface SAEncyclopediaEntitySuggestedEntity : AceObject <SAAceSerializable>

{

}



+ (id)suggestedEntity;

+ (id)suggestedEntityWithDictionary:(id)arg1 context:(id)arg2;

@property(retain, nonatomic) id <SAClientBoundCommand> command;

- (id)encodedClassName;

- (id)groupIdentifier;

@property(copy, nonatomic) NSString *name;



@end

