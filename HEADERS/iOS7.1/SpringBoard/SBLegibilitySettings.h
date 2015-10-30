//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UISettings.h"

@interface SBLegibilitySettings : _UISettings
{
    double _slideToUnlockDarkShadowStrength;
    double _slideToUnlockLightShadowStrength;
    double _cameraGrabberDarkShadowStrength;
    double _cameraGrabberLightShadowStrength;
    double _timeDarkShadowStrength;
    double _timeLightShadowStrength;
    double _dateDarkShadowStrength;
    double _dateLightShadowStrength;
    double _legalDarkShadowStrength;
    double _legalLightShadowStrength;
    double _iconLabelDarkShadowStrength;
    double _iconLabelLightShadowStrength;
    double _folderTitleDarkShadowStrength;
    double _folderTitleLightShadowStrength;
    double _timerTextDarkShadowStrength;
    double _timerTextLightShadowStrength;
    double _timerDialDarkShadowStrength;
    double _timerDialLightShadowStrength;
}

+ (id)settingsControllerModule;
@property double timerDialLightShadowStrength; // @synthesize timerDialLightShadowStrength=_timerDialLightShadowStrength;
@property double timerDialDarkShadowStrength; // @synthesize timerDialDarkShadowStrength=_timerDialDarkShadowStrength;
@property double timerTextLightShadowStrength; // @synthesize timerTextLightShadowStrength=_timerTextLightShadowStrength;
@property double timerTextDarkShadowStrength; // @synthesize timerTextDarkShadowStrength=_timerTextDarkShadowStrength;
@property double folderTitleLightShadowStrength; // @synthesize folderTitleLightShadowStrength=_folderTitleLightShadowStrength;
@property double folderTitleDarkShadowStrength; // @synthesize folderTitleDarkShadowStrength=_folderTitleDarkShadowStrength;
@property double iconLabelLightShadowStrength; // @synthesize iconLabelLightShadowStrength=_iconLabelLightShadowStrength;
@property double iconLabelDarkShadowStrength; // @synthesize iconLabelDarkShadowStrength=_iconLabelDarkShadowStrength;
@property double legalLightShadowStrength; // @synthesize legalLightShadowStrength=_legalLightShadowStrength;
@property double legalDarkShadowStrength; // @synthesize legalDarkShadowStrength=_legalDarkShadowStrength;
@property double dateLightShadowStrength; // @synthesize dateLightShadowStrength=_dateLightShadowStrength;
@property double dateDarkShadowStrength; // @synthesize dateDarkShadowStrength=_dateDarkShadowStrength;
@property double timeLightShadowStrength; // @synthesize timeLightShadowStrength=_timeLightShadowStrength;
@property double timeDarkShadowStrength; // @synthesize timeDarkShadowStrength=_timeDarkShadowStrength;
@property double cameraGrabberLightShadowStrength; // @synthesize cameraGrabberLightShadowStrength=_cameraGrabberLightShadowStrength;
@property double cameraGrabberDarkShadowStrength; // @synthesize cameraGrabberDarkShadowStrength=_cameraGrabberDarkShadowStrength;
@property double slideToUnlockLightShadowStrength; // @synthesize slideToUnlockLightShadowStrength=_slideToUnlockLightShadowStrength;
@property double slideToUnlockDarkShadowStrength; // @synthesize slideToUnlockDarkShadowStrength=_slideToUnlockDarkShadowStrength;
- (double)timerDialStrengthForStyle:(long long)arg1;
- (double)timerTextStrengthForStyle:(long long)arg1;
- (double)folderTitleStrengthForStyle:(long long)arg1;
- (double)iconLabelStrengthForStyle:(long long)arg1;
- (double)legalStrengthForStyle:(long long)arg1;
- (double)dateStrengthForStyle:(long long)arg1;
- (double)timeStrengthForStyle:(long long)arg1;
- (double)cameraGrabberStrengthForStyle:(long long)arg1;
- (double)slideToUnlockStrengthForStyle:(long long)arg1;
- (void)setDefaultValues;

@end
