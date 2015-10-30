//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXUIAlertStyleProvider.h"

@class NSBundle;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider>
{
    NSBundle *_bundle;
}

@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (double)alertFadeAnimationDurationForType:(unsigned int)arg1;
- (BOOL)alertShouldBeAsWideAsScreenForType:(unsigned int)arg1;
- (int)alertPositionForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertEdgeInsetsForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertIconImageViewEdgeInsetsForType:(unsigned int)arg1;
- (float)alertSubtitleTextLabelVerticalSpacingHeightWithTextLabelForType:(unsigned int)arg1;
- (float)alertSubtitleTextLabelLineHeightOffsetForType:(unsigned int)arg1;
- (struct UIOffset)alertSubtitleTextLabelShadowOffsetForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelShadowColorForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelBackgroundColorForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelTextColorForType:(unsigned int)arg1;
- (id)alertSubtitleTextLabelFontForType:(unsigned int)arg1;
- (float)alertTextLabelLineHeightOffsetForType:(unsigned int)arg1;
- (struct UIOffset)alertTextLabelShadowOffsetForType:(unsigned int)arg1;
- (id)alertTextLabelShadowColorForType:(unsigned int)arg1;
- (id)alertTextLabelBackgroundColorForType:(unsigned int)arg1;
- (id)alertTextLabelTextColorForType:(unsigned int)arg1;
- (id)alertTextLabelFontForType:(unsigned int)arg1;
- (struct UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned int)arg1;
- (struct CGSize)alertBackgroundSizeForType:(unsigned int)arg1;
- (float)alertBackgroundCornerRadiusForType:(unsigned int)arg1;
- (int)alertBackgroundStyleForType:(unsigned int)arg1;
- (void)dealloc;

@end
