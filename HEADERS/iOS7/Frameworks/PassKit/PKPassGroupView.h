/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PKGroupDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WLCardViewDelegate-Protocol.h"

@class NSMutableDictionary, PKGroup, PKPassView, PKReusablePassViewQueue, UIInterpolatingMotionEffect, UILongPressGestureRecognizer, UIPageControl, UIPanGestureRecognizer, UIScrollView;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *_passViewsByUniqueID;
    PKReusablePassViewQueue *_passViewQueue;
    int _presentationState;
    UIScrollView *_horizontalScrollView;
    UIPageControl *_pageControl;
    unsigned long long _displayIndex;
    UIView *_dimmerView;
    double _dimmerValue;
    _Bool _showPageControl;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _canPan;
    UIInterpolatingMotionEffect *_horizontalMotionEffect;
    UIInterpolatingMotionEffect *_verticalMotionEffect;
    PKGroup *_group;
    id <PKPassGroupViewDelegate> _delegate;
    double _verticalMotionRelativeValue;
    double _horizontalMotionRelativeValue;
}

@property(nonatomic) double horizontalMotionRelativeValue; // @synthesize horizontalMotionRelativeValue=_horizontalMotionRelativeValue;
@property(nonatomic) double verticalMotionRelativeValue; // @synthesize verticalMotionRelativeValue=_verticalMotionRelativeValue;
@property(readonly, nonatomic) id <PKPassGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) PKReusablePassViewQueue *passViewQueue; // @synthesize passViewQueue=_passViewQueue;
@property(retain, nonatomic) PKGroup *group; // @synthesize group=_group;
- (_Bool)passViewBackGrowsCentered:(id)arg1;
- (void)passView:(id)arg1 flipButtonPressedForPass:(id)arg2;
- (_Bool)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passViewDidFlip:(id)arg1 animated:(_Bool)arg2;
- (_Bool)passViewShouldFlip:(id)arg1;
- (void)passViewTapped:(id)arg1;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_removePanAndLongPressGestureRecognizers;
- (void)_addPanAndLongPressGestureRecognizers;
- (long long)_defaultContentModeForIndex:(unsigned long long)arg1;
- (void)_showFrontmostPassOnly:(_Bool)arg1;
- (void)_setupPageControl;
- (id)_uniqueIDsOfVisibleCards;
- (struct _NSRange)_rangeOfVisibleIndexes;
- (id)_loadCardViewForUniqueID:(id)arg1;
- (id)_loadCardViewForIndex:(unsigned long long)arg1 contentMode:(long long)arg2;
- (void)_tilePagesEagerly:(_Bool)arg1;
- (void)_loadNeededViews;
- (void)_evictUnusedViews;
- (void)_updatePageControl;
- (void)_pageControlChanged:(id)arg1;
- (struct CGRect)_fanningFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)_pagingFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_enumerateCardViewsByStackOrderWithBlock:(id)arg1;
- (id)_stackIndexesFromVisibleIndexes:(struct _NSRange)arg1;
- (void)_setupViewsForPileWithAnimation:(_Bool)arg1 resizeCards:(_Bool)arg2;
- (void)_setupViewsForFanningWithAnimation:(_Bool)arg1 resizeCards:(_Bool)arg2;
- (void)_setupViewsForPagingWithAnimation:(_Bool)arg1 resizeCards:(_Bool)arg2;
- (void)_setupViewsForStackingWithAnimation:(_Bool)arg1 scrolling:(_Bool)arg2 resizeCards:(_Bool)arg3;
- (struct CGSize)_contentSize;
- (void)setHorizontalMotionEnabled:(_Bool)arg1;
- (void)setVerticalMotionEnabled:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)flipPassViewForPass:(id)arg1 animated:(_Bool)arg2 fromLeft:(_Bool)arg3;
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
- (void)applyDefaultModeForPassesWithDuration:(double)arg1;
- (void)setPresentationState:(int)arg1 animated:(_Bool)arg2 resizePasses:(_Bool)arg3;
- (void)setPresentationState:(int)arg1 animated:(_Bool)arg2;
- (void)setShowPageControlWithAnimation:(_Bool)arg1 duration:(double)arg2 delay:(double)arg3;
@property(readonly, nonatomic) unsigned long long displayIndex; // @synthesize displayIndex=_displayIndex;
@property(readonly, nonatomic) UIPageControl *pageControl;
@property(readonly, nonatomic) PKPassView *frontmostPassView;
- (id)groupID;
- (void)dealloc;
- (void)removeFromSuperview;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 contentMode:(long long)arg3;

@end
