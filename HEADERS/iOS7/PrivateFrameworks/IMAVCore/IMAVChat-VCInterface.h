/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVChat.h>

@interface IMAVChat (VCInterface)
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(_Bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(_Bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(_Bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(_Bool)arg2;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(_Bool)arg2;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(_Bool)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (void)_vccInitDidFinish:(id)arg1;
@end

