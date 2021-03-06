//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKShareInvitationResponseOperation : CKOperation
{
    NSArray *_invitationsToAccept;
    NSArray *_invitationsToDecline;
    CDUnknownBlockType _shareInvitationResponseCompletionBlock;
    NSMutableDictionary *_successfulResponsesByID;
    NSMutableDictionary *_invitationsByInvitationID;
    NSMutableDictionary *_responseErrorsByInvitationID;
}

@property(retain, nonatomic) NSMutableDictionary *responseErrorsByInvitationID; // @synthesize responseErrorsByInvitationID=_responseErrorsByInvitationID;
@property(retain, nonatomic) NSMutableDictionary *invitationsByInvitationID; // @synthesize invitationsByInvitationID=_invitationsByInvitationID;
@property(retain, nonatomic) NSMutableDictionary *successfulResponsesByID; // @synthesize successfulResponsesByID=_successfulResponsesByID;
@property(copy, nonatomic) CDUnknownBlockType shareInvitationResponseCompletionBlock; // @synthesize shareInvitationResponseCompletionBlock=_shareInvitationResponseCompletionBlock;
@property(copy, nonatomic) NSArray *invitationsToDecline; // @synthesize invitationsToDecline=_invitationsToDecline;
@property(copy, nonatomic) NSArray *invitationsToAccept; // @synthesize invitationsToAccept=_invitationsToAccept;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithInvitationsToAccept:(id)arg1 invitationsToDecline:(id)arg2;
- (id)init;

@end

