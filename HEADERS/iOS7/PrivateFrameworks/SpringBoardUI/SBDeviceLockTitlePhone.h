/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpringBoardUI/SBDeviceLockTitle.h>

@class TPLegacyLCDView;

@interface SBDeviceLockTitlePhone : SBDeviceLockTitle
{
    _Bool _highlighted;
    TPLegacyLCDView *_lcdView;
}

- (void)blinkSubtitle;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isHighlighted;
- (void)dealloc;
- (id)_initWithStyle:(int)arg1 interfaceOrientation:(long long)arg2;

@end
