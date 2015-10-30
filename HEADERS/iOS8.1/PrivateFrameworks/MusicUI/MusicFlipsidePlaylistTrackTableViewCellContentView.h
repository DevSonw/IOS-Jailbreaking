//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicSongListTableViewCellContentView.h>

@class NSString, UILabel;

@interface MusicFlipsidePlaylistTrackTableViewCellContentView : MusicSongListTableViewCellContentView
{
    UILabel *_durationLabel;
    UILabel *_trackNumberLabel;
    NSString *_durationText;
    float _maximumDurationWidth;
    NSString *_trackNumberText;
}

+ (id)trackNumberTextAttributes;
+ (struct CGSize)sizeForDuration:(double)arg1;
+ (id)durationTextAttributes;
+ (float)textLeadingDistance;
+ (void)contentSizeCategoryDidChange;
+ (struct CGSize)artworkSize;
@property(copy, nonatomic) NSString *trackNumberText; // @synthesize trackNumberText=_trackNumberText;
@property(nonatomic) float maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
@property(copy, nonatomic) NSString *durationText; // @synthesize durationText=_durationText;
- (void).cxx_destruct;
- (float)rightContentInset;
- (id)rightAccessoryViews;
- (BOOL)updateLabelFonts;
- (void)reloadContent;
- (void)setPlaybackState:(int)arg1;
- (void)setDisplayAsDisabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;

@end
