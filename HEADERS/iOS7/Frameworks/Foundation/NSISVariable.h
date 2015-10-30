/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSISVariable : NSObject
{
    id <NSISVariableDelegate> _delegate;
    int _refCount;
    unsigned int _ident;
}

+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(_Bool)arg3;
@property id <NSISVariableDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)markedConstraint;
@property(readonly) _Bool shouldBeMinimized;
@property(readonly) int valueRestriction;
- (_Bool)valueIsUserVisible;
- (_Bool)markedConstraintIsEligibleForIntegralizationAdjustment;
- (double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (_Bool)shouldBeIntegral;
- (id)description;
- (unsigned long long)hash;
- (id)init;

@end
