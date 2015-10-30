//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, NSIndexSet, NSString, UIColor, UIFont;

@interface EKDayOccurrenceContentView : UIView
{
    NSString *_title;
    NSString *_location;
    UIColor *_color;
    UIColor *_titleTextColor;
    UIColor *_timeTextColor;
    UIColor *_secondaryTextColor;
    UIColor *_textBackgroundColor;
    UIColor *_statusTextColor;
    NSIndexSet *_titleMetrics;
    struct CGPoint _titleEndPoint;
    float _textEndY;
    struct CGRect _titleRect;
    struct CGRect _fullTextRect;
    NSAttributedString *_attributedContentString;
    unsigned int _fontCompressionDegree;
    UIFont *_cachedPrimaryFont;
    float _cachedLineHeight;
    float _minimumCachedLineHeight;
    UIFont *_cachedSecondaryFont;
    float _cachedSecondaryLineHeight;
    float _cachedPrimaryFontTopOutset;
    float _cachedPrimaryFontBottomOutset;
    BOOL _allDay;
    BOOL _birthday;
    BOOL _facebook;
    BOOL _cancelled;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _selected;
    BOOL _allDayDrawingStyle;
    BOOL _usesSmallText;
    BOOL _hideText;
    BOOL _reduceProcessingForAnimation;
    NSString *_time;
    int _occurrenceBackgroundStyle;
}

+ (id)defaultSecondaryTextFont;
+ (id)defaultSmallPrimaryTextFont;
+ (id)defaultPrimaryTextFont;
+ (Class)layerClass;
@property(nonatomic) BOOL reduceProcessingForAnimation; // @synthesize reduceProcessingForAnimation=_reduceProcessingForAnimation;
@property(nonatomic) int occurrenceBackgroundStyle; // @synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle;
@property(nonatomic) BOOL hideText; // @synthesize hideText=_hideText;
@property(nonatomic) BOOL usesSmallText; // @synthesize usesSmallText=_usesSmallText;
@property(nonatomic, getter=isAllDayDrawingStyle) BOOL allDayDrawingStyle; // @synthesize allDayDrawingStyle=_allDayDrawingStyle;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL needsReply; // @synthesize needsReply=_needsReply;
@property(nonatomic, getter=isDeclined) BOOL declined; // @synthesize declined=_declined;
@property(nonatomic, getter=isTentative) BOOL tentative; // @synthesize tentative=_tentative;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isFacebook) BOOL facebook; // @synthesize facebook=_facebook;
@property(nonatomic, getter=isBirthday) BOOL birthday; // @synthesize birthday=_birthday;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)hasIcon;
- (id)_timeTextFont;
- (id)_statusTextFont;
- (id)_secondaryTextFont;
- (float)_secondaryFontLineHeight;
- (float)_minimumPrimaryFontLineHeight;
- (float)_primaryFontLineHeight;
- (id)_primaryTextFont;
@property(retain, nonatomic) UIColor *textBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *timeTextColor;
@property(retain, nonatomic) UIColor *titleTextColor;
- (id)statusTextColor;
- (id)_secondaryText;
- (id)_timeText;
- (id)_statusText;
- (id)strikethroughColor;
- (void)_getLanguageAwareOutsets;
- (struct CGSize)_spaceForText;
- (struct CGRect)_frameForText;
- (float)bottomTextOutset;
- (float)topTextOutset;
- (float)minimumNaturalHeightAllText;
- (float)minimumNaturalHeightForPrimaryText;
- (float)textNaturalWidth;
- (id)attributedContentString;
- (id)attributedContentStringUnconstrained:(BOOL)arg1;
- (float)_attributedStringMinimumLineHeightBasedOnCurrentFontMetrics;
- (float)attributedStringMinimumLineHeight;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)stringDrawingContext;
- (void)invalidateCachedFontMetrics;
- (void)_invalidateCachedFonts;
- (void)_invalidateMetrics;
- (id)initWithContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;

@end
