/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPAVDestinationBrowser : NSObject
{
    _Bool _scansForDestinationsWhenEnteringForeground;
    _Bool _isScanning;
}

- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
@property(nonatomic) _Bool scansForDestinationsWhenEnteringForeground;
- (void)endScanningForDestinations;
- (void)beginScanningForDestinations;
- (void)dealloc;
- (id)init;

@end
