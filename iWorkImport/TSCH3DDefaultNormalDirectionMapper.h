/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DNormalDirectionMapper.h"


__attribute__((visibility("hidden")))

@interface TSCH3DDefaultNormalDirectionMapper : TSCH3DNormalDirectionMapper

{

    tvec3_17f03ce0 mNormalBias;

}



+ (id)mapperWithNormalBias:(const tvec3_17f03ce0 *)arg1;

- (id).cxx_construct;

- (id)initWithNormalBias:(const tvec3_17f03ce0 *)arg1;

- (void)mapFromVertexArray:(const tvec3_17f03ce0 *)arg1 normalArray:(const tvec3_17f03ce0 *)arg2 normalMatrix:(const tmat3x3_b39cd897 *)arg3 numVertices:(long long)arg4 destination:(vector_a3426c4e *)arg5;



@end


