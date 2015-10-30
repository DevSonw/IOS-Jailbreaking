/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CAContext.h>

// Not exported
@interface CAContextImpl : CAContext
{
    struct Context *_impl;
}

- (struct Context *)renderContext;
- (void)setObject:(id)arg1 forSlot:(unsigned int)arg2;
- (void)deleteSlot:(unsigned int)arg1;
- (unsigned int)createImageSlot:(struct CGSize)arg1 hasAlpha:(_Bool)arg2;
- (unsigned int)createSlot;
- (void)setFence:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)setFencePort:(unsigned int)arg1 commitHandler:(id)arg2;
- (void)setFencePort:(unsigned int)arg1;
- (unsigned int)createFencePort;
- (_Bool)valid;
- (id)options;
- (float)level;
- (void)setLevel:(float)arg1;
- (void)orderBelow:(unsigned int)arg1;
- (void)orderAbove:(unsigned int)arg1;
- (void)setLayer:(id)arg1;
- (id)layer;
- (void)setColorSpace:(struct CGColorSpace *)arg1;
- (struct CGColorSpace *)colorSpace;
- (unsigned int)contextId;
- (void)dealloc;
- (void)invalidate;
- (id)initRemoteWithOptions:(id)arg1;
- (id)initWithOptions:(id)arg1 localContext:(_Bool)arg2;

@end
