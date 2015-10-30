/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ImageCapture/ICCameraFile.h>

@class NSString;

@interface PTPCameraFile : ICCameraFile
{
    void *_ptpCameraFileProperties;
    NSString *_path;
}

@property(retain) NSString *path; // @synthesize path=_path;
- (id)metadataDict;
- (id)thumbData;
- (int)writeDataToFile:(int)arg1 fromOffset:(long long)arg2 ofLength:(long long *)arg3;
@property(copy) id info;
@property(readonly) unsigned int objHandle;
@property(readonly) unsigned int storageID;
@property(readonly) unsigned long long type;
- (void)finalize;
- (void)dealloc;
- (id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 type:(unsigned long long)arg4 storageID:(unsigned int)arg5 objectHandle:(unsigned int)arg6;

@end
