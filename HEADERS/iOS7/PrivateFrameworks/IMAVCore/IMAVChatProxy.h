/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMHandle, NSArray, NSDate, NSDictionary, NSString;

@interface IMAVChatProxy : NSObject
{
    NSDictionary *_info;
}

- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)finalUpdate;
- (void)endChat;
- (void)declineInvitation;
- (void)cancelInvitation;
- (void)acceptInvitation;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
@property(readonly, nonatomic) int endedError;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isCaller;
@property(readonly, nonatomic) _Bool isActive;
- (_Bool)_isProxy;
@property(readonly, nonatomic) IMHandle *otherIMHandle;
@property(readonly, nonatomic) IMHandle *initiatorIMHandle;
@property(readonly, nonatomic) NSArray *remoteParticipants;
@property(readonly, nonatomic) NSDate *dateEnded;
@property(readonly, nonatomic) NSDate *dateConnected;
@property(readonly, nonatomic) _Bool isStateFinal;
@property(readonly, nonatomic) unsigned int state;
@property(readonly, nonatomic) NSString *conferenceID;
@property(readonly, nonatomic) long long callID;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, nonatomic) NSString *GUID;
- (id)account;
- (id)description;
- (void)dealloc;

@end
