/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIViewController (EmbeddedViewSupport)
- (void)_unembedContentView;
- (void)_embedContentViewInView:(id)arg1 withContentFrame:(struct CGRect)arg2 delegate:(id)arg3;
- (void)_unembedContentViewSettingDelegate:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <_UIViewControllerContentViewEmbedding> _embeddedDelegate; // @dynamic _embeddedDelegate;
@property(readonly, nonatomic) UIView *_embeddedView; // @dynamic _embeddedView;
@end

