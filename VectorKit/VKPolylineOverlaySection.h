/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKPolylineOverlaySection : NSObject

{

    unsigned long long _startPointIndex;

    unsigned long long _pointCount;

    Vec2Imp_1782d7e3 *_points;

    CDStruct_aca18c62 _bounds;

    int _transportType;

}



- (id).cxx_construct;

@property(readonly, nonatomic) CDStruct_d2b197d1 bounds; // @synthesize bounds=_bounds;

- (void)dealloc;

@property(readonly, nonatomic) unsigned long long endPointIndex;

- (id)initWithRoute:(id)arg1 startPoint:(unsigned long long)arg2 pointCount:(unsigned long long)arg3 bounds:(CDStruct_d2b197d1)arg4 transportType:(int)arg5;

@property(readonly, nonatomic) unsigned long long pointCount; // @synthesize pointCount=_pointCount;

@property(readonly, nonatomic) Vec2Imp_1782d7e3 *points; // @synthesize points=_points;

@property(readonly, nonatomic) unsigned long long startPointIndex; // @synthesize startPointIndex=_startPointIndex;

@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;



@end


