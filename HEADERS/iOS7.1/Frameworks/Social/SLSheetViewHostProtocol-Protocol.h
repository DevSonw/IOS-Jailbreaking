//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSNumber;

@protocol SLSheetViewHostProtocol
- (void)shouldShowNetworkActivityIndicator:(NSNumber *)arg1;
- (void)sheetDidSendWithSucess:(NSNumber *)arg1 error:(NSError *)arg2;
- (void)sheetFailedWithError:(NSError *)arg1;
- (void)userDidPost;
- (void)userDidCancel;

@optional
- (void)userDidCancelWithoutAnimation;
@end
