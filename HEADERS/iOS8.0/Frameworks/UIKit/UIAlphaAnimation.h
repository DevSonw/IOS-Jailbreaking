//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAnimation.h>

@interface UIAlphaAnimation : UIAnimation
{
    float _startAlpha;
    float _endAlpha;
}

- (float)alphaForFraction:(float)arg1;
- (void)setProgress:(float)arg1;
- (float)_alphaForMultiplier:(float)arg1;
- (void)setEndAlpha:(float)arg1;
- (void)setStartAlpha:(float)arg1;

@end
