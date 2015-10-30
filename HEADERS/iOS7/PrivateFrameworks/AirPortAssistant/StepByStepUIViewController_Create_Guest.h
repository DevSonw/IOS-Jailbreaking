/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AirPortAssistant/StepByStepUIViewController.h>

#import "TableViewManagerDelegate-Protocol.h"

@class NSString;

@interface StepByStepUIViewController_Create_Guest : StepByStepUIViewController <TableViewManagerDelegate>
{
    NSString *_wifiName;
    NSString *_wifiPassword;
    _Bool _guestNetworkEnabled;
    int _guestNetSecMode;
}

@property(nonatomic) int guestNetSecMode; // @synthesize guestNetSecMode=_guestNetSecMode;
@property(nonatomic) _Bool guestNetworkEnabled; // @synthesize guestNetworkEnabled=_guestNetworkEnabled;
@property(copy, nonatomic) NSString *wifiPassword; // @synthesize wifiPassword=_wifiPassword;
@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
- (void)textFieldDidChangeAtIndexPath:(id)arg1;
- (_Bool)shouldChangeTextField:(id)arg1 atIndexPath:(id)arg2 forTextIndex:(unsigned long long)arg3 toString:(id)arg4;
- (void)switchTouchedInCellAtIndexPath:(id)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(_Bool)arg3;
- (_Bool)validateAndSetValues;
- (void)setupInitialTableHeaderConfiguration;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
