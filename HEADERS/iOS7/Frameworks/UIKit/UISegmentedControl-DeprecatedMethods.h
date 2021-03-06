/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UISegmentedControl.h>

@interface UISegmentedControl (DeprecatedMethods)
+ (double)defaultHeight;
- (long long)selectedSegment;
- (void)setSelectedSegment:(long long)arg1;
- (_Bool)isEnabledForSegment:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1 forSegment:(unsigned long long)arg2;
- (struct CGSize)contentOffsetForSegment:(unsigned long long)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (float)widthForSegment:(unsigned long long)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned long long)arg2;
- (id)imageForSegment:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned long long)arg2;
- (id)titleForSegment:(unsigned long long)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned long long)arg2;
- (void)removeSegment:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)insertSegment:(unsigned long long)arg1 withImage:(id)arg2 animated:(_Bool)arg3;
- (void)insertSegment:(unsigned long long)arg1 withTitle:(id)arg2 animated:(_Bool)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)selectSegment:(int)arg1;
- (void)setImagePadding:(struct CGSize)arg1 forSegment:(unsigned long long)arg2;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(long long)arg2 withItems:(id)arg3;
@end

