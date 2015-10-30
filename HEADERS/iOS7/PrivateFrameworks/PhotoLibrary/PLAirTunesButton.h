/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationButton.h"

@interface PLAirTunesButton : UINavigationButton
{
    int _mode;
    _Bool _isInMiniBar;
}

@property(nonatomic) _Bool isInMiniBar; // @synthesize isInMiniBar=_isInMiniBar;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)updateForMiniBarState:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithAirTunesMode:(int)arg1;
- (void)_setImagesForMode:(int)arg1 miniBar:(_Bool)arg2;
- (id)_imageNameForMode:(int)arg1 isInMinibar:(_Bool)arg2;

@end
