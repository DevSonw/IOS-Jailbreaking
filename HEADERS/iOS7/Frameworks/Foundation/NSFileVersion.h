/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface NSFileVersion : NSObject
{
    NSURL *_fileURL;
    id _library;
    NSString *_clientID;
    NSString *_name;
    NSURL *_contentsURL;
    _Bool _isBackup;
    NSString *_localizedName;
    NSString *_localizedComputerName;
    NSDate *_modificationDate;
    _Bool _isResolved;
    _Bool _contentsURLIsAccessed;
    id _reserved1;
    id _reserved2;
    _Bool _discardable;
}

+ (_Bool)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (id)currentVersionOfItemAtURL:(id)arg1;
@property(getter=isDiscardable) _Bool discardable; // @synthesize discardable=_discardable;
- (_Bool)removeAndReturnError:(id *)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(getter=isResolved) _Bool resolved;
@property(readonly, getter=isConflict) _Bool conflict;
@property(readonly) id <NSCoding> persistentIdentifier;
@property(readonly) NSDate *modificationDate;
@property(readonly) NSString *localizedNameOfSavingComputer;
@property(readonly) NSString *localizedName;
@property(readonly) NSURL *URL;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
