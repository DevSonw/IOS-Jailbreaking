/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
{
}

+ (id)artworkCacheIDProperty;
+ (id)trackForeignPersistentID;
+ (id)propertiesForGroupingKey;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (_Bool)propertyIsCountProperty:(id)arg1;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (id)allProperties;
+ (id)predisambiguatedProperties;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)defaultOrderingProperties;
+ (long long)revisionTrackingCode;
+ (id)databaseTable;
+ (void)initialize;
- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end
