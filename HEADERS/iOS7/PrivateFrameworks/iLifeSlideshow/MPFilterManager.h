/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface MPFilterManager : NSObject
{
    NSMutableDictionary *mFilters;
    NSArray *mFilterCategories;
    NSMutableDictionary *mFilterPresets;
}

+ (void)releaseSharedManager;
+ (id)sharedManager;
- (id)animationsForFilterID:(id)arg1 andPresetID:(id)arg2;
- (id)attributesForFilterID:(id)arg1 andPresetID:(id)arg2;
- (id)presetIDsForFilterID:(id)arg1;
- (id)filterCategoryIDs;
- (id)filterIDsForCategoryID:(id)arg1;
- (id)versionOfFilterID:(id)arg1;
- (id)allFilterIDs;
- (void)dealloc;

@end
