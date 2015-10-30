/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIToolbar.h"

@interface PLToolbar : UIToolbar
{
    unsigned int _backgroundHidden:1;
    unsigned int _backgroundAlwaysVisible:1;
    UIToolbar *_persistentToolbar;
}

@property(nonatomic, getter=isBackgroundAlwaysVisible) _Bool backgroundAlwaysVisible;
@property(nonatomic, getter=isBackgroundHidden) _Bool backgroundHidden;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

@end
