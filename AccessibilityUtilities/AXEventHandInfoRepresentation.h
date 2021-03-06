/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "NSSecureCoding.h"



@class NSArray;



@interface AXEventHandInfoRepresentation : NSObject <NSSecureCoding, NSCopying>

{

    unsigned char _systemGesturePossible;

    unsigned char _swipe;

    unsigned short _initialFingerCount;

    unsigned short _currentFingerCount;

    unsigned int _eventType;

    unsigned int _handIdentity;

    unsigned int _handIndex;

    unsigned int _handEventMask;

    NSArray *_paths;

    struct CGPoint _handPosition;

}



+ (id)representationWithHandInfo:(CDStruct_f2c5c900 *)arg1;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) unsigned short currentFingerCount; // @synthesize currentFingerCount=_currentFingerCount;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) unsigned int eventType; // @synthesize eventType=_eventType;

@property(nonatomic) unsigned int handEventMask; // @synthesize handEventMask=_handEventMask;

@property(nonatomic) unsigned int handIdentity; // @synthesize handIdentity=_handIdentity;

@property(nonatomic) unsigned int handIndex; // @synthesize handIndex=_handIndex;

@property(nonatomic) struct CGPoint handPosition; // @synthesize handPosition=_handPosition;

- (id)initWithCoder:(id)arg1;

@property(nonatomic) unsigned short initialFingerCount; // @synthesize initialFingerCount=_initialFingerCount;

- (unsigned long long)length;

@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;

@property(nonatomic) unsigned char swipe; // @synthesize swipe=_swipe;

@property(nonatomic) unsigned char systemGesturePossible; // @synthesize systemGesturePossible=_systemGesturePossible;

- (void)writeToHandInfo:(CDStruct_f2c5c900 *)arg1;



@end


