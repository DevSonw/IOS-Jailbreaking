/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString, NSURL;

@interface PLFilesystemDeletionInfo : NSObject
{
    NSURL *_objectIDURI;
    NSArray *_fileURLs;
    unsigned long long _thumbnailIndex;
    NSString *_thumbnailIdentifier;
    NSString *_uuid;
    unsigned long long _timestamp;
}

+ (id)deletionInfoWithAsset:(id)arg1;
@property(readonly) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly) NSString *thumbnailIdentifier; // @synthesize thumbnailIdentifier=_thumbnailIdentifier;
@property(readonly) unsigned long long thumbnailIndex; // @synthesize thumbnailIndex=_thumbnailIndex;
@property(readonly) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(readonly) NSURL *objectIDURI; // @synthesize objectIDURI=_objectIDURI;
- (id)description;
- (void)dealloc;
- (id)initWithObjectIDURI:(id)arg1 fileURLs:(id)arg2 thumbnailIndex:(unsigned long long)arg3 thumbnailIdentifier:(id)arg4 uuid:(id)arg5 timestamp:(unsigned long long)arg6;

@end
