//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSFluidProgressController : NSObject
{
    id <WBSFluidProgressControllerDelegate> _delegate;
    id <WBSFluidProgressControllerWindowDelegate> _windowDelegate;
}

@property __weak id <WBSFluidProgressControllerWindowDelegate> windowDelegate; // @synthesize windowDelegate=_windowDelegate;
@property __weak id <WBSFluidProgressControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)progressStateSourceDidCommitLoad:(id)arg1 loadingSingleResource:(BOOL)arg2;
- (void)animationStepCompleted:(id)arg1;
- (void)frontmostTabDidChange;
- (void)startRocketEffectWithProgressStateSource:(id)arg1;
- (void)cancelFluidProgressWithProgressStateSource:(id)arg1;
- (void)finishFluidProgressWithProgressStateSource:(id)arg1;
- (void)updateFluidProgressWithProgressStateSource:(id)arg1;
- (void)startFluidProgressWithProgressStateSource:(id)arg1;
- (void)_updateFluidProgressWithProgressStateSource:(id)arg1;

@end
