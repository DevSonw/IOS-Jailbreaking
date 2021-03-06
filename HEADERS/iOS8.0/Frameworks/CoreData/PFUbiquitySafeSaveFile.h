//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_semaphore>, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquitySafeSaveFile : NSObject
{
    PFUbiquityLocation *_permanentLocation;
    PFUbiquityLocation *_safeSaveLocation;
    PFUbiquityLocation *_currentLocation;
    NSString *_localPeerID;
    BOOL _continueCheckingDownload;
    BOOL _downloadSuccess;
    NSError *_downloadError;
    BOOL _continueCheckingUpload;
    BOOL _safeSaveSuccess;
    BOOL _moveAfterSave;
    NSError *_safeSaveError;
    NSObject<OS_dispatch_semaphore> *_safeSaveSemaphore;
    BOOL _isRegistered;
}

@property(readonly, nonatomic) BOOL isRegistered; // @synthesize isRegistered=_isRegistered;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(readonly, nonatomic) BOOL downloadSuccess; // @synthesize downloadSuccess=_downloadSuccess;
@property(readonly, nonatomic) BOOL continueCheckingDownload; // @synthesize continueCheckingDownload=_continueCheckingDownload;
@property(readonly, nonatomic) BOOL continueCheckingUpload; // @synthesize continueCheckingUpload=_continueCheckingUpload;
@property(readonly, nonatomic) BOOL moveAfterSave; // @synthesize moveAfterSave=_moveAfterSave;
@property(readonly, nonatomic) BOOL safeSaveSuccess; // @synthesize safeSaveSuccess=_safeSaveSuccess;
@property(readonly, nonatomic) NSError *safeSaveError; // @synthesize safeSaveError=_safeSaveError;
@property(retain, nonatomic) PFUbiquityLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) PFUbiquityLocation *safeSaveLocation; // @synthesize safeSaveLocation=_safeSaveLocation;
@property(readonly, nonatomic) PFUbiquityLocation *permanentLocation; // @synthesize permanentLocation=_permanentLocation;
- (void)setDownloadSuccess:(BOOL)arg1;
- (void)setDownloadError:(id)arg1;
- (void)downloadFinished;
- (void)checkFileDownload;
- (BOOL)waitForFileToDownload:(id *)arg1;
- (void)safeSaveFinishedUpload;
- (void)setSafeSaveSuccess:(BOOL)arg1;
- (void)setSafeSaveError:(id)arg1;
- (void)checkSafeSaveFileUploadAsync;
- (void)checkSafeSaveFileUpload;
- (BOOL)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (BOOL)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (BOOL)isFileDownloaded:(id *)arg1;
- (BOOL)isFileUploaded:(id *)arg1;
- (BOOL)moveToPermanentLocation:(id *)arg1;
- (BOOL)waitForFileToUpload:(id *)arg1;
- (BOOL)safeSaveFile:(BOOL)arg1 moveToPermanentLocation:(BOOL)arg2 error:(id *)arg3;
- (BOOL)removeFileFromLocation:(id)arg1 error:(id *)arg2;
- (BOOL)removeFile:(id *)arg1;
- (BOOL)writeFile:(id *)arg1;
- (BOOL)loadFile:(id *)arg1;
- (BOOL)downloadLatestVersion:(BOOL)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL existsInCloud;
@property(readonly, nonatomic) BOOL existsAtSafeSaveLocation;
@property(readonly, nonatomic) BOOL existsAtPermanentLocation;
- (id)description;
- (void)dealloc;
- (id)initWithPermanentLocation:(id)arg1 safeSaveLocation:(id)arg2 andLocalPeerID:(id)arg3;
- (id)init;

@end

