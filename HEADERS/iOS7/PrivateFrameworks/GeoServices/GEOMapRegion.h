/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

@interface GEOMapRegion : PBCodable <NSCopying>
{
    double _eastLng;
    double _northLat;
    double _southLat;
    double _westLng;
    NSMutableArray *_vertexs;
    struct {
        unsigned int eastLng:1;
        unsigned int northLat:1;
        unsigned int southLat:1;
        unsigned int westLng:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *vertexs; // @synthesize vertexs=_vertexs;
@property(nonatomic) double eastLng; // @synthesize eastLng=_eastLng;
@property(nonatomic) double northLat; // @synthesize northLat=_northLat;
@property(nonatomic) double westLng; // @synthesize westLng=_westLng;
@property(nonatomic) double southLat; // @synthesize southLat=_southLat;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (unsigned long long)vertexsCount;
- (void)addVertex:(id)arg1;
- (void)clearVertexs;
@property(nonatomic) _Bool hasEastLng;
@property(nonatomic) _Bool hasNorthLat;
@property(nonatomic) _Bool hasWestLng;
@property(nonatomic) _Bool hasSouthLat;
- (void)dealloc;

@end
