/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TIMecabraCandidate.h"


@interface TIMecabraCandidateTruncated : TIMecabraCandidate

{

    unsigned long long _truncatedLength;

}



+ (_Bool)supportsSecureCoding;

+ (int)type;

- (id)candidate;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)encodeWithCandidateResultSetCoder:(id)arg1;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(_Bool)arg4 isEmoji:(_Bool)arg5 isShortcut:(_Bool)arg6;

- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(_Bool)arg4 isEmoji:(_Bool)arg5 isShortcut:(_Bool)arg6 maximumAllowedNumberOfCharacters:(unsigned long long)arg7;

- (id)initWithCandidateResultSetCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;



@end


